/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~var_5) && ((max(var_12, var_0))))) ? 1359236720079829537 : var_9));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        var_17 = -var_7;
                        arr_11 [i_0] [i_2] [i_1] [i_0] = (~(((((var_3 && (arr_1 [i_0])))) * 54)));
                    }
                    var_18 = (arr_10 [i_0] [i_0] [i_2] [i_0]);
                }
            }
        }
        var_19 = (max((max((((var_7 ? (arr_0 [i_0] [i_0]) : var_3))), (max(963840807902929271, 11716290339021427163)))), ((max(((min(var_9, 37))), var_15)))));
        var_20 = (i_0 % 2 == 0) ? (((((min((((arr_5 [i_0] [1] [i_0] [i_0]) ? var_2 : var_14)), (((((arr_10 [4] [i_0] [17] [17]) + 9223372036854775807)) << (arr_4 [i_0])))))) ? (((-1 >= ((max(-2, 0)))))) : ((max((min(var_10, var_12)), 1)))))) : (((((min((((arr_5 [i_0] [1] [i_0] [i_0]) ? var_2 : var_14)), (((((arr_10 [4] [i_0] [17] [17]) + 9223372036854775807)) << (((arr_4 [i_0]) - 1))))))) ? (((-1 >= ((max(-2, 0)))))) : ((max((min(var_10, var_12)), 1))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_21 -= ((max((max(-42, 1)), 1)));
        arr_15 [i_4] = max(((var_2 & (arr_13 [i_4]))), (((max((arr_9 [12] [8] [i_4] [8] [8] [12]), -948763662)))));
        var_22 = ((max((arr_14 [i_4]), 18446744073709551615)));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_23 = arr_7 [i_5] [i_6] [i_5] [i_5];
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_24 |= ((~1) || var_4);
                                var_25 &= var_15;
                            }
                        }
                    }
                    var_26 ^= (arr_16 [i_6]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_27 = (~var_5);
                        var_28 = ((!((max(var_8, (min(var_2, var_8)))))));
                    }
                }
            }
        }
    }
    var_29 = var_10;

    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {

        for (int i_14 = 3; i_14 < 20;i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        {
                            arr_54 [i_13] [i_13] [i_15 + 1] [i_15 + 1] [i_13] = 1;
                            var_30 = (max(var_30, ((((arr_44 [1] [i_15 - 1] [1]) ? ((3361833167 ? (min(var_6, var_14)) : ((((1042363471 || (arr_47 [i_13] [i_14] [15] [20]))))))) : (!139))))));
                            arr_55 [i_13] [i_17] [i_15 + 3] [i_15] [i_15 + 3] [i_14] [i_13] = (max(-16, (arr_53 [i_13] [i_13])));
                            var_31 ^= 98;
                        }
                    }
                }
            }
            var_32 = ((((max((arr_43 [i_14 - 3] [i_14 - 3]), (arr_10 [i_14] [i_14 - 3] [i_14 - 3] [2])))) ? ((((1 != (arr_45 [i_13] [i_14 + 3]))))) : (max(0, ((241 ? var_7 : 1))))));
            var_33 ^= -12928;
        }
        for (int i_18 = 3; i_18 < 20;i_18 += 1) /* same iter space */
        {
            var_34 = (min(var_34, ((((((3710752094 ? var_0 : 9223372036854775807))) ? (max(((534773760 ? 2151881019 : var_14)), var_2)) : ((((min((-9223372036854775807 - 1), var_9))))))))));
            arr_59 [i_13] [i_13] = (!((min((arr_42 [i_18 - 1]), ((var_4 ? 2461219353 : var_5))))));
            var_35 = (min(var_35, (((((max(253952, (max(9223372036854775807, var_11))))) && -var_10)))));
            var_36 = (min(var_36, 2086577735240308063));
        }
        var_37 = (max(var_37, var_1));
    }
    #pragma endscop
}
