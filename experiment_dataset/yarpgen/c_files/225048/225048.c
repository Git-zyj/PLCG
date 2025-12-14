/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((((var_10 ? var_11 : var_0))) ? (max(var_4, 4611686018427387904)) : -var_10)));
    var_13 = (max(var_13, var_5));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_4 [10] = 575814531;
        var_14 = ((-32370 ? ((13835058055282163711 * (((var_1 ? (arr_0 [11] [i_0]) : (arr_2 [i_0 + 1])))))) : (max(4611686018427387904, -19553))));
        var_15 = ((((min(var_5, var_11))) ? (!1151622416374226050) : ((((((arr_3 [i_0]) ? var_11 : var_0)) != ((90 ? 4611686018427387904 : 13835058055282163711)))))));
        arr_5 [i_0] = var_9;
    }
    var_16 -= 16344214375851145332;
    var_17 = (((~var_4) ? ((max(((max(var_7, var_3))), 16344214375851145348))) : ((((min(var_4, var_5))) + ((var_5 ? var_7 : 16474849421105681256))))));
    #pragma endscop
}
