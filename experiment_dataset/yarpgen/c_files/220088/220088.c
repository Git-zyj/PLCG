/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = min((arr_1 [i_0]), ((0 & (((arr_0 [i_0]) ? var_2 : (-9223372036854775807 - 1))))));
        var_13 = min(-8, 4529031786044652458);
        arr_3 [i_0] [i_0] = min((min((((arr_0 [i_0]) ? 5522477299268387574 : -8153891415736575754)), ((1851560371614574440 ? 9070439164483387581 : -427964949970356439)))), ((var_9 ? (arr_0 [i_0]) : (~var_4))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = var_3;
        arr_7 [i_1] = (((((var_7 ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))) ? var_3 : (!var_2)));
        var_14 = arr_0 [i_1];
        var_15 = (((min(var_4, ((var_5 ? var_1 : (arr_4 [i_1])))))) ? var_5 : ((((min(var_3, var_12))) ? -1851560371614574438 : (var_6 / var_3))));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_16 = -1851560371614574440;
        arr_11 [i_2] = (((9070439164483387581 >= (arr_0 [i_2 - 3]))) ? (((((1851560371614574440 <= 6428054589981665601) < (arr_9 [i_2 - 2] [i_2 + 1]))))) : var_8);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_17 = (!var_3);
        arr_16 [i_3] = ((((7823918562599095178 ? var_12 : (arr_13 [i_3]))) != -7485840452853399294));
        var_18 = (min(var_18, (((arr_0 [i_3]) ? -4529031786044652470 : (arr_0 [i_3])))));
    }
    var_19 = (min(var_19, var_9));
    #pragma endscop
}
