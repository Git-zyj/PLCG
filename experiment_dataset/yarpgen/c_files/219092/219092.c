/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (var_1 / var_8);
        var_11 = (max(var_11, ((max(var_8, 3727027217)))));
        var_12 = min((((arr_0 [i_0]) ? (((~(arr_0 [i_0])))) : ((~(arr_2 [i_0]))))), ((min(var_9, 0))));
        var_13 = ((~(((((255 ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? (((arr_2 [i_0]) ? var_2 : (arr_1 [i_0]))) : (((((arr_1 [i_0]) <= 0))))))));
    }
    var_14 ^= ((min((var_10 || var_9), 0)));
    var_15 = (((min((min(20, 1969221197)), (((var_4 ? 248 : var_3)))))) ? (((255 && var_1) ? 83 : ((15 ? 3069042492 : var_9)))) : (((((var_8 * 2897816967) && (((255 ? 2325746084 : 4192256))))))));
    var_16 = ((~(var_6 ^ 189)));
    #pragma endscop
}
