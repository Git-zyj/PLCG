/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0 - 1] = (((~((((arr_1 [i_0]) && (arr_1 [i_0 - 3])))))) % (((((var_1 ? (arr_0 [i_0] [i_0]) : 129024))) ? (~129026) : (max(-129021, var_15)))));
        var_17 = (max(var_17, ((((((arr_0 [i_0 - 3] [i_0 - 1]) ? (arr_1 [i_0]) : 129026)) < (((((var_1 ? -115450983 : (arr_1 [i_0])))) ? var_10 : ((1 ? 129026 : 199)))))))));
    }
    var_18 &= max((var_14 != 91), (var_5 < var_7));
    var_19 = var_4;
    var_20 = (max(var_20, var_2));
    var_21 = (((-115450997 && 0) ^ 178));
    #pragma endscop
}
