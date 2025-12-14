/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((max((arr_2 [i_0 - 1]), 23600)));
        var_20 |= (min((arr_3 [i_0 - 1]), ((var_1 ? var_11 : var_17))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 ^= (-6491411202591454671 > 12552);
        var_22 = (((arr_6 [10]) ? var_17 : (arr_6 [i_1])));
        var_23 |= (!-20203);
        arr_8 [i_1] = var_12;
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_24 = (((arr_10 [i_2 + 1]) ? (arr_10 [i_2 + 1]) : (((arr_10 [i_2 + 2]) ? (arr_9 [i_2 + 1]) : (arr_9 [i_2 - 1])))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_25 = (min(var_25, (~1)));
            arr_14 [i_2] [i_2] [6] |= ((~(arr_12 [i_3 - 1] [i_3 - 1])));
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            var_26 = ((((max(12552, var_12))) ? 1942502101345327794 : var_3));
            var_27 = ((~(((arr_11 [i_4]) ? (((max((arr_12 [i_4 + 1] [9]), 1)))) : var_11))));
            arr_18 [i_2 + 1] [i_2 + 1] [i_4] = (!var_11);
        }
        for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_28 -= ((min(-12553, var_1)));
            var_29 += -20098;
            arr_22 [14] = ((((var_16 != (45438 / 8))) ? 4525624079731475072 : (var_13 | var_15)));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_30 = (arr_25 [0] [i_6] [20] [20] [0]);
                        var_31 = ((1 ? 637711880 : var_8));
                        var_32 = (((((2266749086 ? var_9 : -1215273664117273031))) ? 18261544882031493715 : (((1 ? var_0 : 69)))));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_33 [8] [2] [8] [8] [8] [i_6] = arr_26 [6];
                        arr_34 [i_2 + 2] [i_5 + 1] [i_2 + 2] [i_7] [1] = -1;
                    }
                    for (int i_10 = 4; i_10 < 20;i_10 += 1)
                    {
                        var_33 = ((((~(arr_25 [i_2] [i_7] [i_6] [i_5] [i_2])))) ? 3085209578 : 2028218213);
                        var_34 ^= (((arr_15 [i_5]) / (arr_15 [i_6])));
                        arr_37 [18] [18] [i_5 + 1] [12] [i_7] [i_7] [6] |= (((-(arr_10 [i_2 + 1]))));
                    }
                    var_35 = (max(var_35, (~17904)));
                    var_36 = (min(var_36, (((var_19 ? (-6491411202591454671 & 0) : var_10)))));
                    var_37 |= (!var_12);
                }
                var_38 ^= (var_2 ? 8 : (arr_29 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 2]));
                arr_38 [i_2] [i_2 - 1] [19] [19] = (((((65 ? 2024571926261865565 : 909760022))) ? var_6 : (((-3764892860610236253 ? var_10 : (arr_32 [i_2] [21] [i_2] [i_6] [1]))))));
            }

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_42 [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2] = ((((arr_15 [i_5]) ? -6491411202591454671 : 1012468087)));
                var_39 = (arr_35 [i_2 + 2] [9] [1] [1] [9]);
            }
            for (int i_12 = 3; i_12 < 21;i_12 += 1)
            {
                arr_45 [i_2] [i_2] [i_2] [i_2] = (((76 ? 180 : var_3)));
                var_40 = var_8;
            }
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 19;i_13 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        {
                            arr_58 [i_2] [i_2] [i_14 - 1] [i_15] [i_16] = ((!(arr_56 [i_2] [i_13 + 2] [i_14] [i_15 + 1] [i_15])));
                            var_41 = var_9;
                            var_42 = 131436716;
                            var_43 |= ((~(arr_13 [i_16 + 3] [i_14] [i_13 - 2])));
                        }
                    }
                }
            }
            var_44 *= ((var_14 | (arr_52 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])));

            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                var_45 = (max(var_45, var_8));
                var_46 = (!var_14);
                var_47 = (min(var_47, (1 ^ 1)));
                var_48 = -1060984340130398727;
            }
        }
        var_49 = (max(2501096494697413100, 1));
    }
    var_50 *= var_2;
    #pragma endscop
}
