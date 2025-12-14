/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [2] = (((((arr_2 [i_0]) && (arr_2 [i_0]))) ? (((((arr_2 [i_0]) >> (var_5 - 2513310485527291266))) ^ var_2)) : (47854 <= 90)));
        arr_4 [i_0] [0] = ((((min((~var_0), ((var_4 ? -97 : 1))))) ? (((var_7 >> (((arr_0 [i_0]) + 21687))))) : ((~(((arr_2 [i_0]) ? var_11 : 97))))));
    }
    var_19 = (!var_8);
    #pragma endscop
}
