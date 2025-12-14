/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_15 ? var_10 : ((max((min(1769580144, 8)), (((-19 ? var_9 : var_3))))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = ((63 ? 2097136 : ((((!((max(-32, var_0)))))))));
        var_21 = (max((((-(arr_0 [i_0 + 2])))), (min(2637539150, (arr_0 [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_4] [i_4] [i_2] [i_3] [i_2] [i_1] = (arr_3 [10]);
                        arr_16 [i_4] [i_2] [i_1 + 1] = ((((((arr_6 [i_4]) * var_2))) ? (arr_1 [i_1 - 1]) : ((((arr_7 [i_4] [i_3] [i_2]) ? var_18 : -27443)))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [i_1] [i_2] [i_1] [i_5] = (arr_9 [i_1] [i_1] [i_1 - 1] [i_1]);
                        arr_22 [i_1] [i_2] [i_1] [i_5] = ((arr_0 [i_1 - 1]) / 1);
                    }
                    var_22 = ((~((var_13 ? 3030679796 : (arr_10 [i_2] [i_2] [i_2] [i_2])))));
                    var_23 = (max(var_23, var_13));
                }
            }
        }
        var_24 = (((!13522) ? (13554777072117801200 >> 1) : 32765));
        arr_23 [i_1] [i_1] = (((1 - 2147483632) > 1));
        arr_24 [i_1] = ((-(arr_3 [i_1 + 2])));
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_25 -= (((arr_4 [i_6 + 1]) || ((((arr_20 [i_6 - 1] [i_6] [i_6 - 1]) ? ((((arr_20 [i_6] [i_6] [i_6]) > (arr_26 [i_6])))) : 32686)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_26 = ((32757 ? ((-78 ? ((-4 ? 120 : -5913444992536266226)) : ((11728079531152500755 ? var_8 : -5913444992536266213)))) : 58844));
                    var_27 = (((((((min(2334276848735130010, (arr_9 [i_7] [i_7] [i_7] [i_6])))) ? ((max(86, 226))) : 1))) & (min(((max(var_15, var_15))), (min((arr_5 [i_7]), var_15))))));
                    var_28 = ((+((((arr_28 [i_6]) <= var_8)))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_29 = (max(var_29, (((1810284847 >= (arr_13 [i_6] [i_7] [i_7] [i_9]))))));
                        arr_36 [i_6] [i_7] [i_7] [1] [i_9] = var_2;
                        arr_37 [i_7] [i_7] [i_8] = (arr_5 [i_7]);
                        var_30 = (953133014 >> ((((var_1 ? 142 : var_17)) - 134)));
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        arr_40 [i_7] [i_8] [i_7] [i_7] = 6;
                        var_31 += (!36);
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_44 [i_7] [10] [i_7] = (((arr_28 [i_8]) != ((min(-56100, (var_5 == 3479786220))))));

                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_32 = (min((!-1), ((4294967271 ? (arr_25 [i_6 + 1]) : 85))));
                            var_33 = (((((min(-48, (arr_33 [i_6 - 1] [i_6 - 1] [i_6 - 1] [1] [i_12])))) && 415509743)));
                            var_34 = ((((arr_39 [i_6 + 2] [i_6 - 1] [8] [1]) ? ((var_3 ? -1267855521 : 2484682450)) : (!14))));
                            var_35 = (max(72, 4227858432));
                        }
                        var_36 *= 3;
                        arr_47 [i_11] [i_7] [i_7] [i_6] = (((((var_1 ^ (arr_43 [i_6 + 2])))) ^ (((-((-(arr_14 [i_6 + 1] [i_6 + 1] [i_11]))))))));
                    }
                    var_37 ^= (((arr_12 [i_8] [i_8] [i_7] [i_7] [0]) ? ((1 ? (min(var_5, 13071478048375657233)) : (((min((arr_38 [i_8]), 1)))))) : ((((!var_12) ? ((-28 ? (-2147483647 - 1) : var_2)) : (225 != 4698))))));
                }
            }
        }
    }
    var_38 = (!var_17);
    #pragma endscop
}
