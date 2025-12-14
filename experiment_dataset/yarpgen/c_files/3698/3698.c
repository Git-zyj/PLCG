/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 ^= ((((126 && 39) * (!var_3))) <= (max((~var_7), 10342362008712057975)));
        var_20 = (min(var_20, ((min(-3638083004, (((((min(var_11, var_3))) ? (~var_7) : (var_14 - -121)))))))));
        arr_2 [i_0 - 1] = ((arr_0 [i_0]) - (arr_0 [i_0]));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = (min(var_21, ((((((((arr_7 [i_1] [i_1 + 1]) > (arr_7 [i_1 + 2] [i_2]))) ? (((-9223372036854775807 - 1) ? 145 : 3132775630)) : (((var_3 ? var_14 : (arr_3 [i_2] [i_2])))))) - ((((!(~-1633214323475042359))))))))));
            arr_10 [i_1] [i_1] = (min((((min(2008364432, -9223372036854775801)))), ((var_2 + (((var_16 ? (arr_1 [i_2]) : 126)))))));
            var_22 = (min(43764, 192));
            var_23 = ((-(((~var_4) ? (((var_15 ? var_15 : 44))) : 4278611765))));
            var_24 = (min(var_24, (((((((arr_1 [i_2]) ? ((min(1, 65535))) : var_12))) && (((-(var_10 % var_11)))))))));
        }

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_25 |= ((7274128192005102103 ? 11448297271302605950 : 1472113900720494306));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_22 [2] [i_3] [i_1] [i_1] [i_1 + 1] [i_6] [1] = ((65535 ? 433550082 : 63970));
                            var_26 -= ((!(arr_11 [i_3])));
                            var_27 = (((arr_11 [i_1]) ? (((arr_18 [i_5] [i_5] [i_5] [i_3]) ? var_4 : var_7)) : (~29524)));
                            var_28 = (min(var_28, (((var_12 && (arr_20 [i_1 + 1] [i_1 + 1] [i_1] [23] [i_1 + 2]))))));
                        }
                    }
                }
                var_29 = (max(var_29, ((((arr_21 [i_1 + 1] [i_1 + 1] [i_3] [i_3] [i_1 + 1]) ? var_12 : (arr_21 [i_1 + 3] [i_4] [i_1 + 3] [i_3] [i_1]))))));
            }
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                var_30 -= ((-(arr_20 [19] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                var_31 += (((((arr_13 [i_1 + 2] [i_1 + 3]) ? (arr_13 [i_1 + 1] [i_1 - 1]) : 3)) - ((-var_8 ? ((var_12 ? (arr_5 [i_3]) : var_14)) : ((((arr_1 [i_7]) && var_17)))))));
                var_32 += -var_13;
            }
        }
        arr_27 [i_1] = var_4;
    }

    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                {
                    var_33 = (max(var_33, (((((~(arr_0 [i_10 + 1]))) == ((((var_7 || (arr_0 [i_10 - 1]))))))))));
                    var_34 |= ((-var_17 ? ((min((max(var_5, (arr_7 [i_9] [i_9]))), (arr_21 [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1])))) : (min(1349495605854764056, (arr_23 [i_9] [i_10] [i_10])))));
                    var_35 *= (((var_6 ? (max(83, 5122382143832905195) : (58 ^ 0)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    {
                        var_36 &= (min(((~(var_6 || var_18))), var_18));
                        arr_42 [i_12] [i_13] [i_12] [i_12] = (((((var_18 ? var_11 : (arr_41 [9]))))) ? 170 : var_3);
                    }
                }
            }
        }
    }
    var_37 = ((var_12 == (max(var_15, (var_14 && var_15)))));
    #pragma endscop
}
