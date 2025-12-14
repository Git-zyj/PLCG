/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_18);
    var_21 = -13520;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [4] [4] = (((!var_19) ? var_19 : ((-863947229 ? 24898 : 63278))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_22 |= (!var_14);
            var_23 = (min(var_23, (!13520)));
        }
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_24 -= (arr_0 [i_0 + 1]);
            var_25 ^= (((((var_4 ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 2]) : (arr_4 [7] [i_2] [i_2 - 2])))) ? ((53 ? -126 : 13519)) : ((13519 ? var_15 : 63))));

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_14 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] = var_18;
                    var_26 -= ((-13536 || (((var_16 ? -6606268702457882473 : -13519)))));
                    var_27 = ((var_19 ? 126 : var_16));
                }
                var_28 = (max(var_28, (((((((!(arr_5 [i_2 + 2]))))) | var_0)))));
            }

            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                var_29 = (arr_12 [i_5 - 2] [i_2 + 2] [i_5]);
                var_30 = (((arr_12 [i_0] [i_0] [6]) <= (arr_12 [i_0] [i_2 + 1] [i_0])));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        var_31 = var_16;
                        var_32 -= (((arr_12 [i_8 - 2] [i_7] [i_6]) * var_16));
                        var_33 = (var_11 ? (arr_5 [i_0 - 2]) : (arr_0 [i_0 - 2]));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_34 = (~590);
                        arr_26 [0] [0] [2] [0] [6] = ((var_19 << (var_12 - 3639979728609879639)));
                        var_35 ^= (((((var_12 ? var_11 : var_11))) ? (arr_19 [i_2 - 1] [5] [i_7 + 1]) : (arr_24 [i_9] [i_2] [i_6] [i_9] [2] [i_9])));
                    }
                    var_36 = (min(var_36, ((((arr_12 [i_0] [i_0 - 2] [i_2 - 2]) ? (arr_12 [i_0] [i_0 + 2] [i_2 - 1]) : (arr_12 [i_0] [i_0 - 2] [i_2 - 1]))))));
                }
                arr_27 [i_0] [i_0] [i_0] [8] = -var_6;
            }
            var_37 ^= 125;
        }
        for (int i_10 = 3; i_10 < 9;i_10 += 1)
        {
            var_38 = 13517;
            arr_31 [i_0] [i_0 + 2] [i_10 - 2] = (!var_13);
            var_39 = var_17;
            arr_32 [i_0] = var_9;
        }

        for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
        {
            var_40 -= (((arr_25 [2] [i_0 + 1] [i_0 + 2] [i_11 + 1] [i_0 + 2]) | var_8));
            arr_35 [i_0 + 2] [i_11] [6] = (((((var_16 ? 22523 : var_0))) ? (arr_15 [i_0 + 1] [6] [i_11 - 1]) : (~var_13)));
            arr_36 [i_0] [i_11] = ((13499 ? var_0 : (arr_16 [i_0 - 2] [i_11 + 1])));
        }
        for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
        {
            arr_41 [i_0] = (!var_2);
            var_41 = 65517;
        }

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_42 = ((~((0 ? -13517 : 14866827793063943138))));

            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                arr_47 [i_0 - 2] [i_0 - 2] [i_14] = -0;
                arr_48 [0] [i_13] [6] |= ((((arr_22 [6] [4] [i_13] [i_14]) >> (var_10 - 1903351830))));
                var_43 = (max(var_43, (arr_16 [i_13] [i_13])));
                arr_49 [1] [i_14] [i_14] = (((arr_37 [i_0 + 1]) ? (arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 2]) : var_5));
                var_44 = (((arr_0 [i_0 - 1]) ? (~3579916280645608477) : var_19));
            }
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                var_45 ^= (((arr_6 [i_0 + 2]) ? ((var_0 ? var_18 : var_2)) : var_7));
                var_46 = var_3;
                arr_54 [i_0 + 2] [i_15] [i_15] [i_15] = var_14;
            }
            var_47 = ((-406986819 ? 1 : 19));
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            var_48 = (min(var_48, (((!var_18) ? (~var_17) : (arr_56 [i_0 + 1] [i_16] [6])))));

            for (int i_17 = 1; i_17 < 9;i_17 += 1)
            {
                var_49 ^= 17929548387772797510;
                var_50 = ((var_16 == -1) | ((var_17 ? var_13 : var_13)));
                var_51 = ((~(arr_13 [i_17] [i_17] [i_0 + 1] [i_17 + 1])));
                arr_62 [i_16] [i_16] [7] = ((var_15 ? var_5 : (arr_46 [7] [i_16] [i_16] [i_17])));
                arr_63 [i_0 + 1] [i_0 + 1] [i_16] [i_16] = var_14;
            }

            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                arr_66 [i_16] [i_16] = ((-(arr_58 [1] [i_0 + 1] [i_0 - 1])));
                var_52 = (((~109) ? ((var_11 ? var_19 : var_5)) : var_2));
                var_53 = ((-(arr_50 [i_0 - 2] [1] [i_0 - 2] [i_16])));
            }
        }
        for (int i_19 = 1; i_19 < 9;i_19 += 1)
        {
            var_54 = (arr_21 [i_19 + 1]);
            var_55 &= (arr_5 [i_0]);
            arr_71 [i_19] = ((var_16 ? var_19 : var_12));
        }
        var_56 = (max(var_56, 0));
    }
    var_57 = ((var_12 ? var_9 : ((-var_18 ? (~-30459) : var_10))));
    var_58 = (((~var_13) ? var_12 : (~-591)));
    #pragma endscop
}
