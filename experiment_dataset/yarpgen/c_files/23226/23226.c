/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = var_0;
                            var_15 = (((((~(arr_2 [i_2 + 2] [i_0] [i_0])))) ? (((!(((arr_4 [i_0] [i_1] [i_2 - 1]) || (arr_0 [i_2] [i_1])))))) : ((((arr_7 [i_0] [i_1] [i_2 + 2] [i_2] [i_1] [i_2 - 1]) == (arr_3 [i_1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_16 = (((var_13 ? 4294967274 : (arr_7 [i_0] [i_0] [11] [i_5 + 1] [i_0] [i_0]))));
                                var_17 = 21;
                                var_18 = ((((((var_3 ? 1 : (arr_0 [i_0] [i_0])))) + (arr_14 [i_0] [i_0] [i_4] [19] [9]))));
                                var_19 = (min(var_7, 1));
                                var_20 = -var_9;
                            }
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_21 = var_8;
                                var_22 = (((min((arr_13 [i_0] [i_1] [i_4] [i_1] [i_7] [i_7]), (((1 ? var_11 : 1)))))) ? var_10 : (arr_2 [i_0] [i_1] [i_0]));
                            }

                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                var_23 = ((~(arr_4 [i_4] [i_1] [i_0 - 1])));
                                var_24 += ((var_13 ? ((65521 ? ((var_4 ? 0 : var_12)) : ((~(arr_17 [i_0] [22] [i_4]))))) : ((~((~(arr_1 [i_8])))))));
                                var_25 = (min(var_25, var_10));
                            }
                        }
                    }
                }
                arr_22 [i_0 + 1] [11] = min((((18357215373498517530 & 65521) ? (arr_12 [i_0] [i_1] [i_0 - 1]) : 403464114)), (((-2026187702 != (arr_7 [i_1] [i_1] [i_0] [i_0 - 1] [i_0] [i_0])))));
            }
        }
    }
    var_26 = -20598;
    var_27 = 1;
    var_28 = ((!((min(var_7, var_1)))));
    #pragma endscop
}
