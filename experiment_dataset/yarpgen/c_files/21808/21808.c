/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_13;
                var_16 = (((((~(arr_2 [i_1] [i_0])))) ? ((((arr_4 [i_1]) && ((((arr_5 [i_0]) ? (arr_6 [i_0] [i_1]) : var_4)))))) : var_2));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 2] = (max(8, var_7));
                            var_17 = (min(((((((23473 ? -4 : 12347)) + 2147483647)) >> (((arr_8 [i_0] [i_0] [i_0]) - 1245)))), ((65535 ? -58 : 38251))));
                            var_18 = ((!(!var_2)));
                        }
                    }
                }
                var_19 = ((48810 ? 255 : 58652));
            }
        }
    }
    var_20 = (max(var_20, (((~(((var_3 ^ var_12) ^ ((min(var_9, 42))))))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_23 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1] = ((((((arr_20 [i_6 + 1] [i_6 + 1] [i_6 - 1]) ? (arr_20 [i_6 - 1] [i_6 + 1] [i_6]) : (arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1])))) || ((((arr_20 [i_6 - 1] [i_6 + 1] [i_6 + 1]) ? (arr_21 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1]) : (arr_20 [i_6 + 1] [i_6 + 1] [i_6]))))));
                            arr_24 [i_6] = ((var_9 * ((((-2 * 24590) || (-40 / var_6))))));
                            var_21 = (min(var_21, (arr_21 [i_4] [i_5 + 1] [i_4] [i_6 - 1] [i_7 - 1] [i_7])));
                            arr_25 [i_5] [i_5 + 1] [i_5 - 1] [i_5] [i_6] = ((var_6 && (arr_17 [i_7 - 2] [i_7])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 8;i_10 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((min(((min((arr_21 [i_4] [i_4] [i_4] [i_8] [i_9] [i_4]), (arr_30 [i_8] [i_8 - 3] [i_8] [i_8])))), -113)))));
                                var_23 = (arr_32 [i_4] [i_5 - 1] [i_8 + 1] [i_5 - 1] [i_10 + 2]);
                                arr_34 [i_9] [i_10 - 2] = ((((max((arr_20 [i_5 + 1] [i_8 - 1] [i_10 - 1]), (arr_20 [i_5 - 1] [i_8 + 1] [i_10 + 4])))) ? ((min((arr_20 [i_5 + 1] [i_8 - 1] [i_10 + 2]), (arr_20 [i_5 - 1] [i_8 - 1] [i_10 - 1])))) : (arr_20 [i_5 - 1] [i_8 - 2] [i_10 - 2])));
                            }
                        }
                    }
                }
                var_24 -= ((((((arr_32 [i_4] [i_5] [i_5 - 1] [i_4] [i_5 - 1]) ? -var_1 : (arr_31 [i_4] [i_4] [i_5])))) ? var_3 : (arr_27 [i_4] [i_5 + 1] [i_5 - 1] [i_5 + 1])));
                var_25 = (max((((min(66, -24)))), ((min((arr_15 [i_4]), var_9)))));
            }
        }
    }
    var_26 = (63 < var_15);
    #pragma endscop
}
