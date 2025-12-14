/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 || ((max(58, ((7719580576190939380 ? 0 : var_9)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 -= (max((10727163497518612236 && 3985426540523455188), (((1 ? var_0 : 36646)))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_5 [6] = (((max(var_6, (max(var_5, var_10)))) * (((((max((arr_0 [i_1] [i_0]), 1))) ? ((var_5 ? (arr_3 [i_0]) : 28889)) : (arr_0 [i_0] [i_0]))))));
            var_17 = var_13;
            var_18 = ((~(((arr_0 [i_1 - 2] [i_0]) ? (((arr_1 [i_0] [i_1]) ? var_13 : var_1)) : (((64 / (arr_4 [i_1] [i_0] [i_0]))))))));
            arr_6 [i_0] [i_1 + 1] = (((((((((arr_4 [i_1] [5] [i_0]) ? 36671 : 120))) ? ((-929605968 ? var_11 : var_10)) : (158 * var_10)))) ? 1 : (arr_2 [2] [2])));
            arr_7 [i_1] [i_1] [i_0] |= (((((var_12 || var_14) || ((!(arr_4 [i_0] [5] [i_0]))))) ? (arr_1 [8] [i_1 - 1]) : (min((((1 && (arr_2 [i_1 - 2] [i_0])))), 10727163497518612236))));
        }
    }
    #pragma endscop
}
