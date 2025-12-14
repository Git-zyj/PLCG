/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (max((((-(arr_3 [i_0])))), var_1));
        arr_5 [7] [i_0] = (((2080374784 & -1) < (max(var_7, 2214592512))));
        var_14 = (((min((arr_2 [i_0]), (arr_2 [i_0]))) << (((min(((10 ? 2080374790 : 2080374790)), ((2080374791 % (arr_0 [i_0]))))) - 243))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_15 += (max(32591, ((2080374783 ? 2214592488 : 2214592529))));
        var_16 = max((((2080374784 ? ((var_3 ? (arr_0 [i_1]) : (arr_0 [i_1]))) : (arr_0 [i_1])))), ((((max((arr_6 [0]), (arr_0 [i_1])))) ? ((31885 ? var_4 : (arr_7 [i_1] [6]))) : var_2)));

        for (int i_2 = 1; i_2 < 6;i_2 += 1)
        {
            var_17 = min(var_2, (var_4 ^ 4294967295));
            arr_11 [i_1] [i_2] [i_2] = ((!(((var_1 ? (arr_2 [i_2]) : (arr_2 [i_2]))))));
            var_18 ^= min(var_10, (((var_11 ^ 2214592527) ? (arr_2 [i_1]) : (arr_3 [i_2 + 1]))));
        }
    }
    var_19 = ((var_6 ? var_8 : var_2));
    var_20 |= var_11;
    #pragma endscop
}
