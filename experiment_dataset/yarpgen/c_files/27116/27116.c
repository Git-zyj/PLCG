/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((~(~73))), var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (((arr_3 [i_0] [i_0]) % ((var_11 ? var_3 : var_0))));
        arr_4 [i_0] [i_0] = (arr_0 [12] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_1] [5] [i_0] = ((((((arr_3 [i_1] [i_1]) >= var_18))) ^ ((-(arr_7 [i_2] [i_1] [i_0] [11])))));
                    arr_12 [i_0] [i_0] [i_0] [15] = -2096554742443667205;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_21 |= (!0);

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                arr_21 [i_3 + 1] [i_4] [i_4] [i_4] = (((arr_16 [i_5 + 2]) | 13));
                arr_22 [i_3 - 2] [i_4] [i_5] = (!-20);
                var_22 |= var_16;
            }
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {

                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    var_23 = ((((var_3 ? (arr_15 [i_6]) : 8)) & 65508));
                    arr_28 [8] [i_6 - 1] [8] [8] = (!var_3);

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_24 = arr_23 [i_3] [i_3 - 1];
                        var_25 = (((arr_17 [i_3] [i_3 + 1] [i_4]) - var_2));
                        arr_31 [i_3] [i_3] [i_3] [i_3 - 2] [i_3] [i_3] [i_3] = (!6);
                    }
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_26 = (arr_33 [i_3 - 2] [i_4] [i_6] [i_9]);

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_37 [i_3] [i_3 + 2] [i_9] [i_3 + 2] [i_3] [i_3 + 2] &= (((-8 + 2147483647) << (((-6 + 24) - 18))));
                        var_27 = (-10 != 6);
                    }
                }
                arr_38 [i_3] [i_3 - 1] [20] = var_2;
                var_28 |= (((((8 ? (arr_26 [1] [1] [i_3] [i_3 + 1] [i_3]) : var_15))) ? 8 : (var_10 && var_0)));
            }
            var_29 = ((-(((arr_13 [3]) / (arr_13 [i_3 + 1])))));
            arr_39 [i_3] [i_4] = 0;
            arr_40 [i_3] = (arr_34 [i_3 + 1]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    {
                        arr_45 [i_3] [i_3] [i_12] [i_3] = ((14 % (arr_16 [i_4])));
                        var_30 = (min(var_30, (arr_16 [i_3])));
                        var_31 = (min(var_31, var_9));
                        var_32 = (((arr_20 [i_12 + 1] [i_12 - 1] [i_12]) << (((arr_20 [i_12 - 1] [i_12 - 1] [i_12]) - 49372))));
                    }
                }
            }
        }
        var_33 += ((!(arr_32 [i_3 - 1])));
    }
    var_34 = (!var_11);
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                {
                    var_35 = ((var_11 % (((((48 <= (arr_19 [i_13] [0] [i_15] [i_15]))))))));
                    var_36 = (((-(min(var_13, (arr_41 [i_13]))))));
                }
            }
        }
    }
    #pragma endscop
}
