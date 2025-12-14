/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [10] = ((!(max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_3 [1] = (((~var_15) != ((var_12 + (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = (min(var_16, ((min((((((arr_6 [i_1] [i_1]) - (arr_4 [1]))) & (arr_6 [i_1] [i_1]))), var_3)))));
        var_17 = (min(var_17, (((!(7604 << 0))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_18 = (min((((arr_0 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2]))), ((min(var_12, var_5)))));
        arr_10 [i_2] = var_14;
    }
    var_19 ^= (max(var_8, ((~(0 | var_14)))));
    var_20 = var_6;
    var_21 ^= ((~((min(var_8, (min(var_10, var_5)))))));
    #pragma endscop
}
