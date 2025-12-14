/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(var_17, (!var_6)))) / ((min(var_13, var_6)))));
    var_20 += ((~((6234461191335713389 ? (var_13 ^ var_7) : -var_15))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 = (min(((min((arr_3 [i_0]), 12235))), (min((arr_2 [i_0] [i_1] [i_1]), 38142))));
            var_22 = ((10542782981395807083 ? 58066 : 13965758412890571574));
            arr_4 [i_0] [i_0] [i_1] = var_5;
            arr_5 [20] [i_0] = ((((var_12 ? (arr_2 [i_0] [i_1] [i_1]) : var_16)) << (var_15 + 430127004)));
            arr_6 [i_0] [i_0] = (min(((-(arr_3 [i_1]))), 15006319249845555815));
        }
        var_23 = (~var_6);
        arr_7 [i_0] = ((+(max((arr_0 [i_0] [i_0]), var_3))));
        arr_8 [i_0] [i_0] = (min(1, -1264452712));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_24 = (min(((((max(1478114899, 23))) || ((min(var_7, var_5))))), ((!(((var_3 ? var_10 : var_17)))))));
        arr_11 [i_2] = (min((var_10 / var_12), (((var_7 ? var_1 : (arr_10 [i_2 + 1]))))));
        var_25 += (min((max(-var_7, (arr_9 [i_2 + 1]))), var_0));
        var_26 = ((19 || (((4313 ? var_6 : var_15)))));
    }
    #pragma endscop
}
