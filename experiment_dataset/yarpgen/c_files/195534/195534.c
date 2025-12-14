/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((-3899055706463646879 - ((max(-1623538701, 22075)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = ((-(((arr_1 [i_0 - 1]) ? ((var_15 + (arr_1 [i_0]))) : (arr_1 [i_0 - 1])))));
        var_18 = 43472;
        var_19 = var_12;
        var_20 += ((((max(-27926, -541))) ? 2147475456 : var_7));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((((255 ? 22078 : -64620807)) << ((((min(43461, 22075))) ? (((22074 ? 1 : var_1))) : (arr_3 [i_1] [i_1])))));
        var_21 = ((4241812497 ? ((min((((arr_2 [i_1]) / (arr_0 [i_1]))), var_15))) : 248));
        arr_5 [i_1] = -122;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_22 |= (arr_7 [i_1 - 1] [8]);
                        arr_12 [12] [i_2] [i_3] [i_3] &= (((((var_14 ? var_13 : (max(var_6, -4882))))) ? (!22075) : 0));
                        arr_13 [i_4] [i_4] [i_1] = (((((var_1 >> (((arr_1 [i_1 - 1]) - 82))))) ? (((!1) ? -255 : ((1 ? var_7 : 2)))) : (min((arr_2 [i_1 - 1]), var_10))));
                        var_23 = (((((var_3 && (arr_8 [i_1]))) ? (((arr_11 [i_1]) ? (arr_10 [i_4]) : -121)) : (arr_1 [i_2 - 1]))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_24 = (36028797018947584 < 2101229768);
                        arr_16 [i_1] = min(27925, 191824718);
                        var_25 = (max(var_25, ((min(4241812497, ((max((arr_7 [i_3] [7]), 1))))))));

                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            arr_19 [i_1] [i_2] [i_1] [i_1] [i_6] = (~(((arr_9 [i_1] [i_2]) ^ (arr_3 [i_5] [i_2 - 1]))));
                            var_26 ^= ((((min(2193737523, -8520427009021868742))) ? (((-100 ? 7978185004300672 : 43461))) : -13046209054145400601));
                        }
                    }

                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_27 ^= ((max((arr_18 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [10]), var_11)));
                        var_28 = (arr_6 [i_2] [i_1] [9]);
                        var_29 += ((((((arr_1 [i_1 - 1]) ? ((var_5 ? 10521 : (arr_14 [i_2] [i_2 - 1] [1] [i_2 - 1]))) : 207))) ? (((arr_20 [i_1 - 1] [i_1 - 1] [5] [i_1] [i_1 - 1] [i_2 - 1]) + var_10)) : (((((2959228064 % (arr_7 [i_1] [i_2 - 1]))))))));
                        var_30 = (min(var_30, ((min((max((arr_10 [i_1]), (arr_10 [i_1]))), (!7422594668233356699))))));
                        var_31 = (((((!((var_12 < (arr_20 [i_1] [i_2] [i_2] [i_1] [i_1] [i_1]))))))) ^ (min((23 / 12), 0)));
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_32 = ((-420207991 * (((!-87) << (-255 + 271)))));
                        var_33 ^= (0 <= var_15);
                    }
                }
            }
        }
        var_34 *= (~var_9);
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_26 [i_9] = (min(1, 2528182330));
        arr_27 [i_9] [i_9] = (((arr_22 [i_9] [i_9] [i_9] [i_9] [i_9]) - -var_1));
        arr_28 [i_9] [i_9] = (max(((9872483 + (var_15 + var_14))), ((-1 ? 191824718 : 5213232312171640052))));
    }
    var_35 = 1;
    #pragma endscop
}
