/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52185
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((unsigned long long int) arr_3 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_12 [i_2] [i_1] [i_2] [i_2 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_2 + 1])) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) var_16))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_2] [i_3] [i_2] = (~(arr_3 [i_1 + 2]));
                                arr_20 [i_4 - 1] [i_3] [i_0] [i_0] [i_1] [i_1 - 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1]))));
                                arr_21 [i_4] [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (~((-(12288LL)))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_11)))) % ((-(4876249029621538506ULL)))));
                    arr_23 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_17 [i_1] [i_2] [i_2] [i_0] [i_0] [i_1]))) & (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 + 1] [i_1])) : (var_7)))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned long long int) var_15);
}
