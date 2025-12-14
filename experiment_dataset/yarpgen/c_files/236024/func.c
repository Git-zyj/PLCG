/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236024
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((long long int) (+(min((((/* implicit */int) var_12)), (arr_3 [i_3] [i_1 - 4] [i_3]))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-11229)) / (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [(unsigned short)15] [i_0 - 1] [i_1] [i_1 - 1])))) : (var_2)));
                            }
                        } 
                    } 
                    arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(min((((/* implicit */unsigned int) arr_10 [i_0 + 1] [i_0] [15] [i_0] [i_0] [(short)14])), (arr_4 [(unsigned short)3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_1] [i_2] [4] [i_2])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_14);
    var_21 = ((/* implicit */int) var_11);
    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
}
