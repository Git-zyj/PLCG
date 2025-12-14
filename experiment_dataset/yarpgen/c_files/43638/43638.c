/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_1 ? var_11 : ((-1988226834 ? -25439 : 0))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_18 -= ((var_1 ? var_13 : ((min(-3708125498031922640, 210)))));
            arr_4 [i_1] = (((((((min((arr_2 [9] [9] [9]), var_14))) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_1])))) + (min(((max(var_16, (arr_0 [i_0] [i_1])))), ((var_12 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))));
            arr_5 [i_1] [i_1] = (-273995448 - 46314);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [i_3] = (arr_10 [i_0] [i_0] [i_0]);
                        var_19 = (((((max(var_2, (arr_6 [3] [3] [3])))) ? (arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 1]) : 1)));
                        var_20 = (((arr_1 [i_0]) ? (((arr_8 [i_0] [i_0] [1]) ? ((max(0, 155))) : ((max((arr_10 [i_0] [i_3] [i_0]), (arr_11 [i_4] [4] [i_0 + 1] [i_0 + 1])))))) : ((((var_1 << (((arr_13 [i_2]) - 3872))))))));
                    }
                }
            }
            arr_15 [i_0] = arr_7 [i_0] [i_2];
            var_21 = ((min((min((arr_3 [1]), var_9)), (arr_1 [i_2]))));
            arr_16 [i_0 + 1] &= (min((arr_1 [i_0 + 1]), ((((((19281 ? (arr_2 [i_0] [i_0] [i_0]) : var_7))) != (((arr_2 [6] [i_2] [1]) ? 4975899605845803388 : -13171)))))));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_19 [3] = arr_10 [i_0 - 1] [i_0 + 1] [i_0];
            arr_20 [i_5] [i_0] = (max(((~(((var_4 > (arr_7 [7] [i_5])))))), (((min((arr_10 [i_5] [i_5] [i_0]), (arr_1 [i_0])))))));
            arr_21 [i_0] [i_5] [i_0] = (arr_12 [1] [1] [i_0] [i_5] [11] [i_5]);
            var_22 = (max((max((arr_1 [i_0 - 1]), var_3)), (arr_1 [i_0 - 1])));
        }
        var_23 = ((~(arr_9 [i_0 + 1] [11] [i_0] [12])));

        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_24 = (min(var_24, (((-(max((arr_13 [i_0]), ((268369920 ? (arr_13 [i_6]) : (arr_13 [i_6]))))))))));
            arr_24 [i_6] [i_0] [i_6] = (((~((31988 ? 1 : 2736369533)))));
            arr_25 [i_6] = (((~14) ? (((!(((-88 ? (arr_12 [0] [i_0] [i_6 - 1] [11] [i_6] [i_6]) : 2031616)))))) : (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6]) ? var_5 : (arr_18 [i_0] [i_0] [i_6 + 1]))) * ((var_7 ? var_4 : (arr_7 [i_6] [i_6])))))));
            var_25 = (((max((arr_7 [i_6 - 1] [i_0 - 1]), (arr_7 [i_6 + 2] [i_0 - 1]))) ? (!-18375) : (max(((((arr_18 [i_0] [i_0] [i_6 - 1]) ? (arr_0 [7] [10]) : (arr_22 [i_6])))), ((2031601 ^ (arr_1 [i_6])))))));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_26 = (((arr_23 [i_7] [i_7 - 1]) ? (arr_17 [i_0] [i_7]) : ((((min(1, (arr_23 [i_7] [i_7])))) ? (arr_23 [i_7] [i_7]) : -var_4))));
            var_27 = (max(((var_9 ? (arr_26 [i_7] [i_7] [i_7 - 1]) : (arr_26 [i_7] [i_7 - 1] [i_7 - 1]))), (((arr_26 [i_7] [i_7] [i_7 - 1]) ? (arr_26 [i_7] [i_7] [i_7 - 1]) : (arr_26 [i_7] [i_7] [i_7 - 1])))));
        }
        arr_30 [i_0] = max((arr_18 [i_0 - 1] [i_0] [i_0]), 4002239436);
    }
    var_28 = var_14;
    #pragma endscop
}
