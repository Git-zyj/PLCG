/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_19 = (arr_1 [i_0 - 3]);

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_20 = (min(var_4, 2885912574));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_21 = (arr_9 [i_0]);
                    var_22 = (((1409054722 >= 44395) ? var_15 : (arr_3 [i_0 - 1])));
                }
                var_23 = (min((arr_2 [i_0 - 3] [i_1 + 1]), (((arr_3 [i_0 - 3]) ? (arr_3 [i_0 - 3]) : (arr_6 [i_0 - 3] [i_1 + 1] [i_1] [1])))));
            }
            var_24 = (arr_0 [i_1] [i_0]);
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                var_25 = var_10;
                var_26 = ((var_3 * (arr_0 [i_0 - 1] [i_4 - 1])));
                arr_17 [i_4] = ((var_3 ? (arr_10 [i_0 + 1] [i_4 - 1] [i_5 - 3]) : (arr_10 [i_0] [i_4 - 1] [i_5 - 1])));
                arr_18 [i_5 - 3] = ((var_7 ? (arr_7 [i_0 - 2] [i_0 - 1] [1] [i_4 - 1]) : (arr_13 [i_4 - 1] [i_5 - 3])));
            }
            var_27 = (arr_4 [i_0] [i_0] [i_4 - 1] [i_4 - 1]);
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_28 = ((21140 ? 1409054722 : 1));
        arr_23 [i_6] = ((((!(arr_19 [i_6] [i_6]))) ? (((!(arr_21 [i_6])))) : (((((max((arr_22 [i_6]), 2885912595))) && ((min(var_13, (arr_19 [i_6] [i_6])))))))));
        var_29 = (min(((max((((0 ? var_6 : var_6))), (arr_22 [16])))), ((-(arr_19 [i_6] [i_6])))));
        var_30 = (((arr_21 [i_6]) ? ((((max(12323, var_6))) ? var_1 : (max(var_18, 1409054722)))) : ((((arr_21 [i_6]) >> (var_7 - 1313614230))))));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                {
                    var_31 = (((((((var_13 ? 12 : var_1)) % 235))) + (((49202 / 41362221) ? (var_1 / var_9) : (max(var_12, 3932631309620336812))))));
                    var_32 = (((arr_28 [i_9] [i_9 + 1] [i_9 + 1]) ? var_9 : (arr_27 [8] [i_8])));
                    var_33 = var_12;
                }
            }
        }
    }
    var_34 = ((var_2 ? var_7 : var_12));
    #pragma endscop
}
