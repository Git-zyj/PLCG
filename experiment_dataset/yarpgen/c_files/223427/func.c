/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223427
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((long long int) var_1));
                                arr_12 [i_2] [7ULL] [i_2] [(short)2] [7ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((2224486350104467989ULL), (((/* implicit */unsigned long long int) arr_10 [i_0 + 2] [i_0 + 2] [(unsigned char)10] [i_0 - 2] [i_0 - 2]))))) ? (max((((/* implicit */unsigned int) arr_10 [i_0] [i_0 - 3] [i_0] [2U] [i_0 - 1])), (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 3] [i_0] [i_0 + 2] [i_0 - 2])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 3])))))));
                                var_20 = ((/* implicit */short) arr_7 [i_4] [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_13 [6] [(signed char)6] [(signed char)6] [6] |= ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? ((-(((((/* implicit */_Bool) arr_4 [21ULL] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_0 [6ULL])))))) : (((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_3 [(unsigned char)6] [i_1] [i_0])))) : (((/* implicit */int) var_16))))));
                    arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_13);
}
