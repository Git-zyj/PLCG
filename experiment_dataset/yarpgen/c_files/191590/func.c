/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191590
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned int) ((var_5) / (((/* implicit */unsigned long long int) var_13))));
        arr_2 [6U] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) arr_0 [i_0]))))) >> (((arr_0 [i_0]) + (1790924066)))));
        arr_3 [7ULL] [i_0] = ((unsigned long long int) var_10);
        var_16 ^= ((int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */unsigned long long int) ((var_12) | (var_12)))) - (18446744073709551611ULL)))));
        var_18 = ((var_14) >> (((13764138147066020178ULL) - (13764138147066020173ULL))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            arr_8 [i_2] [i_1] [i_2] = ((/* implicit */int) ((unsigned long long int) var_10));
            arr_9 [i_2] [i_2] = ((/* implicit */int) ((unsigned int) var_11));
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) ((arr_0 [i_3]) - (arr_0 [i_3])));
            arr_12 [i_3] [9U] = ((/* implicit */int) var_5);
            var_20 = ((/* implicit */unsigned long long int) ((arr_0 [i_1]) <= (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) var_9)))))));
        }
        var_21 = ((/* implicit */unsigned int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) <= (((/* implicit */unsigned int) var_1))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) 424043764U);
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) 3870923545U);
                                arr_25 [11U] [11U] [2U] [i_6] [i_4] [13U] = var_12;
                                arr_26 [i_4] [12ULL] [i_4] [i_4] [i_4] [i_4] [i_4] = 1948777996U;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
