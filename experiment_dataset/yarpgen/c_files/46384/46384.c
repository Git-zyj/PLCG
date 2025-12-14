/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_11, var_10));
    var_14 = (!1601733065);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((355040841 ? 63818 : 1740689442)) - ((((!((min(-1, var_8)))))))));
        var_15 = (i_0 % 2 == 0) ? (min(((7179 << (((arr_1 [i_0 + 2] [i_0]) + 359895458)))), (((max(203400645, (arr_1 [i_0] [i_0]))) | ((5759456771587453709 ? var_7 : (arr_1 [7] [i_0]))))))) : (min(((7179 << (((((((arr_1 [i_0 + 2] [i_0]) + 359895458)) + 48908739)) - 7)))), (((max(203400645, (arr_1 [i_0] [i_0]))) | ((5759456771587453709 ? var_7 : (arr_1 [7] [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_16 = arr_2 [2];
        arr_8 [14] = ((((((arr_2 [2]) ? (arr_2 [6]) : (arr_0 [18])))) ? (((arr_2 [18]) ? (arr_0 [8]) : (arr_0 [14]))) : (arr_0 [12])));
        var_17 = (max(var_17, (((min(((8589410304 ? (arr_7 [i_1]) : -1)), (arr_1 [i_1] [0]))) - (arr_7 [i_1 + 2])))));
        arr_9 [i_1] = (-((~(arr_5 [i_1 + 2] [i_1 - 2]))));
    }
    #pragma endscop
}
