/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((max(1893, ((0 ? (arr_0 [9] [i_0]) : (((arr_0 [i_0] [0]) ? var_11 : 101)))))))));
        var_15 |= ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : var_0));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_16 = (arr_2 [i_0] [i_1] [i_2]);
                arr_6 [i_2] = 65535;
                var_17 = var_13;
                arr_7 [i_0] [i_2] = (arr_4 [i_0] [i_1] [i_1]);
                arr_8 [i_2] [i_1] [1] = (((arr_3 [i_0] [i_1] [i_2]) ? (((var_9 ? 1 : 0))) : (arr_5 [i_0] [i_0] [i_0])));
            }
            var_18 = -1774125343;
        }
        var_19 = (((arr_5 [i_0] [3] [i_0]) ? (min((arr_5 [i_0] [i_0] [i_0]), ((var_3 ? (arr_5 [i_0] [i_0] [i_0]) : 8889926326805090725)))) : ((min((arr_4 [3] [3] [i_0]), 27)))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [4] &= var_10;
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_20 = 6398530864974430568;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_24 [i_6] [i_7 - 1] = var_7;
                                var_21 = var_8;
                            }
                        }
                    }
                    var_22 = (arr_4 [1] [1] [1]);
                }
            }
        }
        arr_25 [i_3] [i_3] = (max((((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3]))), ((min(54355, (arr_10 [i_3]))))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_23 = ((11181 ? 9355765995886206302 : 5561052030777632587));
        var_24 = (min(var_24, (((max((arr_21 [i_8] [i_8]), 4))))));
        arr_29 [i_8] [10] = (min((arr_2 [4] [4] [i_8]), (((min(var_1, (arr_16 [i_8] [i_8] [i_8])))))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_34 [i_9] [i_9] = (arr_33 [i_9] [i_9]);
        var_25 = (max(var_25, (((var_10 ? (((max(-9982, var_10)))) : (max((arr_30 [i_9]), (arr_30 [i_9]))))))));
    }
    var_26 ^= ((var_8 ? var_6 : ((14986280101532772414 ? var_4 : ((-2147483644 ? 562178439115796100 : 6044377135317800329))))));
    var_27 -= (((min(740346297, var_2))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            {
                var_28 = (min(var_28, (min(179, -26030))));
                var_29 = (min(0, var_3));
                var_30 = 186;
            }
        }
    }
    #pragma endscop
}
