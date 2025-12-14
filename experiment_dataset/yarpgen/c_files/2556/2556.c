/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_0;
    var_12 = ((((var_6 ? (~1) : (~16))) | var_1));
    var_13 = ((((1 ? 17812664853185137525 : -4178454756439397998)) / var_2));

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = var_2;
                    var_15 = (!-2726076843754771842);
                    var_16 = ((~(((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : 1))));
                }
            }
        }
        var_17 -= var_8;
        var_18 = 1;

        /* vectorizable */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_19 += (1 ? 221 : 243);
                        var_20 = (5 % var_4);
                    }
                }
            }
            var_21 = (arr_8 [i_3] [i_3 + 2] [i_3]);
            var_22 = arr_9 [i_0] [i_0] [20];
            var_23 = (var_7 ? var_8 : var_3);
            var_24 = (arr_6 [8] [i_3] [i_0] [8]);
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            var_25 += (((32767 ? 4045949419 : 230)));
            var_26 = 14793054959602083498;
            var_27 = (min(var_27, ((((-9223372036854775807 - 1) / (((var_4 ? var_10 : (var_10 - 16)))))))));
            var_28 = (max((min(var_9, (arr_10 [i_6 + 1] [i_6]))), (arr_12 [i_6] [i_0 - 2] [i_0 - 2] [i_0])));
            var_29 &= (max(1677108385712583390, 19299));
        }
    }
    for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_30 = (arr_14 [17] [i_7] [i_7] [5] [5] [i_7]);

        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            var_31 = var_7;
            var_32 = ((var_10 ? 2123345122 : (max(224, 90682513))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 23;i_10 += 1)
                {
                    {
                        var_33 &= ((42771 ? -1 : 9223372036854775797));
                        var_34 = ((-(((((var_3 ? 1 : var_8))) ? ((~(arr_11 [7] [i_10 - 2]))) : 159))));

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_35 = (arr_4 [i_7 - 2]);
                            var_36 = ((((~(((1285542785 <= (arr_14 [i_7] [i_8 - 1] [i_8] [i_9] [2] [i_7])))))) < ((((arr_13 [4] [i_11] [i_11] [i_8 - 2]) || var_9)))));
                            var_37 &= ((+(min((arr_0 [i_10 + 1] [i_8 - 1]), (arr_12 [i_10 - 4] [i_10 - 4] [i_8 - 3] [i_7 + 2])))));
                        }
                        var_38 = ((((((-1769828553560829542 < (arr_24 [i_7 + 2] [i_7 + 2] [5] [i_7 + 2]))) ? ((4045949431 ? 50 : 0)) : (arr_8 [i_7] [i_9] [i_9]))) >= (!9223372036854775788)));
                    }
                }
            }
            var_39 = (arr_30 [i_8 + 1] [22]);
        }
        var_40 = var_2;
    }
    #pragma endscop
}
