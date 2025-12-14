/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((((((var_9 >> (-55 + 75)))) ? (~17228071404647411824) : (~-48))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = 41;
                    arr_8 [i_0] = ((((-9223372036854775807 - 1) ? 41 : var_6)));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (max((arr_4 [13] [i_2 + 1] [i_2 + 2] [i_1]), ((((-9223372036854775807 - 1) ? -1001567197880338713 : 0)))));
                }
            }
        }
        var_20 += (~(((((var_4 ? (arr_6 [i_0] [i_0]) : var_3))) ? ((9223372036854775783 | (arr_3 [i_0] [i_0] [i_0]))) : (arr_6 [i_0] [i_0]))));
        var_21 = var_8;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_22 &= max((!0), ((!(((1069990094 ? 9223372036854775807 : 1))))));
        arr_13 [i_3] |= (((arr_5 [14] [i_3] [i_3] [i_3]) ? ((-((1 ? var_15 : 1)))) : 163115932));

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_23 = ((~(!var_3)));
            var_24 = (min((max(((-55 ? var_6 : (arr_11 [i_3] [i_4]))), var_5)), var_7));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_25 = (((var_12 ? 1 : (max(var_17, 5)))));
            var_26 = (((((3380132126 ? (((!(arr_6 [16] [i_3])))) : (!0)))) ? ((((((var_13 ? 1 : 58))) ? -var_7 : var_1))) : ((-(arr_6 [i_3] [i_3])))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_27 |= (max(((var_1 ? (arr_12 [i_6]) : (arr_12 [i_6]))), (arr_12 [i_3])));
            var_28 &= (min(((~((232 ? (arr_1 [4]) : 1)))), (arr_2 [1])));

            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
            {
                arr_24 [8] [i_6] |= (((arr_5 [i_3] [i_6] [10] [13]) ? ((((min(var_12, (arr_12 [1])))) ? ((14331676003494893892 ? var_8 : var_13)) : var_1)) : -var_10));
                arr_25 [i_3] [3] [i_6] = ((~((var_12 ? -49 : 0))));
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_29 += var_10;
                            arr_33 [i_9] [8] |= (min((~var_9), ((((arr_2 [1]) ^ (arr_2 [12]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_30 = (max((((((-(arr_22 [i_3] [i_6] [i_6])))) ? ((var_9 ? -113 : var_15)) : -15097)), (min(((max(47, var_8))), 111))));
                            var_31 -= 30561;
                        }
                    }
                }
            }
            for (int i_13 = 2; i_13 < 8;i_13 += 1)
            {
                arr_42 [i_13 - 2] [i_6] = ((-(max(((min(var_10, 47))), var_17))));
                arr_43 [i_3] [i_6] [8] [i_13] |= ((-(((!1) ? var_3 : (var_0 && var_2)))));
            }
            arr_44 [i_3] [i_6] [i_3] = (((((!var_3) || (62 && 1))) && ((!(var_7 || -15087)))));
            var_32 = (max((((var_17 ? (arr_36 [i_6] [i_6]) : (arr_36 [i_6] [i_6])))), ((((var_7 ? 1 : var_17)) * var_16))));
        }
    }
    var_33 = (!(((((min(1, 15))) ? (!-13113) : var_12))));
    #pragma endscop
}
