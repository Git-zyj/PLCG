/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((min(3435, (arr_0 [0])))) && 138369716))));
        var_10 = 3426;
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [2] = (((((-(arr_1 [i_0])))) ? (max(((3431 ? 1713461688 : 102)), (min(1713461671, 3940)))) : ((((arr_1 [i_0]) >= (((arr_0 [19]) & (arr_1 [0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 += ((205 ? ((((!((max((arr_6 [i_0] [i_2] [i_2]), var_0))))))) : ((var_0 ? ((-124 + (arr_1 [22]))) : (arr_6 [i_2] [i_2] [8])))));
                    var_12 = (min(var_12, (arr_0 [i_0])));
                    arr_11 [i_1] [i_1] = ((!((max((min(var_9, 4269)), -22785)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_13 ^= (-3966 ? (((((~(arr_12 [i_3] [i_3]))) != 144))) : (((arr_5 [i_3] [i_3] [i_3]) ? -154 : (((arr_6 [i_3] [i_3] [i_3]) % -3451)))));
        arr_14 [i_3] |= (min((+-10931528493246376953), (((min((arr_7 [i_3] [i_3]), 10931528493246376931))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_14 = (((arr_17 [9] [9]) ? -53 : (((!(arr_20 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 1]))))));
                    arr_22 [i_5] [i_4] |= (((((((((arr_20 [i_4] [i_4] [i_5 - 1] [1]) ? var_1 : (arr_15 [i_6])))) ? var_4 : (!15)))) | ((-1 ? ((1 ? (arr_18 [i_4]) : var_2)) : 103))));
                    var_15 = (min(var_15, (max(1, ((((min(var_6, var_0))) ? (10931528493246376955 != -7264775218061052209) : 1))))));
                    var_16 = (min(((~((274877906943 ? 16556181633499458106 : 1)))), ((((((var_6 ? (arr_15 [i_4]) : (arr_15 [i_4])))) ? ((min(var_8, 108))) : (arr_18 [i_4]))))));
                }
            }
        }

        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_34 [i_4] [14] [i_9] [14] = (((min((arr_17 [i_10 - 1] [i_7 - 1]), (7564956557623922604 != 79)))) < (arr_23 [i_8]));
                            var_17 ^= (min((min(((min(var_6, 63))), ((32765 ? (arr_31 [21] [i_7] [5] [i_9]) : 32762)))), (!184)));
                        }
                    }
                }
            }
            var_18 += ((((((arr_15 [i_7 - 1]) >> (-2696 + 2697)))) ? ((((arr_31 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]) || 157))) : var_3));
            var_19 = (min(var_19, ((((arr_19 [i_4] [i_7 - 1] [i_7] [i_4]) ? ((max((arr_19 [i_4] [i_7 - 1] [i_4] [i_4]), (arr_19 [i_4] [i_7] [1] [i_4])))) : (arr_19 [i_4] [1] [i_7] [i_4]))))));
            var_20 = (max(var_20, (arr_19 [14] [1] [i_4] [i_4])));
        }
        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
        {
            arr_37 [i_4] [1] [i_4] |= (min(((((((arr_24 [i_4] [i_4]) < 2078482307)) && (arr_29 [i_4] [i_4] [i_11 - 1])))), (((3926 >= 2286578048737702301) ? (arr_15 [i_4]) : 86))));
            var_21 *= (min((~68), -21557));
        }
        var_22 = (arr_17 [i_4] [1]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_23 -= (!21547);
        var_24 = (max(var_24, (arr_26 [i_12])));
    }
    var_25 *= -3932;
    var_26 = var_2;
    var_27 = (min(var_27, var_7));
    #pragma endscop
}
