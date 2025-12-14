/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= 26551;
    var_15 = var_5;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 *= ((8190 ? 13917590361716616185 : 57343));
        arr_2 [i_0 + 1] &= (((((((1024 <= var_5) <= ((13917590361716616201 ? var_9 : var_11)))))) > (((((-32763 ? 8153657551179857285 : 2879890136))) ? var_6 : 4189260096789158871))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_17 = 28876;
        var_18 ^= ((((var_8 ? (((10293086522529694319 ? (-9223372036854775807 - 1) : 0))) : 13917590361716616168)) >> ((((var_13 | var_12) && ((min(35355, var_10))))))));
    }
    #pragma endscop
}
