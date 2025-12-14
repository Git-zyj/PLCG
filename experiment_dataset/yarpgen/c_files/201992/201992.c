/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (0 ? var_3 : var_3);
    var_13 = (min(-var_10, (((((65533 ? 61032 : -5))) ? (~3306073883275436225) : 5))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, 65535));
        var_15 = 5;
        var_16 = -3356717067458553978;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1 - 1] [i_1 - 1] = (~(min(18, -20)));
        var_17 = (--35000);
    }
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        var_18 = 2;
        var_19 = (min(var_19, 65530));
    }
    var_20 = 9091883669454455807;
    #pragma endscop
}
