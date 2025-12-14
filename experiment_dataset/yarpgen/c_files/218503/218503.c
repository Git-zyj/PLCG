/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 = -71;
        arr_2 [i_0] = ((!50) ? var_14 : -var_1);
        var_16 &= ((48189 << ((((6 ? var_13 : var_6)) - 2893732961516690673))));
        var_17 = -48189;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] |= ((-112 ? var_10 : var_7));
                        var_18 = ((~(var_2 ^ var_5)));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_19 = (((var_12 | var_9) ? 16786977381502124914 : (arr_4 [i_0 + 1] [i_1 + 2])));
                        var_20 &= (!var_0);
                        arr_14 [i_2] &= ((var_14 ? var_14 : (arr_9 [i_0] [i_0] [i_0 - 1] [i_1 + 1])));
                        var_21 = (max(var_21, var_3));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 = 1659766692207426702;
                                arr_22 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = (arr_1 [i_1 - 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_23 = (max(var_2, (((!((1679999324462703612 && (arr_24 [i_7]))))))));
        var_24 = (((((103 ? -1438681912 : 56))) ? (((((97 << (((-337676693 + 337676718) - 21))))) ? -915955844 : ((-20392153 ? 255 : -337676693)))) : ((1659766692207426702 ? 138 : 83))));
    }
    var_25 |= var_1;
    var_26 = (min(var_26, ((~((~(var_12 ^ var_13)))))));

    /* vectorizable */
    for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = ((var_4 ? var_12 : 103));
        var_27 = 88;
        var_28 = (max(var_28, (arr_27 [i_8])));
    }
    for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = (max(((min((arr_28 [i_9 - 1]), ((-563819814 ? -337676693 : 337676675))))), ((-20392153 ? 997747048 : 1659766692207426720))));
        arr_35 [6] [i_9] |= (max(1659766692207426725, (5744164350168574595 - var_7)));
        var_29 = ((min(var_13, (arr_26 [i_9 + 1] [i_9 + 1]))));
    }
    #pragma endscop
}
