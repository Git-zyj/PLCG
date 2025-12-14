/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214793
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) var_4))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((long long int) var_0)) | (((/* implicit */long long int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 2] [i_2 + 3] [i_0] [i_4])) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (1532660428319378481LL))) : (min((((/* implicit */long long int) var_0)), (((1532660428319378458LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-15644)))))))));
                                arr_14 [(_Bool)1] [(_Bool)1] [i_0] [i_1] [i_2 - 1] [i_3 - 1] [i_4] = ((/* implicit */unsigned int) arr_13 [(short)14] [i_1] [i_2] [i_3 + 1] [i_4] [i_1]);
                                arr_15 [i_0] [i_3] [i_0] = ((short) (!(((_Bool) arr_11 [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */short) max(((~(arr_1 [(signed char)19]))), (((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        var_12 = ((/* implicit */int) (-(var_9)));
    }
}
