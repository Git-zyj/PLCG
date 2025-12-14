/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((var_10 ^ (-2147483647 - 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [11] [i_4 + 1] [i_1] [i_2] [i_1] [i_0] [i_0] = ((((min(((max(32748, 223))), 0))) ? ((-(-32515 / var_0))) : var_1));
                                arr_12 [i_3] [i_3] [i_0] [i_3] [i_1] [i_4] [i_3] = (!-32540);
                                arr_13 [i_1] [i_3] [i_2] [i_2] [i_1] [6] [i_1] = 13;
                                arr_14 [i_0] [i_3] |= ((((max(18446744073709551615, 8955006353945857109))) ? ((max(52953, (!var_2)))) : ((max(var_8, (min(1, var_3)))))));
                            }
                        }
                    }
                    var_14 = (((!var_7) ? var_0 : var_10));
                    var_15 -= ((((((min(var_0, var_0))) || var_6)) ? 0 : var_2));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_23 [i_5] [i_6] = var_0;
            var_16 = (!9491737719763694521);
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_17 = ((173890418 ? (-6826 * 57146562) : 3));
                            arr_32 [i_5] [i_6] [i_6] [2] [8] |= ((~(8955006353945857085 && -1785833796)));
                            var_18 = (8955006353945857094 && var_8);
                            var_19 = (13 || -5816);
                        }
                    }
                }
            }
            var_20 = (min(var_20, (((((13 ? 18446744073709551604 : -241881329)) < -20)))));
        }

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_35 [0] [i_10] = (((!5401) >= var_12));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_21 = 14565;
                            arr_42 [i_12] [i_12] [i_11] [i_10] [i_12] = (((0 | var_0) ^ ((18446744073709551611 ? 8955006353945857107 : 7617908010325079419))));
                            arr_43 [i_12] [i_12] = var_12;
                        }
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            var_22 = (min(var_22, ((((((41 ? 0 : 9491737719763694509))) ? 8955006353945857094 : (((816212526 << (18446744073709551615 - 18446744073709551615)))))))));
            arr_47 [5] [i_14] = ((var_5 ? var_4 : var_1));
            var_23 = (8955006353945857094 << (((((var_0 + 2147483647) >> (4194272 - 4194257))) - 65500)));
            var_24 = var_10;
        }
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            arr_50 [i_15] [i_15] [i_15] = (((!var_3) || var_4));
            var_25 -= 194;
            var_26 = (!var_5);
            arr_51 [i_15] = (!1);
        }
        var_27 -= (12 || 12);
    }
    var_28 = 29016;
    #pragma endscop
}
