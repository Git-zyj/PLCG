/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_2 && var_9);
    var_12 = (((var_6 >> (var_1 + 67))));
    var_13 ^= (var_2 && var_8);
    var_14 = 65535;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((-(max(var_9, (-9223372036854775807 - 1))))));
        var_15 = (((max(((max((arr_0 [i_0]), 10000))), ((~(arr_0 [i_0]))))) * var_9));
        var_16 = min(((!(arr_0 [i_0]))), (((arr_0 [i_0]) || 55535)));
        var_17 = min((((((((arr_0 [i_0]) && (arr_0 [i_0])))) < (arr_1 [i_0] [i_0])))), (arr_1 [i_0] [i_0]));
        arr_3 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_5 [i_1] [i_1]) && ((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))))));
        arr_7 [i_1] = ((-var_9 >= ((9988 << (((arr_4 [6]) - 56932))))));
        arr_8 [i_1] = ((-((min(1, (max((arr_4 [i_1]), (arr_4 [i_1]))))))));
    }
    #pragma endscop
}
