/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_15;
    var_17 = var_10;
    var_18 = ((-1179282557 - ((var_11 ? var_8 : (max(var_6, var_11))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((~(65535 ^ 111)))) ? var_2 : -112);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_19 = var_7;
                        var_20 = ((((max((max(0, (arr_5 [i_0 + 1] [i_0 + 1]))), 0))) ? (arr_4 [i_0 - 2] [i_2 + 2]) : ((((var_8 <= (arr_4 [i_2] [i_3]))) ? (!var_9) : ((111 >> (var_3 - 4645784020123846137)))))));
                        var_21 ^= 58969;
                        var_22 = (((var_11 ? 9223372036854775807 : var_13)));
                    }
                }
            }
        }
        var_23 = (min(var_23, (((((((-112 + 2147483647) >> 1))) ? ((((!(255 + -26949))))) : var_10)))));
        var_24 ^= ((1 ? (((arr_4 [i_0] [i_0 + 1]) ? (arr_4 [i_0 + 3] [i_0 - 3]) : var_15)) : 1));
        var_25 = (((((var_9 + ((var_3 ? var_4 : var_10))))) ? var_6 : (((((var_12 ? var_15 : 34044)) <= (min(var_9, var_13)))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_26 = (((min(var_9, (arr_12 [9])))) ? (max(1, (((arr_10 [i_4]) ? (-9223372036854775807 - 1) : var_1)))) : ((((!(var_14 && -151247278))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    {
                        var_27 *= (min(137438953468, (((var_0 ? (arr_16 [i_7] [i_7] [i_7] [i_7 - 2]) : var_4)))));
                        var_28 = (((((7094996817261595762 + (((-127 - 1) ? 1 : var_13))))) ? (((var_8 && ((min(var_2, 1)))))) : (max((arr_21 [i_7] [i_6] [i_6] [i_5] [i_4]), var_1))));
                        var_29 = (min(var_29, ((min(((((max(var_13, var_6))) ? (max(var_9, var_11)) : ((var_6 ? 0 : var_12)))), (((80 >> (23083 - 23077)))))))));
                        arr_22 [13] [i_5] [i_6] = (min((((((1 ? 0 : 14484521623393626459))) ? (((max(42452, 64739)))) : ((var_15 ? -4623679535589083214 : 1)))), (((!((min(var_1, var_13))))))));
                        var_30 = ((((((((arr_18 [i_5] [i_5] [i_5]) <= var_4)) ? 1 : (var_5 ^ var_2)))) ? var_4 : (((arr_16 [i_4] [i_7 + 2] [i_6] [1]) ? var_14 : 42452))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_29 [i_8] = ((65280 ? (((!34044) ? var_12 : ((var_4 ? var_15 : 120)))) : 2881466151153088844));
                    arr_30 [14] [i_8] [8] = (max((min(((1 ? 42452 : var_12)), -42452)), (((!(((var_8 ? 65280 : 0))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_38 [i_4] [i_8] [i_4] [10] = ((65280 ? (2763735334 || 23062) : (((1 ? var_13 : 31486)))));
                                var_31 = ((((((arr_21 [i_4] [i_4] [i_9] [15] [i_4]) ? (((max(var_0, 1)))) : ((30906 ? var_3 : var_7))))) ? var_12 : (var_6 <= var_6)));
                                arr_39 [i_9] [i_8] = 0;
                                arr_40 [i_4] [i_10 - 1] [i_4] [8] [i_11] [i_4] = 1;
                                var_32 = (max(31491, ((min(1, (-127 - 1))))));
                            }
                        }
                    }
                }
            }
        }
        var_33 = ((((max(var_4, var_4))) ? (((arr_25 [i_4] [i_4]) ? var_3 : var_0)) : var_4));
    }
    var_34 = (((max(((1 ? var_15 : var_1)), var_7)) != (((min((-1576040873 <= var_3), var_2))))));
    #pragma endscop
}
