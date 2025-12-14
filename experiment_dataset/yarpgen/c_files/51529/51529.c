/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_15 &= ((var_2 >= ((((arr_1 [0]) < (arr_0 [i_0 - 1] [i_0 - 1]))))));
        arr_2 [i_0] = 125;

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_5 [16] [i_1] &= ((!(((((((arr_0 [1] [17]) ? var_7 : 1400793532))) ? (arr_1 [12]) : var_5)))));
            var_16 += ((~(((arr_0 [i_0] [i_0]) ? (((4 ? -25569 : 125))) : (arr_1 [10])))));
        }
        var_17 = -32765;
        var_18 = ((((((252 ? -25582 : (arr_1 [i_0]))))) ? (((arr_1 [i_0]) >> (arr_0 [i_0 - 2] [18]))) : (arr_4 [i_0 + 2])));
    }
    var_19 = ((25558 ? 18 : 10));
    #pragma endscop
}
