/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_14 = ((~(((arr_2 [i_0] [1]) ? ((((arr_0 [i_1]) || (arr_0 [i_1])))) : (arr_2 [5] [i_1])))));
            var_15 = (max((max((arr_3 [i_0 + 2] [i_0 + 1] [i_1 - 1]), (arr_0 [i_0 + 3]))), ((-(arr_1 [i_0 + 1])))));
            var_16 = (min(var_16, (arr_0 [i_0])));
        }
        arr_5 [i_0] [i_0] = ((((((((-(arr_3 [4] [i_0 + 2] [i_0])))) ? (max((arr_3 [i_0] [i_0] [i_0]), (arr_0 [i_0]))) : (arr_3 [i_0] [i_0] [i_0])))) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])));
        var_17 = arr_1 [i_0];
    }
    var_18 = var_7;

    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_19 &= (arr_8 [i_2]);
        var_20 = (arr_8 [i_2 - 1]);
        arr_9 [i_2] = (arr_7 [i_2]);
        var_21 = (arr_7 [i_2]);
    }
    #pragma endscop
}
