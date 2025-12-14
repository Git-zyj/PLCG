/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = (((min(56473, var_2))) ? (((1947976011 >= (arr_3 [i_1 + 2] [i_1])))) : (!-1947976011));
                    var_18 ^= 4140476013;
                    var_19 = ((!((min((arr_5 [i_0] [i_1] [i_1 - 1] [i_2]), (arr_4 [i_0] [i_1 - 2] [i_1 - 1] [i_1 + 2]))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_11 [i_3] [10] = (~var_12);
        var_20 = (((arr_9 [i_3]) ? 18446744073709551615 : (((var_11 ? var_12 : var_14)))));
        arr_12 [i_3] = (((arr_7 [i_3]) > (arr_7 [i_3])));
        arr_13 [i_3] = ((arr_8 [i_3]) / var_8);
        arr_14 [i_3] [i_3] = (-583549515 & -1305224410);
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_21 = (max(var_21, (14276817915174033214 + 1947976011)));
        var_22 = (((arr_18 [i_4]) && (!58127)));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_22 [i_5] = arr_20 [i_5];
        arr_23 [i_5] [23] = var_9;

        for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_23 = (((((28325 ? 154491282 : 9877))) ? (min((((arr_27 [i_5] [i_6] [i_6]) << (((arr_21 [i_5]) - 136)))), var_3)) : (((-0 << ((((59805 ? -1947976011 : 1026671744)) + 1947976038)))))));
            var_24 = (max(var_24, var_4));
        }
        for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_25 += ((!(((var_17 ? (!var_16) : (max(var_12, (arr_24 [i_5] [i_7] [i_7 + 1]))))))));
            arr_30 [5] [20] = (((max((arr_25 [i_5] [i_7 - 1]), (arr_25 [i_5] [i_7 - 1])))) << (var_12 - 824258339));
            var_26 = (max(var_26, 960));

            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                var_27 = (max(var_27, -var_12));

                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    var_28 = (min(((min((max(0, 14807)), (0 == var_4)))), var_4));
                    var_29 += (((arr_19 [20] [0]) ? ((var_16 ? (arr_34 [i_7 + 1] [i_8 + 2] [i_9 + 1]) : var_4)) : (((-1929816453 ? 52444 : var_1)))));
                    var_30 = (((~233) ? (~2629309097) : (~var_12)));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_31 *= -65535;

                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        var_32 = ((-(arr_40 [i_5] [i_7] [i_8] [6] [i_11] [0] [i_7 + 1])));
                        arr_42 [i_5] [i_7] [i_8] [i_8 - 1] [i_10] [i_11 + 3] = 0;
                        var_33 = ((-2253910250 ? (arr_35 [i_8] [i_7 - 1] [i_11 - 1] [i_11 - 1]) : ((var_3 ? var_4 : 42190))));
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_34 = arr_25 [i_7 - 2] [i_12];
                        arr_47 [i_5] [i_8] [i_10] [i_5] = var_14;
                    }
                    arr_48 [i_5] [i_8] [i_8] [13] [13] [3] = ((!(arr_19 [i_5] [i_7])));
                    var_35 = (max(var_35, (((((((arr_34 [i_5] [i_8 - 1] [23]) ^ var_15))) ? (arr_28 [i_8]) : (var_6 || var_1))))));
                }
                arr_49 [i_8] [4] [i_7] [i_8] = ((((((arr_33 [i_8]) ? ((var_14 ? var_11 : var_13)) : ((var_11 ? var_8 : 23386))))) ? (((((arr_33 [i_8]) - var_3)) + var_2)) : (arr_19 [i_5] [i_7])));
            }
        }
    }
    var_36 = var_7;
    #pragma endscop
}
