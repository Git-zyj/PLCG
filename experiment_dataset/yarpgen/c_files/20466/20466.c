/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(0, (((var_3 & 15) + 6941710921279934443))));
    var_12 = (max((!var_7), var_2));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 += ((!(((247 ? ((((arr_0 [2]) ? (arr_1 [2]) : (arr_0 [0])))) : (min(123, 1948533374)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 = (~(arr_8 [i_3 + 1] [i_0] [i_0] [i_3 + 1]));
                        var_15 &= ((((7 ? (((arr_5 [i_0] [i_3 + 1]) ? var_3 : var_3)) : (((max((arr_6 [i_3 + 1] [i_1] [i_0]), (arr_2 [i_1]))))))) - ((((!(((arr_7 [i_0] [i_1] [16] [i_3 + 3] [0]) >= -2106103357))))))));
                    }
                }
            }
        }
        var_16 = ((!(((-(arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_17 -= (((((((arr_7 [i_0] [i_0] [6] [i_0] [i_0]) ? 1431873579 : 0)))) ? ((~(153 | 2623))) : -410937632));
        arr_9 [i_0] = (~0);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_18 = (max(var_18, (arr_11 [8] [10])));
        var_19 -= (arr_10 [i_4]);
        arr_12 [i_4] = 1;
        var_20 *= (arr_10 [10]);
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_21 += ((+(min((arr_13 [i_5] [i_5]), (0 <= -922059134)))));
        var_22 = (arr_14 [i_5] [i_5]);

        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            arr_17 [i_5] [i_6] = ((((((!(arr_13 [i_5] [i_5]))))) - ((5449078323530203679 % ((min((arr_14 [i_5] [i_5]), 1)))))));
            arr_18 [8] [8] = var_9;
            var_23 *= 1;
        }
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            var_24 = (arr_13 [i_5] [i_7 + 2]);
            var_25 += 8;
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_26 = (((((arr_19 [2] [i_8] [i_5]) + (arr_13 [i_8] [i_5])))) ? (min((-19271 | 10997), (((arr_14 [i_5] [i_5]) ? (arr_13 [i_5] [i_5]) : (arr_16 [i_5] [i_5] [i_5]))))) : (arr_20 [i_5]));
            var_27 ^= ((!(((-var_6 ^ (arr_21 [i_8]))))));
            var_28 = (min(var_28, (((+(max((var_0 & 84), (arr_14 [i_5] [i_8]))))))));
        }
    }
    #pragma endscop
}
