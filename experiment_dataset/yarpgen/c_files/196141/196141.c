/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((((arr_3 [i_0] [i_0]) ? (arr_1 [1]) : 5620)))));
        arr_4 [i_0] = (arr_1 [0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_19 = ((191 ? 2374505228 : 12032118));
        arr_7 [20] [i_1] = 1;
        var_20 = var_7;
    }
    var_21 &= var_2;
    #pragma endscop
}
