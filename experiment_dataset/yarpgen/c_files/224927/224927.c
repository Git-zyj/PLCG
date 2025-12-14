/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = 181;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 += var_2;
        var_17 ^= ((((-37262 * (167 | var_7)))) ? (((arr_1 [i_0]) ? 288230375614840832 : ((((arr_1 [i_0]) / 1))))) : (((((-6344042357331778310 ? 12 : (arr_0 [i_0] [i_0]))) ^ var_12))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_0 [i_1] [i_1]) ? (min((((arr_5 [1]) ? var_10 : var_1)), 0)) : (max(4194303, -6363))));
        var_18 = (max(var_18, (-9223372036854775807 - 1)));
    }
    var_19 = var_0;
    #pragma endscop
}
