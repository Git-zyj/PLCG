/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (max((((max(var_8, 1)))), (~1)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_1] [i_1] [i_0] = ((arr_8 [i_2 + 2] [i_2 - 1] [i_2] [i_2 - 1] [i_1]) - (((~(arr_4 [i_3])))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (((var_9 + 1) ? (arr_11 [i_0] [i_0] [i_2 - 1] [i_3]) : (~3414455085)));
                            var_16 |= arr_15 [i_4];
                            var_17 = (arr_11 [i_0] [i_0] [i_3] [i_4 - 1]);
                        }
                        for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_18 += var_11;
                            arr_21 [i_0] [i_0] [i_5] [i_5 + 2] = (((((var_10 ? 213 : 3414455085))) ? (arr_14 [i_2 - 2] [i_1] [i_2 + 2] [1]) : (~1)));
                            arr_22 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_0 [i_3]);
                            arr_23 [i_0] [i_1] [i_5] [i_3] [i_0] [i_5] = 1;
                            var_19 = (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || var_8));
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_6 - 1] [i_3] [i_2] [i_1] [i_0] = ((var_0 >> ((0 ? 1 : (arr_3 [i_0] [i_0])))));
                            var_20 = (min(var_20, (arr_14 [i_6 - 2] [i_1] [i_1] [i_6 + 2])));
                        }
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            var_21 = (min(var_21, ((((var_1 < var_2) ? var_13 : (arr_15 [3]))))));
                            arr_31 [i_0] [i_1] = (var_6 || (arr_14 [i_0] [i_2 + 2] [i_2 + 2] [i_7 + 1]));
                        }
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_22 = (((((arr_15 [i_8]) >= (arr_24 [i_0] [i_1]))) ? ((max(((((arr_0 [i_2 - 2]) >= (arr_3 [i_0] [i_1])))), (~1)))) : (((arr_8 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2] [i_2]) ^ (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 2])))));
                        arr_34 [i_8] [i_2 + 2] [i_1] [i_1] [i_1] [i_0] = min(1, 1);

                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            arr_37 [i_1] = ((((-((min(-127, var_7)))))) < (arr_1 [i_8]));
                            var_23 += (~(0 != 1));
                            var_24 += (((min((((arr_18 [i_0] [i_1] [i_2 - 1] [i_8] [i_9 + 1]) | var_6)), (max((arr_18 [i_0] [i_1] [i_1] [i_8] [i_2]), var_14)))) & 127));
                            var_25 ^= min((max(((var_3 ^ (arr_33 [i_2 - 1] [i_8] [i_9]))), var_14)), var_6);
                        }
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_2] [i_10] = 138;
                        arr_41 [i_1] [i_1] = 0;
                        var_26 -= ((((min((((-(arr_0 [i_0])))), (max((arr_8 [i_0] [i_1] [i_2] [i_10] [i_0]), (arr_26 [i_0] [i_0] [i_0] [i_2 + 1] [i_10])))))) ? (var_2 > var_2) : ((max((arr_3 [i_0] [i_2 - 2]), var_5)))));
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                    }
                }
            }
        }
    }
    var_27 = var_13;
    var_28 = (~var_6);
    #pragma endscop
}
