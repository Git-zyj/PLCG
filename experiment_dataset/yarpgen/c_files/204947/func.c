/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204947
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
    var_15 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] = ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_0] [i_3]);
                            arr_13 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                            var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_10 [i_3] [i_1])))) : (min((var_13), (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                arr_14 [(unsigned short)15] [i_0] [i_1] = ((/* implicit */short) var_4);
            }
        } 
    } 
}
