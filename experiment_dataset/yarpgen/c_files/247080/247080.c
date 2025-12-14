/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (--1816677560);
    var_13 = (max(((max(var_3, var_1))), ((var_2 ? 1816677560 : 2325606241))));
    var_14 = ((((var_11 + var_10) ? 1816677560 : (!var_3))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (max(((~(max(var_0, (arr_1 [i_0] [i_0]))))), (((((((arr_0 [i_0]) ? 1816677548 : (-32767 - 1)))) ? 24355 : ((max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] [i_0] &= var_0;
        var_15 = arr_0 [i_0];
    }
    #pragma endscop
}
