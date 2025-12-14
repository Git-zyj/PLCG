/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((-(min(var_15, var_6)))) == (((-(var_3 > var_0)))))))));
    var_17 = -18106;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = 1185666384;
        var_19 = (max(var_19, ((max(var_15, (((-1185666384 ? ((var_5 ? var_5 : 2144465991)) : (max(-1185666384, var_8))))))))));
        arr_3 [i_0] = var_4;
        arr_4 [i_0] = ((-((-21149 ? var_15 : (arr_2 [i_0])))));
    }
    var_20 = (max(var_20, var_15));
    #pragma endscop
}
