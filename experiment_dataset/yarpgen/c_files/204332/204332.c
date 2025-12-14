/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((((min(0, 245))) << (((min(var_4, (~252))) - 2367483346)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (0 || -61);
                                arr_14 [i_0] [14] [i_0] = min(((((-1436577361 ? var_1 : -3428592133426978736)) & (arr_13 [i_2] [i_1] [i_2] [4] [10] [i_3] [7]))), var_12);
                            }
                        }
                    }
                }
            }
        }
        var_20 = (max(((min((max(16582, var_8)), var_5))), (min(((var_7 ? var_15 : (arr_2 [i_0] [i_0] [i_0]))), 0))));
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] |= (arr_12 [i_5 - 1] [i_5] [i_5] [i_5] [0] [i_5 - 2]);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_21 [i_6] = ((((((arr_9 [i_6] [9] [7] [9] [17]) ? (arr_19 [i_5] [i_6]) : (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_5] [i_5])))) ? (~11) : (arr_19 [i_5] [i_5])));
            arr_22 [i_5] [i_6] = var_1;
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_21 *= (min(((((-(arr_18 [4] [i_7] [4]))))), (arr_16 [i_7])));
                        var_22 = (min(((min(910237371, (arr_13 [i_5] [9] [i_9] [i_5] [6] [6] [i_9])))), var_17));
                        var_23 = (max(var_23, (((((((var_5 * var_9) ? (max(1, (arr_19 [i_5] [i_5]))) : (1 + 3578)))) - (max(-8846175417880190679, ((var_15 ? (arr_1 [i_5]) : (arr_5 [i_5]))))))))));
                        var_24 = (min(var_24, (((~((((1 ? -944157007 : 42552)) & ((10 ? 221 : var_8)))))))));
                        var_25 = (max(var_25, ((min(((((arr_11 [i_5 + 1]) & (arr_11 [i_5 + 1])))), 1)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_35 [i_5] [i_11] [i_10] &= (arr_7 [14] [i_5 + 1] [i_11]);
                        var_26 = ((((min((min(var_14, (arr_34 [i_5] [i_7] [14] [i_10]))), var_15))) ? (((arr_33 [i_5 - 1] [5] [i_10] [i_10]) * (arr_32 [i_5 - 2] [11] [11] [i_11]))) : 218));
                        var_27 = (((-var_14 ? 1 : var_17)));
                        arr_36 [i_5] [i_5] [i_7] [17] = ((-22 ? (252 <= 9390) : (min(14731614665521764540, ((3 ? var_13 : 0))))));
                    }
                }
            }
            arr_37 [i_5] = ((((min((arr_20 [i_7] [17] [i_5 + 1]), 246))) & ((max(var_2, (arr_20 [i_5] [i_7] [i_5 + 1]))))));
            var_28 = (((((max(var_0, var_0)) ? ((max((arr_32 [i_5] [i_5] [i_7] [i_5]), (arr_26 [i_5])))) : (((arr_13 [i_5] [0] [1] [1] [1] [i_5] [10]) >> (var_4 - 2367483335)))))));
        }
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            var_29 = (max(var_29, ((min(4499063446379371768, var_9)))));
            arr_41 [i_5] [1] [i_12 + 1] = ((max((arr_4 [1] [i_5]), (arr_33 [1] [i_12] [i_12 + 1] [i_5]))));
            var_30 = (min(var_30, (((+(min((min((arr_24 [i_5] [13]), -1436577361)), ((20 ? (arr_7 [i_5] [8] [12]) : var_1)))))))));
        }
    }
    for (int i_13 = 2; i_13 < 17;i_13 += 1) /* same iter space */
    {
        arr_44 [i_13] = (arr_38 [i_13]);
        var_31 = (((!var_1) ? -14731614665521764520 : 9394));
        var_32 += (((arr_1 [i_13]) ? (max(var_10, (((9389 ? 130 : var_3))))) : (1 ^ -2091195788)));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    arr_51 [10] |= ((var_9 * (arr_16 [i_15])));
                    var_33 = (min(var_33, var_15));
                    var_34 = (max(var_34, (1 <= 21)));
                    var_35 = (max(var_35, -46));
                    var_36 = (((-(arr_13 [i_13 - 1] [i_14] [i_15] [1] [16] [i_13] [10]))));
                }
            }
        }
    }
    var_37 = ((((((~var_16) ? (((max(var_1, -109)))) : ((18 ? 14731614665521764565 : 4499063446379371768))))) ? 2490145170 : var_7));

    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        var_38 = ((((((arr_2 [i_16] [i_16] [i_16]) ? (arr_2 [i_16] [i_16] [i_16]) : (arr_2 [i_16] [i_16] [i_16])))) ? (min(-1880903884846467188, 4499063446379371780)) : ((((!(arr_2 [5] [i_16] [i_16])))))));
        arr_54 [i_16] = (max(((13947680627330179848 >> (-251479593 + 251479611))), ((min(((((arr_16 [i_16]) && (arr_8 [i_16] [7] [i_16] [i_16])))), var_6)))));
        var_39 = (min(var_39, ((min(var_12, ((-(((arr_5 [i_16]) / (arr_27 [i_16] [i_16] [i_16]))))))))));
    }
    #pragma endscop
}
