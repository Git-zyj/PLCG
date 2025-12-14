/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (min(var_13, ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_9)))));
        var_14 &= arr_0 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [6] &= ((-(arr_0 [i_1] [i_1])));
        var_15 += ((-15012538669669116269 ? ((((min(var_7, 203578086560033084))) ? (arr_2 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))) : ((((((arr_2 [i_1] [i_1]) + 2147483647)) >> (((arr_0 [i_1] [i_1]) + 8629567720636909886)))))));
    }
    var_16 &= var_2;
    var_17 ^= var_1;
    #pragma endscop
}
