/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_5, var_7));

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_21 = ((~((((arr_0 [i_0]) <= (arr_1 [i_0]))))));
        arr_3 [i_0] = var_14;
        var_22 = (max(var_22, (((-(((-(arr_0 [6])))))))));
        var_23 ^= (((var_18 ? 5 : (~var_19))) % -758251756);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_24 -= ((!(arr_1 [12])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_11 [14] [i_3] [i_3] [i_3] &= ((var_15 <= (arr_9 [i_1 + 2] [i_1] [i_2 - 2] [i_3])));
                    var_25 = (-(~-758251756));

                    for (int i_4 = 4; i_4 < 16;i_4 += 1)
                    {
                        var_26 = ((!(arr_12 [i_4] [i_4] [i_4 - 1] [i_4 + 2] [4])));
                        var_27 = (min(var_27, ((((~var_11) == -var_16)))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_28 = 758251773;
                        var_29 = (((arr_12 [3] [i_1 - 1] [1] [i_1 - 1] [13]) - 2794844977));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_19 [i_1] [1] [i_3] [i_6] = (arr_6 [i_1] [i_1] [i_1]);

                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            arr_22 [i_6] [i_1] [i_1] [i_6] [i_6] = (~var_13);
                            var_30 = (((4095 ? var_15 : var_6)));
                            arr_23 [i_1] [i_2] [9] [0] = 12834215251280679973;
                            var_31 = (((arr_17 [i_2] [9] [i_2 - 2] [9] [9] [i_2 + 2]) << (var_15 - 97)));
                            var_32 = (arr_21 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1]);
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_26 [19] [i_2] [19] [10] [i_2] [i_1] [i_2] = (~var_8);
                            arr_27 [8] [i_1] [i_2] [8] [i_6] [i_8] = var_4;
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_33 = 4095;
                            var_34 = (arr_1 [i_1]);
                            var_35 = (min(var_35, (arr_14 [i_2 + 2] [9] [i_2 + 2] [i_2 + 3] [6] [i_1 - 1])));
                            var_36 = ((!(((arr_2 [i_1]) >= (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
                        }
                        for (int i_10 = 3; i_10 < 18;i_10 += 1)
                        {
                            arr_34 [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_1] = (3676733873 ^ var_3);
                            arr_35 [i_1] [i_2 - 2] [i_3] [i_6] [i_10 - 2] = (((arr_18 [i_10 - 2] [i_2 - 2] [i_1 - 1] [5]) ? (arr_18 [i_10 - 3] [i_2 - 3] [i_1 + 1] [i_1]) : -2147483619));
                            arr_36 [i_10] [i_1] [i_1] [i_1] [i_2 + 3] [i_1] = (((arr_16 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_2 + 3] [i_2 + 3] [i_1 - 1]) ? (arr_16 [19] [i_10 - 1] [i_10 - 3] [19] [i_2 - 3] [i_1 - 1]) : (arr_16 [i_10 + 1] [i_10 - 3] [i_10 + 1] [i_2 + 3] [i_2 - 1] [i_1 - 1])));
                            var_37 *= var_16;
                            var_38 = var_18;
                        }
                        arr_37 [i_6] [i_3] [i_3] [i_2 + 2] [i_2 - 3] [i_6] &= (((arr_25 [i_6] [i_6]) ? (((arr_29 [i_6] [i_6] [i_3] [i_3] [1] [i_1]) ? -7257664132733172830 : 758251759)) : ((((!(arr_29 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1])))))));
                    }
                }
            }
        }
        var_39 -= ((!(arr_29 [6] [i_1 - 2] [i_1] [15] [7] [0])));
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
    {
        var_40 += ((((var_12 | (arr_24 [i_11] [7] [i_11] [i_11] [i_11 + 2])))) ? ((-(arr_18 [1] [1] [12] [i_11 + 2]))) : 218);
        arr_42 [i_11] [i_11 - 1] = ((var_16 ? (~4294963195) : 4094));
    }
    #pragma endscop
}
