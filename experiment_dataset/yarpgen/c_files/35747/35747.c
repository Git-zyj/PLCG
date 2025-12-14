/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_1] [i_2] [i_2] [i_0] = ((~(arr_3 [i_1] [i_2])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [16] = (arr_6 [i_0]);
                        arr_15 [1] [i_1] [1] [1] [i_3] = (arr_3 [i_0] [23]);
                        arr_16 [i_0] [i_2] [4] [i_3] = var_7;
                        var_10 = (arr_4 [i_0] [i_1] [i_3]);
                        var_11 += var_9;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_12 = (128 ^ 255641813);
                        arr_19 [17] [i_4] [i_2] [i_1] [i_0] [i_0] = (!var_6);

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_13 = (min(var_13, ((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [15]) - (arr_12 [0] [0] [18] [i_5]))))));
                            arr_23 [i_5] [1] [i_2] [i_1] [1] = (((arr_22 [i_0] [i_0] [i_0] [i_0] [20]) && (arr_1 [i_0])));
                            var_14 ^= (arr_2 [i_0]);
                            var_15 = var_4;
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_34 [i_8] = (((arr_22 [i_8 + 1] [i_8 + 1] [13] [i_6] [i_6]) && (arr_33 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8] [1])));
                                var_16 = (65535 - 1);
                            }
                        }
                    }
                    var_17 = ((1698017429333277827 | (arr_8 [22] [i_1] [i_6] [1])));
                    var_18 *= 18446744073709551615;
                    arr_35 [i_0] [23] [i_6] = (arr_18 [1] [i_1] [i_1] [i_1]);

                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        arr_38 [i_0] [i_0] [i_0] = (((arr_36 [i_9 + 1] [i_9 + 3] [i_9 + 3] [i_9 + 1]) + (arr_9 [i_9 + 1] [i_9 + 3] [i_9 + 3] [i_9 + 1])));
                        arr_39 [i_0] = arr_24 [i_0] [i_0] [1];
                    }
                }
                var_19 = (((((arr_25 [i_0] [i_1] [i_0]) ? var_5 : 1164436274)) - ((((112 % 1698017429333277827) || 3865890778386072812)))));
                arr_40 [i_0] [i_0] [i_0] = ((max((var_2 != var_5), (arr_24 [i_0] [i_1] [i_1]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 4; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 20;i_12 += 1)
            {
                {
                    arr_51 [i_10] = 65535;

                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_20 = (min(var_20, (((var_6 ? (arr_21 [i_10 - 1] [i_10 - 1] [i_13] [i_10 - 1] [i_10 - 1] [6] [i_10 - 1]) : ((((!(arr_9 [i_10 + 1] [i_10 + 1] [i_12 - 3] [i_13]))))))))));
                        var_21 = ((!(~var_6)));
                    }
                }
            }
        }
    }
    var_22 = (15 && 4222124650659840);
    var_23 = var_7;
    #pragma endscop
}
