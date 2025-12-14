/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(var_0, var_13)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 7259533912344151318;
        var_15 = ((1 ? 228 : -4138245912624985526));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (((arr_6 [i_1]) ^ (arr_6 [i_1])));
        arr_7 [i_1] = (((arr_5 [i_1]) * 11187210161365400298));
        var_17 = (max(var_17, ((((arr_6 [i_1]) || 1023)))));
        var_18 = (max(var_18, -11187210161365400298));
    }
    #pragma endscop
}
