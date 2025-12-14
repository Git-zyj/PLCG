/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 ^= 2988129826677246468;
        var_20 ^= (((((min(46, 1)) ? var_7 : (arr_0 [i_0 - 3])))));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_4 [i_1] |= (((((arr_3 [i_1]) / 68))) ? ((((-2147483647 - 1) ? 707872645 : 2147483635))) : ((1 ? -3318366811074761908 : (arr_3 [i_1]))));
        arr_5 [22] = (((arr_2 [i_1] [9]) ? (max(((((arr_2 [i_1] [i_1]) | (arr_3 [i_1])))), ((2140154834927253642 ? 1638795940 : 0)))) : (((-(!1))))));
        var_21 -= ((((((26633 ? 99 : var_10))) ? (0 * 182) : (var_11 ^ var_15))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_22 = (max(var_22, 60));
        arr_8 [1] [i_2] |= (((~(arr_7 [i_2]))));
        var_23 = -2147483635;
    }
    var_24 = (-2147483647 - 1);
    #pragma endscop
}
