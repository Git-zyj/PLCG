/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 += (~4);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (arr_2 [i_0]);

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = ((!(((((max(4, 1363867946))) ? ((var_3 ? var_5 : var_2)) : var_12)))));
                        arr_11 [i_1] = ((!((((arr_3 [i_1 + 1] [i_1]) | var_5)))));
                        arr_12 [i_0] [i_1] [i_1] [i_0] = (max((min(var_13, (((-1363867946 ? 13730 : 1363867946))))), (arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 4; i_5 < 9;i_5 += 1)
                        {
                            var_16 |= (arr_14 [i_0] [i_1] [i_1] [i_0] [i_1]);
                            var_17 = ((((arr_4 [i_1] [i_1]) ? 32425 : (arr_9 [i_0] [i_0] [i_2] [i_4] [i_1]))) & -var_5);
                            var_18 = (min(var_18, var_2));
                            var_19 &= (~1571593123);
                        }

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            var_20 = (min(var_20, 60));
                            var_21 = (((!(arr_9 [i_0] [i_1] [i_2] [i_4] [i_1]))) ? (arr_0 [i_0] [i_0]) : (13730 > 4));
                            var_22 = (((var_9 ? (arr_9 [i_1] [i_0] [i_0] [i_0] [i_1]) : var_13)) | ((((arr_13 [i_0] [i_1] [i_1] [i_1] [i_1]) ? -60 : var_11))));
                        }
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_1] [i_7] [i_2] [i_1] = ((25147 ? (-25147 ^ var_9) : (((!(arr_1 [i_0]))))));
                            arr_24 [i_1] [i_4] [i_1] = (~0);
                            var_23 = 25147;
                            arr_25 [i_0] [i_0] [i_0] [i_1] [i_1] = ((arr_14 [i_1 + 1] [i_1 + 3] [i_1] [i_1] [i_7 - 2]) ? 59 : (arr_14 [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1] [i_7 - 2]));
                            var_24 = arr_18 [i_0] [i_0] [i_0] [i_4] [i_4];
                        }
                        arr_26 [i_0] [i_0] [i_1] = (var_12 || 1);
                        var_25 = ((373665903 ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1])));
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_26 = ((((((((var_8 ? (arr_27 [i_8] [i_8]) : (arr_28 [i_8])))) ? ((0 * (arr_29 [i_8] [i_8]))) : 59))) - ((27033 ? -3175015130456110431 : 27143))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_27 = (min(var_27, (((max(16383, 1363867945)) % -16383))));
                    var_28 = (min(var_28, (min(0, ((16383 > (min(25268, var_0))))))));
                    var_29 += var_8;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_30 = (min(var_30, var_2));
                            var_31 = (min(var_31, (((var_9 ? ((-(arr_27 [i_11] [i_11]))) : ((min(((-(arr_43 [i_8] [i_11] [i_11] [i_11]))), (arr_32 [i_8] [i_11 + 1])))))))));
                            var_32 = (((arr_40 [i_8] [i_8]) != ((var_12 ? (((-829141305 ? (arr_33 [i_12]) : var_2))) : (max(-1, (arr_35 [i_8] [i_8] [i_14])))))));
                        }
                        var_33 = ((((min((arr_27 [i_11 + 2] [i_11 + 1]), 1571593122))) ? ((((-25147 + 2147483647) << (247 - 247)))) : (min(-25147, (arr_27 [i_11 + 2] [i_11 + 1])))));
                    }
                }
            }
        }
    }
    var_34 += var_1;
    #pragma endscop
}
