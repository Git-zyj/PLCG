/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 = (((5675954101980313201 - var_8) != ((2269814212194729984 >> (var_14 + 1681543496)))));
        arr_2 [i_0] = ((((((18446744073709551615 ? 92 : 0)) > (((207 ? 0 : 1)))))) == (((13 || 216) ? (-32 <= var_2) : var_14)));
    }
    var_17 = (max(var_2, ((var_14 ? (min(8, 1)) : var_9))));
    var_18 = (min(var_18, ((var_4 ? var_14 : ((max(var_8, -73)))))));
    #pragma endscop
}
