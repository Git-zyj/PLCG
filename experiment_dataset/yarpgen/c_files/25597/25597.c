/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, ((((arr_6 [i_0] [i_1] [i_0]) ? (((~(arr_11 [i_3 - 1] [i_3 + 1] [4] [i_1])))) : (max(-4194304, (min((arr_4 [i_0] [i_0]), (arr_3 [24] [23]))))))))));
                        arr_13 [i_0] [i_1] [9] [i_3] = (max((arr_9 [i_3] [i_0]), (min(1005901915, 0))));
                        var_14 = (arr_12 [i_0] [i_1] [i_2] [i_3]);

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_15 = ((((min((max((arr_9 [i_0] [i_1]), (arr_11 [i_0] [7] [i_0] [i_0]))), (arr_12 [i_0] [5] [i_2] [i_3])))) ? (min((arr_3 [i_3 + 1] [i_3 + 1]), (arr_5 [i_3 - 2]))) : ((min((arr_7 [i_4] [i_4] [i_3 + 1]), (arr_6 [i_0] [i_3 - 2] [i_2]))))));
                            var_16 -= ((((max((min((arr_4 [i_0] [i_0]), (arr_8 [i_2] [i_2]))), (arr_14 [i_2] [i_0])))) ? (((((arr_3 [i_0] [i_1]) <= 10699)))) : 15316962315297529550));
                            var_17 = ((((arr_2 [i_3 + 1] [i_3 + 1]) == (arr_2 [i_3 + 1] [i_3 + 1]))));
                            var_18 = (min(var_18, (((((min((((arr_15 [i_0] [i_0] [4] [i_1] [7] [i_3] [i_4]) ? (arr_12 [i_0] [i_0] [23] [i_0]) : (arr_15 [i_4] [i_3] [14] [i_2] [i_2] [2] [14]))), (((arr_9 [i_0] [i_1]) ? (arr_11 [i_4] [i_3 - 2] [i_1] [i_0]) : (arr_11 [i_0] [i_1] [i_3] [i_3])))))) < (min((((arr_9 [i_1] [20]) + (arr_3 [i_2] [i_3]))), (arr_12 [i_3 - 1] [i_3 - 1] [i_4] [i_4]))))))));
                        }
                    }
                }
            }
        }
        var_19 |= (((arr_4 [i_0] [i_0]) && ((min(((~(arr_12 [i_0] [i_0] [i_0] [i_0]))), (arr_2 [i_0] [i_0]))))));
        var_20 = (max((min(((min(0, -96))), (((arr_8 [i_0] [4]) / (arr_16 [i_0]))))), (((arr_8 [22] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (1004738042 - 15872)))));
    }
    var_21 = ((var_0 / (((22304 / 1760052510) ? var_0 : var_6))));

    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_22 = (((((max((arr_20 [i_5] [11]), (arr_9 [i_5] [23]))) >> (3235289019477870141 && -8246663495662440156))) | ((max((arr_6 [i_5] [i_5] [i_5]), ((-(arr_12 [i_5] [i_5] [i_5] [i_5]))))))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                {
                    var_23 = (min((((arr_20 [i_6 - 1] [i_7 - 3]) % (arr_20 [i_6 - 2] [i_7 - 3]))), (((arr_20 [i_6 - 2] [i_7 - 1]) ? (arr_20 [i_6 + 1] [i_7 - 2]) : (arr_20 [i_6 + 2] [i_7 - 3])))));
                    var_24 = (min(-22993, 1));
                }
            }
        }
        var_25 = (max((arr_9 [i_5] [i_5]), (arr_9 [i_5] [i_5])));
        arr_26 [i_5] [i_5] = (4294967295 & 676332905);
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_26 = max((arr_33 [16] [i_9] [i_10]), ((-(arr_0 [i_9 - 1]))));
                    var_27 = ((!(arr_16 [i_8])));
                }
            }
        }
        var_28 = ((1 ? 7768 : 1550545615));
        var_29 = (max(var_29, ((((((((max((arr_6 [18] [i_8] [12]), (arr_17 [i_8])))) << (((max((arr_31 [i_8] [i_8]), (arr_30 [1] [1]))) + 1256903446131164715))))) ? (arr_0 [i_8]) : ((((min((arr_25 [i_8] [i_8] [i_8] [1]), (arr_1 [2])))) ? ((min(-1, 1))) : (arr_24 [i_8] [i_8] [i_8]))))))));
        var_30 = (arr_11 [i_8] [i_8] [i_8] [i_8]);
    }
    #pragma endscop
}
