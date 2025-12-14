/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (((!(arr_2 [i_0] [i_0]))));
        var_17 = (~(arr_3 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (max(var_18, var_1));
        var_19 = var_8;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_20 = (((min(((var_7 ? var_3 : var_4)), (arr_4 [i_2]))) + (((max((!-1316), (arr_4 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_21 = min(var_12, 17127);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((136 << (var_1 - 7632703423173807996))))));
                                var_23 = (((max(((min(32741, var_13))), var_15)) <= (((-(arr_15 [i_2] [i_2] [i_3] [i_3]))))));
                            }
                        }
                    }
                    var_24 = (max(var_12, var_4));
                    arr_20 [i_2] [i_2] [i_3] = (var_7 ? (((min(var_13, (arr_9 [i_2] [i_4]))))) : (var_1 ^ var_1));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_25 = (arr_21 [i_7] [i_7]);
        arr_23 [i_7] = ((-2303848186963285112 && ((max(var_13, var_9)))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_26 [i_7] [i_8] = ((~(arr_3 [i_7] [i_8])));
            var_26 = (~var_9);
            arr_27 [i_8] = ((arr_24 [i_8] [i_7]) <= ((var_7 << (2303848186963285112 - 2303848186963285086))));
        }
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_27 = (max(var_27, -2303848186963285112));
                var_28 = (max(6566373825179889339, -6566373825179889323));
            }
            var_29 = arr_4 [i_7];
            var_30 = (min(var_30, ((((((arr_0 [i_9 - 1]) ? var_1 : var_0)) < var_14)))));
        }
    }
    var_31 = (min(var_31, ((max(var_14, ((var_10 ? (~var_4) : (var_9 / -26604))))))));
    #pragma endscop
}
