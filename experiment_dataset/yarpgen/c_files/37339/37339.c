/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 + 2] [17] = (max(((-1817092111 ? 147 : ((min(-596641180026908229, var_14))))), (((!(arr_0 [i_0 + 1]))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0 + 2] [i_0 + 2] = ((((var_5 == (arr_1 [i_1])))));
            arr_6 [i_0 - 1] = (arr_0 [13]);
            var_16 = ((222 ? (((arr_3 [i_0]) ? (-32767 - 1) : 33224)) : (arr_0 [i_1])));
            var_17 = (max(var_17, 127));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_18 ^= (((arr_0 [11]) * (!61833)));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_19 ^= (arr_0 [i_3]);
                    var_20 ^= (47220 ^ 1580210635246393621);
                }
                for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    arr_19 [9] [9] [i_3] = var_5;
                    var_21 = (max(var_21, ((((0 ? 1610612736 : var_12))))));
                    arr_20 [2] [2] [2] = var_8;
                    var_22 = 27;
                }
                for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_6] [i_2] = 11458;
                    arr_24 [i_0 + 1] [i_6] [i_0] [i_0 + 1] [i_0 + 3] [i_0 - 1] = ((512 ? 49483 : 127));
                }
                arr_25 [i_3] [i_2] [i_2] [i_0] = (!932692499);
                arr_26 [i_2] [i_2] [i_2] [i_0] = ((-var_1 ? 58 : (arr_15 [i_0] [i_2] [i_2] [i_2])));
            }
            var_23 = ((0 ? 1629284170 : 16726932143542794572));
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_24 = (((arr_17 [6] [i_0 + 2] [i_0 + 2] [i_8 - 1] [18]) == (arr_31 [3] [i_0 + 2] [i_0 + 2])));
                        var_25 = (min(var_25, ((((arr_9 [i_0 + 1] [1]) ? 1 : var_0)))));
                    }
                }
            }
            var_26 = (min(var_26, (((arr_15 [18] [18] [18] [i_0 - 1]) ? (!31) : ((-1 ? (arr_33 [i_0]) : (arr_10 [i_0] [i_7] [i_0] [i_7])))))));
            var_27 = ((!(var_9 < -78)));
            arr_35 [i_0] [i_7] = (((64 | -63) ? (arr_29 [i_0] [i_7] [i_0]) : (arr_18 [i_0 + 1] [i_0 + 2])));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            arr_38 [i_10] [i_0] [i_0] = ((min(((arr_30 [i_0] [i_0]), -33985655))));
            var_28 = (min(var_28, (arr_34 [i_0] [i_10] [i_0] [i_0])));
            arr_39 [i_10] = (min(-var_0, (arr_32 [i_0] [i_0] [i_0] [9])));
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_29 = ((!((min(((((arr_14 [i_0] [i_0 + 2] [i_0] [9]) ? var_6 : -1))), ((var_10 ? (arr_27 [i_0] [6] [i_0]) : (arr_8 [0]))))))));

            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                var_30 = (((-((((arr_17 [i_12 - 2] [i_12 - 2] [i_0] [i_0 + 3] [i_0]) < 229))))));
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            arr_51 [i_14] [i_11] [i_12] [i_14] [i_0 - 1] [i_12] [i_13] = (arr_16 [i_0] [i_11] [i_11] [i_11]);
                            var_31 |= ((47395 << (-656026820 + 656026831)));
                        }
                    }
                }
            }
            for (int i_15 = 1; i_15 < 17;i_15 += 1)
            {
                arr_56 [i_0] [i_0] [i_11] [i_15] = (max((((arr_32 [i_15 + 2] [i_15 + 1] [i_15 + 1] [i_0 - 1]) ? (arr_32 [i_15 + 2] [i_15] [i_15 + 1] [i_0 + 2]) : (arr_32 [i_15 + 3] [i_0 + 2] [i_15 + 1] [i_0 + 2]))), (arr_30 [i_0] [i_15 + 3])));
                var_32 -= (max((arr_15 [i_0] [i_0] [i_0] [i_0]), ((max((arr_11 [i_0] [13] [i_11]), (arr_47 [i_0 + 1] [i_0 + 1] [i_15 + 2] [i_15]))))));
            }
            /* vectorizable */
            for (int i_16 = 4; i_16 < 17;i_16 += 1)
            {
                arr_60 [i_0] [i_0] = (arr_4 [i_16]);
                var_33 = var_12;
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 15;i_17 += 1)
    {
        arr_64 [i_17 - 1] = (-664720217 | -5);
        var_34 = (arr_21 [1] [i_17] [i_17] [15]);

        for (int i_18 = 4; i_18 < 15;i_18 += 1)
        {
            var_35 = ((10 != ((var_6 | (arr_55 [i_17] [i_17 + 3] [i_17 - 1] [i_17])))));
            var_36 += (arr_33 [i_17]);
        }
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1)
    {
        arr_72 [i_19] = (arr_71 [i_19]);
        var_37 = ((min((arr_69 [i_19] [i_19]), (arr_71 [i_19]))));
    }
    var_38 ^= (((((-((64550 ? var_0 : var_3))))) ? 128 : var_9));
    var_39 *= ((-(((var_6 ? var_2 : var_7)))));
    var_40 = 2847811253985457878;
    #pragma endscop
}
