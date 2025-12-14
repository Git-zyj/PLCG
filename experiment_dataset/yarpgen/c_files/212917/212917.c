/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [2] [i_1] [i_2] = (~89);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 -= (((~(arr_2 [i_3]))));
                        var_19 = (max(var_19, ((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? ((min(2158476566, -80))) : (((3316065567 >= var_0) ? ((var_5 ? var_10 : -4621963655236200859)) : ((min(978901743, 1))))))))));
                        arr_13 [i_0] [1] [i_0] [i_0] = (((((var_15 ? (((min((arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]), var_12)))) : (max(1, 2679297991573892420))))) ? ((var_3 * (var_7 < 993))) : 1672));
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_20 = (max(var_20, (((3316065567 ? 3112052208 : -16808)))));
                        var_21 &= -1662;
                        var_22 ^= ((((min(((!(arr_15 [i_0] [i_0] [i_0] [1] [i_0] [i_2]))), (arr_14 [i_4 + 3])))) % (~var_0)));
                        var_23 = (max(var_23, (arr_12 [i_0] [i_1] [i_1] [i_4])));
                        var_24 = ((((((arr_6 [i_4 + 2] [i_4 + 3]) ? (arr_6 [i_4 + 1] [i_4 + 4]) : 3316065555))) ? ((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4]) == (arr_10 [i_0] [i_1] [i_2] [i_0] [i_4])))) : var_16));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_25 ^= ((((-(min(-545973450, (arr_12 [i_0] [i_1] [i_2] [i_5])))))) ^ (min(4294967295, 3239119331)));
                        var_26 = ((~(max((((0 ? 1 : 0))), 3239119331))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_27 |= (((((var_7 ? var_4 : (max(14336, 3461882488))))) ? (((var_0 && (var_5 >= 833084808)))) : (~1)));
                        arr_22 [i_1] [i_2] [i_6] = (((min(0, var_1))) ? var_0 : (min(var_12, 1)));
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        var_28 *= (max((((min(var_11, 19323)))), (((arr_12 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 - 1]) / (arr_12 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 2])))));
        var_29 ^= ((-((-(112 & -754414414997825478)))));
        var_30 ^= (min((min(15, (arr_8 [i_7] [i_7] [i_7] [i_7 + 2]))), (arr_3 [i_7 - 1])));
        var_31 = (3142313895 ? (((((545973450 ? (arr_26 [i_7]) : var_15))) ? (((var_1 ? -754414414997825478 : var_15))) : (min(18446744073709551615, -545973450)))) : (((((min(49887, var_8))) ^ (!var_3)))));
        var_32 ^= (((~var_3) ? ((~(arr_23 [i_7 + 1] [i_7 - 1]))) : (11 >> var_10)));
    }
    var_33 = ((!((min(16, ((min(var_16, var_10))))))));
    var_34 = var_3;
    var_35 = var_7;
    #pragma endscop
}
