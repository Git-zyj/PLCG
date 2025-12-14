/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((var_1 + 2147483647) >> (7604312410246316897 - 7604312410246316894)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((-(((!var_5) ? ((min((arr_1 [i_0]), var_7))) : var_0))));
        var_14 = ((var_5 ? -2903 : (arr_1 [i_0])));
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 11;i_3 += 1)
            {
                {
                    var_15 = max((arr_4 [i_2 - 1] [i_3 - 4]), (((arr_4 [i_2 - 1] [i_3 - 4]) + var_9)));
                    var_16 = (max(var_16, (((~(((!(arr_3 [i_2 + 1])))))))));
                    var_17 = (((arr_4 [i_2 - 1] [i_2 - 1]) == (arr_5 [i_2 - 1] [i_2] [i_3 + 1])));
                    var_18 = (((((~(arr_4 [i_3 - 4] [i_2 - 1])))) ? (((arr_5 [i_3 - 4] [i_2] [i_2 - 1]) ? (arr_4 [i_3 - 3] [i_3 - 3]) : (arr_4 [i_3 + 1] [i_3 + 1]))) : 3092217880));
                    var_19 &= (((((6314 | (arr_6 [i_2 + 1])))) ? 5685957666301131307 : ((((var_2 ? (arr_6 [i_1]) : var_11))))));
                }
            }
        }
        arr_9 [i_1] [i_1] = max((arr_3 [i_1]), (max(5707, (arr_3 [i_1]))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_20 -= -275365270;
            var_21 *= ((((!((min(var_3, var_6))))) ? -67 : (((arr_5 [i_4] [i_4] [i_4]) ? (min(var_6, (arr_4 [i_5] [i_4]))) : ((max((arr_2 [i_4]), -105)))))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_22 [i_4] [i_4] [i_4] [i_4] [i_5] = var_11;
                            arr_23 [i_8] [i_5] [i_6] [i_6] [i_5] [i_5] [i_4] = ((-(-2147483647 - 1)));
                            arr_24 [i_5] = (((((min(70368744177663, 10797)))) ? ((0 ? 2113929216 : 2486917835)) : (arr_17 [i_4] [i_4] [i_4] [i_4] [i_4])));
                            arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_8] [i_4] &= var_0;
                        }
                    }
                }
            }
            arr_26 [i_5] = (55638 | 3291332934);
            arr_27 [i_5] [i_5] = var_0;
        }
        arr_28 [i_4] [i_4] = (((min((arr_4 [i_4] [i_4]), var_10)) < (max(var_6, (arr_4 [i_4] [i_4])))));
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        arr_31 [i_9] [i_9] = (min(((((((arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) | (arr_12 [i_9])))) ? 2113929216 : 255)), (((var_0 ? (arr_12 [i_9]) : 124)))));
        var_22 = (arr_8 [i_9] [i_9] [i_9]);
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        arr_35 [i_10] = ((((((var_4 ^ -55) ? (var_5 >= var_11) : (11045856442239828219 > var_9)))) ? (max(((min(1, -8))), (min((arr_2 [i_10]), 11045856442239828219)))) : ((((16 / 72055395014672384) / (((arr_5 [i_10] [i_10] [i_10]) ? (arr_12 [i_10]) : 275365268)))))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_23 = ((((((arr_19 [i_11] [i_12 + 1] [i_11] [i_11] [i_10] [i_10]) ? -36 : (arr_6 [i_12 + 1])))) ? ((~((-66 % (arr_4 [i_11] [i_11]))))) : ((((var_3 != 20) ? (arr_36 [i_12 + 1]) : (arr_40 [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1]))))));
                        var_24 = ((min(-72055395014672399, (arr_32 [i_10] [i_10]))));
                    }
                }
            }
        }
        arr_43 [i_10] = (((arr_42 [i_10] [i_10] [i_10] [i_10]) | ((~(arr_42 [i_10] [i_10] [i_10] [i_10])))));
        arr_44 [i_10] [i_10] = (arr_18 [i_10]);
    }
    #pragma endscop
}
