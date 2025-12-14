/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_12, var_10));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 = (((1026693707 || (arr_3 [8]))) ? 65535 : 65520);
        arr_4 [10] = 252;
        var_17 = (4294967295 / -696027489);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 = ((!(((-(arr_2 [7]))))));
        var_19 = ((((max((arr_6 [i_1]), var_3))) && (((((((arr_3 [i_1]) & 235))) ? (0 <= 1) : 9730639166785298337)))));
    }
    #pragma endscop
}
