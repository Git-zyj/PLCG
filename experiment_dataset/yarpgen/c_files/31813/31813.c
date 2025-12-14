/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((-var_13 + 9223372036854775807) << (-var_2 - 3265722432)));
        arr_4 [i_0] = (((((min(var_14, var_3))) ? (((45139 ? (arr_1 [i_0]) : (arr_0 [i_0])))) : 6159927069792639571)));
        var_17 = ((~(min((((arr_1 [i_0]) ^ (arr_0 [i_0]))), ((var_9 ? var_8 : var_4))))));
    }
    var_18 = var_5;
    var_19 = var_6;
    #pragma endscop
}
