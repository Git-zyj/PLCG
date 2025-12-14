/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211573
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((arr_3 [i_1 - 1]), (((/* implicit */int) ((_Bool) arr_3 [i_1 - 1]))))))));
                                arr_16 [(signed char)14] [i_1 - 1] [i_1 - 1] [10] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1 - 1]))) : (((unsigned int) arr_6 [(unsigned short)1] [i_1])))) - (((/* implicit */unsigned int) var_13))));
                                var_16 += ((/* implicit */unsigned short) arr_7 [i_3] [i_2] [6ULL]);
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_2))));
                            }
                        } 
                    } 
                } 
                var_18 ^= ((/* implicit */short) arr_11 [i_0]);
                var_19 = ((/* implicit */int) var_4);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_11);
}
