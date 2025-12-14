/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] [3] [i_1] [i_1] = (((!(var_14 || 0))));
                    var_18 = 3873964707;
                    arr_10 [i_2 - 4] [i_1] [7] = (~((((min(var_0, var_15))) ? (max(39, var_8)) : (((max(217, var_6)))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_17 [i_3 - 1] [i_4] = (((((39 ? var_10 : (arr_16 [8])))) ? 65519 : var_2));

            for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_19 = ((var_2 ? 421002587 : var_17));
                            arr_25 [i_3] [i_7] = (arr_13 [i_3] [i_7]);
                        }
                    }
                }
                var_20 = ((var_2 & (arr_15 [10] [i_4])));
            }
            for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_21 *= ((var_13 ? (arr_27 [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 + 1]) : (((arr_16 [i_8]) ? 38 : var_7))));
                arr_28 [i_3] [i_4] [i_8] = var_17;
                var_22 = (((var_0 ^ 31) ? (((arr_13 [19] [1]) & var_0)) : var_15));
            }
            var_23 *= (((arr_22 [i_3] [i_3] [i_4]) ? var_2 : (((arr_27 [3] [i_4] [i_4] [3]) ? (arr_23 [i_4]) : var_0))));
        }
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            var_24 = 18444;
            arr_33 [i_3] [i_9] = var_16;
            arr_34 [i_9] [i_9] [14] = (((((var_5 ? 1 : var_1))) ? (arr_26 [17] [i_3 + 1] [i_3]) : ((((arr_11 [i_9] [i_3]) != var_0)))));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_25 = ((-(arr_38 [i_3 + 2] [i_3 + 1])));

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_26 = ((+(((arr_29 [7] [i_10] [1]) ? var_13 : (arr_11 [i_3] [i_11])))));

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_27 = ((((arr_31 [i_13] [i_10]) ? -1358036949014398290 : (arr_32 [i_11] [i_13]))));
                        arr_50 [i_11] [i_11] [i_11] [i_12] [i_13] = ((4294967270 ? (arr_38 [i_3] [3]) : var_16));
                        arr_51 [i_11] [16] [i_11] [i_10] [1] [i_10] [i_11] = ((4294967270 | 12371032393781407855) | 109);
                    }
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        arr_55 [i_3] [i_10] [i_3] [i_12] [i_11] = 25;
                        arr_56 [i_3 - 1] [i_3 + 2] [i_11] [i_3 - 1] [4] [13] = (~(arr_49 [i_3] [i_10] [i_11] [1] [i_10]));
                    }
                    var_28 = 25;
                    arr_57 [i_3] [i_11] [i_11] [i_3] [i_3 + 1] [i_3] = ((!(arr_21 [i_12] [i_12] [i_3 + 2] [i_3 - 1])));
                    var_29 = (arr_26 [i_10] [i_11] [i_12]);
                }
                var_30 = var_5;
            }
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {

                for (int i_16 = 4; i_16 < 17;i_16 += 1)
                {
                    arr_65 [i_3] [i_10] [i_15] [i_16] = var_6;
                    arr_66 [i_16] [i_10] [i_15] [i_16] = 0;
                    var_31 = (((-(arr_47 [12] [i_16 + 3] [i_15] [8] [i_16]))));
                    var_32 = (-7699168189575642618 / 4802081940525962541);
                }
                var_33 = ((-(arr_14 [i_3 + 1] [i_10] [i_3 - 1])));
                var_34 -= ((27 ? 0 : 20827));
            }
        }
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            arr_70 [i_3] [i_17] |= 604096484;
            var_35 = ((20827 ? 1225851539 : -122));
            var_36 += (((((var_10 ? 1225851539 : var_5))) + (((arr_58 [i_3] [i_3] [6] [7]) & 8458112506110191165))));
            arr_71 [i_3 + 2] [i_17] [i_17] = ((~(arr_19 [1] [i_17])));
        }
        var_37 |= 4294967271;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {
                {
                    var_38 += ((24 ? (arr_53 [i_3] [i_18] [i_18] [i_19] [12]) : -122));
                    arr_77 [i_19] = (7699168189575642617 & 10593231713093207251);
                    arr_78 [17] [i_3] [i_19] [i_19] = (((arr_44 [i_3] [i_3 - 1] [i_3] [i_3]) ^ var_14));
                }
            }
        }
    }
    #pragma endscop
}
