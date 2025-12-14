/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200749
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
    var_16 = ((/* implicit */signed char) ((int) 7139381856578154206ULL));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_17 &= ((11307362217131397408ULL) + (11307362217131397405ULL));
                            arr_11 [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) arr_3 [i_1 + 3] [i_1 + 3])), (((0ULL) - (((/* implicit */unsigned long long int) 8070450532247928832LL)))))));
                            arr_12 [i_1] [i_1] [i_1 + 3] = ((/* implicit */unsigned long long int) arr_3 [(signed char)2] [i_1]);
                        }
                    } 
                } 
                var_18 *= ((/* implicit */unsigned int) ((int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) == (arr_0 [i_0])))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) 7139381856578154206ULL))) != (17283391565736895627ULL))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
    {
        arr_15 [i_4 - 1] &= ((/* implicit */signed char) ((((unsigned long long int) arr_14 [i_4])) + (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_4] [i_4])))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (long long int i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) arr_21 [i_4] [i_4] [i_4 - 2]);
                    arr_22 [i_6] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((int) arr_13 [i_4 - 1] [i_4 - 1]));
                    var_21 = ((/* implicit */long long int) max((var_21), (((long long int) arr_19 [i_6 + 2]))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_4 - 1] [i_5] [i_6 + 1])) || (((/* implicit */_Bool) ((arr_19 [i_4]) & (arr_23 [i_4] [i_5] [i_4] [i_7]))))));
                                arr_29 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 1] = ((/* implicit */long long int) arr_25 [i_4 + 1] [i_4 + 1] [i_6]);
                                var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -5448392997128637680LL)) - (11307362217131397417ULL)));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_19 [i_4]))));
                                var_25 ^= ((/* implicit */int) ((unsigned long long int) arr_20 [i_6 + 2] [i_6 + 1] [i_4 + 1] [i_4]));
                            }
                        } 
                    } 
                    arr_30 [i_4] [i_4] [i_6] [i_6] = ((signed char) arr_18 [i_4 - 1]);
                }
            } 
        } 
    }
}
