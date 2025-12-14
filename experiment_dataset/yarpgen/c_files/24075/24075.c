/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 3074510646903527339;
        arr_3 [i_0] [i_0] = 3074510646903527339;

        for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_10 &= 3074510646903527339;
            arr_6 [5] [i_0] [5] = (arr_1 [i_1 + 2]);
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_11 += -3074510646903527360;
            var_12 = (((var_1 <= var_8) / 264664510));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {
                arr_16 [i_4] [i_3] [i_4] [i_0] = var_2;

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_19 [i_0] [i_4] [i_3 + 2] [i_3] [i_4] [i_5] = (((arr_5 [1] [i_3 - 1] [13]) || var_7));
                    var_13 = (var_6 < 3074510646903527339);
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_14 = (min(var_14, -3074510646903527351));
                    var_15 = (max(var_15, 137));
                    var_16 += var_2;
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_17 = (min(var_17, (var_5 <= 1)));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_18 = -8590;
                        var_19 = (1 ^ -5681);
                    }
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        var_20 ^= ((((var_9 ^ (arr_11 [i_0] [i_3]))) ^ var_8));
                        var_21 = (2384364582499216300 ^ 5678);
                        var_22 = (min(var_22, (arr_17 [i_9 + 2] [i_7] [i_7] [i_3 + 2])));
                    }
                }
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_23 = (1 != 2482223434);
                    var_24 = var_4;
                    var_25 = (1 == -4110922115264392168);

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                        var_26 = (907648132607906782 ^ 4095619926);
                        var_27 = (-890612477610236460 + 4036485893030662709);
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_28 = 1;
                        var_29 = (((arr_31 [1] [i_3 - 1] [i_3 + 2] [9] [i_10]) | (arr_7 [1] [i_3 + 1])));
                        arr_39 [9] [9] [11] [11] [1] [11] [i_0] = -5696;
                        var_30 = var_0;
                        var_31 ^= 1812743834;
                    }
                }

                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_32 = (max(var_32, (((0 < (arr_33 [i_0] [i_0] [i_0]))))));
                        var_33 = -356642028;
                        var_34 = (max(var_34, var_1));
                        var_35 = (max(var_35, ((((arr_28 [i_3 - 1] [i_14 - 2] [i_14 - 2] [i_14 - 1]) ^ (arr_43 [1] [i_14] [i_10] [3] [i_0] [1]))))));
                        var_36 = arr_41 [3];
                    }
                    arr_45 [10] [10] [i_10] [i_0] [i_14 - 2] = ((-28108 | var_7) < var_1);
                    arr_46 [i_0] [i_3] [i_10] [i_0] [i_14] [10] = (arr_33 [i_0] [i_10] [i_10]);
                }
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    arr_50 [i_16] [i_10] [i_0] = arr_44 [i_0] [i_10] [7];
                    var_37 = (min(var_37, (arr_49 [i_0])));
                    var_38 ^= (arr_9 [i_3] [i_3]);
                }
                var_39 = ((-356642021 != (arr_29 [i_3] [i_3] [i_3 + 1] [i_3 + 1])));
            }
            for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
            {
                var_40 = arr_5 [i_3] [i_3 - 1] [i_3];

                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    var_41 = var_8;
                    var_42 = var_7;
                }
                var_43 = (arr_23 [6] [6]);
                var_44 ^= var_9;
            }
            for (int i_19 = 0; i_19 < 0;i_19 += 1)
            {
                var_45 = (arr_4 [i_0] [i_3 + 2]);
                var_46 = var_3;
                arr_59 [i_0] [i_19] [8] = (i_19 % 2 == 0) ? (((((var_8 >> (((arr_58 [i_0] [i_3] [i_19]) - 3706969276108216200)))) / (((14257997296966128694 >= (arr_13 [i_0] [i_19]))))))) : (((((var_8 >> (((arr_58 [i_0] [i_3] [i_19]) - 3706969276108216200)))) * (((14257997296966128694 >= (arr_13 [i_0] [i_19])))))));
            }
            arr_60 [i_0] [i_0] = 0;
        }
        var_47 = (min(var_47, var_9));
        arr_61 [5] = var_3;
    }
    var_48 -= var_7;
    #pragma endscop
}
