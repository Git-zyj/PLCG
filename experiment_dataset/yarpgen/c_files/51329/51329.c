/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min(((52089 ? 0 : -116)), -var_2)), var_5));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_21 = (((((((((arr_1 [i_0] [i_0]) <= (arr_2 [i_0 + 1])))) - (arr_2 [i_0 - 1])))) ? (((arr_0 [i_0 + 3] [i_0 + 3]) * -3674)) : 27625));
        var_22 = ((-((-104 ? 205 : 195))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [11] = var_4;
                    arr_12 [i_1] [i_2] = (((((((((arr_2 [i_1]) / (arr_10 [i_1] [i_2] [i_2])))) ? ((min((arr_3 [12]), 14))) : (((arr_0 [i_2] [i_3]) ? (arr_1 [i_3 + 3] [i_3 + 3]) : var_9))))) ? (((arr_0 [i_3] [i_2 - 2]) / 2623)) : ((-(-127 - 1)))));
                    var_23 = (min((87 > 9257), -0));
                }
            }
        }
        arr_13 [i_1] [i_1] = var_14;
        arr_14 [i_1] = (min(5, ((1 ? 106 : 7313))));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        arr_17 [i_4] = (min((max((min(2523587048, (arr_1 [i_4] [i_4]))), (((137 ? -111 : 47))))), (((~(arr_0 [i_4 + 2] [i_4 + 2]))))));
        var_24 = (~112);
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_27 [i_6] = (!114);
                    arr_28 [i_5] [i_6] [i_5] &= (max((((((((arr_25 [i_7] [i_5] [i_5]) ? var_13 : 1771380233))) ? ((595 ? 28197 : 53336)) : (arr_24 [i_7])))), (var_11 || -72)));
                    var_25 = 255;
                    var_26 = (((arr_5 [i_5] [13] [i_7]) > (arr_15 [5])));
                }
            }
        }
    }
    var_27 |= (min(112, var_4));
    #pragma endscop
}
