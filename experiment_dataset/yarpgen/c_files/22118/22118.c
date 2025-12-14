/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -32765;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 = ((-32754 ? (((32756 < (arr_1 [3])))) : ((84 ? (arr_0 [i_0 - 1]) : (-32747 / -32754)))));
        var_17 = 1;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = ((-var_8 * (((arr_2 [4] [i_1]) * (arr_2 [i_1] [i_1])))));
        arr_5 [5] = (-(((-32747 - 0) % (arr_3 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 = -8376;
        arr_9 [8] = (arr_8 [1] [3]);
        var_20 = (arr_0 [i_2]);
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] = (((((32756 >> (var_11 <= var_1)))) ? (((arr_10 [i_3 - 1] [i_3 + 1]) << (4443153661070543143 - 4443153661070543119))) : 32747));
        arr_13 [i_3] [i_3] = ((~(arr_10 [17] [2])));
        var_21 = ((!(arr_10 [i_3] [i_3])));
    }
    #pragma endscop
}
