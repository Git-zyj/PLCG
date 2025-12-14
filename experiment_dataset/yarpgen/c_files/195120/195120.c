/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_8 ? var_16 : var_3));
    var_19 = var_15;
    var_20 = (((((var_5 ? var_14 : var_12) + var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_21 ^= (((((((!-32) >= (max(var_3, (arr_1 [i_0]))))))) | var_1));
                    var_22 = (min(((-(arr_7 [i_0] [i_0] [i_2] [i_2]))), (arr_2 [7])));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_23 ^= (min((-23 / 39), ((((var_13 >= (arr_3 [i_2])))))));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_24 = ((+((((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? -37 : var_12))) ^ -6418743213634259044))));
                            var_25 = ((~((((arr_10 [i_0] [i_1] [i_4] [i_3] [i_4] [7]) != ((max(var_16, (arr_9 [0] [0] [0] [i_3] [4] [i_4])))))))));
                        }
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_26 = (((((((~0) + 9223372036854775807)) >> ((((~(arr_2 [6]))) - 15533065687185561662)))) ^ (((((var_10 ^ (arr_10 [9] [i_1] [i_1] [i_2] [9] [9])))) & -6418743213634259049))));
                            var_27 = ((!(((max(-1, 102))))));
                            var_28 = (min(var_28, (((min(var_9, ((-(arr_5 [i_2] [8])))))))));
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            var_29 = ((((15 && var_8) < (arr_7 [i_1] [i_0] [i_3] [i_6 + 1]))));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [1] = (arr_3 [i_0]);
                            var_30 = -var_4;
                        }
                        var_31 = ((((((var_8 ? 43 : 5867074420606878498)))) << (((arr_6 [i_1] [i_2] [i_3]) - 124))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_32 = ((1 >> (-2164586628639674833 + 2164586628639674849)));

                        for (int i_8 = 4; i_8 < 9;i_8 += 1)
                        {
                            var_33 = (36 - -3);
                            var_34 = ((((((max(36, -6418743213634259044)) > ((((var_5 != (arr_20 [i_7])))))))) - var_14));
                        }
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_35 = (arr_14 [i_9] [i_0] [5] [i_9] [i_0] [i_2] [i_9]);
                        var_36 = max((min((-36 / var_2), ((-22066 / (arr_19 [7] [i_1] [3] [i_2] [i_2] [i_9]))))), (min((arr_22 [i_0] [i_0]), ((36791 ? var_17 : 242)))));
                    }
                    var_37 -= ((+((((-22076 | 219) >= 69)))));
                    arr_25 [i_0] [i_0] [5] [i_2] = (max((((!(arr_24 [i_0])))), ((28985 % (var_16 && var_5)))));
                }
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    var_38 = (arr_19 [12] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    var_39 = var_5;
                }
                arr_30 [i_0] = (-18452 != var_10);
                arr_31 [i_0] [i_1] = (((max(-1414, (23 >= var_16)))));
                var_40 = (max(var_40, ((((max((((10528 << (169 - 169)))), (max(var_8, 16)))) != 1)))));
            }
        }
    }
    #pragma endscop
}
