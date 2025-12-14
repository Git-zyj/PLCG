/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max(1638620216228231377, ((244 ? 3797483905621627108 : var_4)))), ((min((var_7 * var_8), 52379)))));
    var_11 = (max(var_5, (var_6 || var_1)));
    var_12 = (max(var_12, (((6686 ? (max((min(0, 1490721979691664429)), var_9)) : 6388674458058626944)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [12] |= (((((arr_0 [12]) ? 15 : (arr_2 [1]))) + ((3797483905621627118 ? (arr_2 [10]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = (arr_6 [i_1] [i_1]);
        var_14 = ((min(((4166342642 ? var_9 : 573)), var_9)));
    }
    #pragma endscop
}
