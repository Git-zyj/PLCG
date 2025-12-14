/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_12;
    var_21 = 1;
    var_22 |= var_11;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_23 = (min(var_23, (((+((min((arr_1 [i_0 - 1]), 1))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_1] |= (1048560 + 1);
                        var_24 = 1;
                        arr_11 [i_1] [i_2 - 1] [i_2] [i_2 - 1] |= 0;
                        arr_12 [0] [i_1] [i_2] [i_2] = (arr_5 [i_3] [i_3 + 1] [i_3] [i_3 + 3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_25 = (arr_14 [3]);
                            var_26 = (arr_1 [i_5]);
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_27 = ((1 ? 1 : (arr_16 [i_4] [i_4] [i_4] [i_4 + 1] [i_2] [i_4] [i_4 - 3])));
                            var_28 = (~(arr_5 [i_0 + 1] [i_2 - 1] [i_4] [i_6 + 1]));
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_4 + 1] [i_2] [i_2] [i_2] = 18446744073709551615;
                            var_29 = (max(var_29, (arr_14 [i_0])));
                            var_30 = (min(var_30, (~-1)));
                            var_31 = -192392095;
                        }
                        var_32 = 1;
                        var_33 -= 12;
                        var_34 = ((~((var_8 ? 234081683 : -21))));
                    }
                    var_35 = (min(var_35, 8));
                }
            }
        }

        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            arr_27 [i_8] = 1;
            arr_28 [i_0] [12] &= 1;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_36 = (arr_29 [i_0] [i_0]);
                var_37 = (max(var_37, 18218145997803936439));
                var_38 = 18378;
                var_39 = (arr_13 [i_10] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]);
            }
            arr_34 [i_0] = (((1 & 2040) ? -1 : 2));
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            arr_38 [i_0] [i_0] [i_11] = -1;
            var_40 += (arr_29 [i_0 - 1] [i_0 - 1]);
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
        {
            var_41 = (21 ^ 0);
            arr_43 [i_0 - 2] [i_0 - 2] [i_0] = 1;
        }
    }
    /* vectorizable */
    for (int i_13 = 4; i_13 < 14;i_13 += 1)
    {
        var_42 = (arr_36 [i_13 - 2] [i_13 - 3] [i_13 - 3]);
        arr_47 [i_13] = (((arr_16 [i_13 + 2] [i_13] [i_13 - 4] [i_13 - 2] [6] [i_13 - 2] [i_13]) ? (arr_4 [i_13 - 1]) : (arr_16 [i_13 - 3] [i_13 - 1] [i_13 + 1] [i_13 - 4] [4] [i_13] [i_13])));
    }
    for (int i_14 = 2; i_14 < 22;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
        {
            var_43 = (((-2147483647 - 1) ? 26 : (~1)));
            arr_53 [i_15] = (min(((((arr_49 [i_14] [i_14 - 2]) + (arr_49 [14] [i_14 - 1])))), (((arr_48 [i_14 - 1]) + (arr_48 [i_14 + 2])))));
            var_44 = (max((--1), (max(((~(arr_48 [i_15]))), 206618071))));
            var_45 &= (((min(1, (arr_50 [i_14 - 2])))) * (arr_49 [i_14] [i_15]));
            arr_54 [i_14] [i_15] [i_14] = (((-(arr_51 [i_15]))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
        {
            arr_57 [i_16] [i_14] = 2305842974853955584;
            var_46 = (arr_49 [i_14 + 1] [i_14 - 2]);
            var_47 = (min(var_47, var_17));
            var_48 = 16140901098855596031;
            var_49 = 0;
        }
        arr_58 [i_14] [i_14] = 18446744073709551615;
    }
    #pragma endscop
}
