/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_6 ? var_7 : var_2))) ? ((var_2 ? 65515 : 4281720421238100328)) : (((0 ? var_9 : 24)))))) ? ((max(((73 ? var_9 : -137297738)), ((min(-116, var_6)))))) : (((((14165023652471451280 ? var_11 : 4281720421238100328))) ? ((31 ? var_6 : var_14)) : (((4281720421238100309 ? 1 : var_3))))));
    var_16 = (min(((max((min(var_12, var_9)), ((min(233, var_10)))))), (min(((128 ? var_8 : var_14)), (((var_10 ? var_0 : var_2)))))));
    var_17 = (((((((max(6, 1))) ? (max(var_14, 5845)) : (((max(var_0, 1))))))) ? ((max(((var_14 ? 14 : var_9)), ((max(116, 1)))))) : ((((max(0, 126))) ? (max(var_13, 1)) : ((var_4 ? var_2 : var_14))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((1 ? (arr_1 [i_0] [12]) : 60))) ? ((((arr_0 [i_0]) ? 14 : 17281))) : ((57077 ? (arr_0 [i_0]) : 17098831730890091143))));
        var_18 = (min(var_18, ((((((38 ? 4 : (arr_1 [i_0] [i_0])))) ? ((var_10 ? (arr_1 [i_0] [i_0]) : 221)) : ((1 ? 234 : 1)))))));
        arr_3 [4] = (((((arr_0 [9]) ? 14165023652471451288 : (arr_1 [i_0] [i_0])))) ? (((arr_0 [i_0]) ? 1 : 18446744073709551608)) : ((((arr_0 [i_0]) ? var_1 : 102))));
        var_19 ^= (((((var_13 ? (arr_0 [i_0]) : 8))) ? ((87 ? 1 : 92)) : ((1 ? 255 : var_11))));
    }
    #pragma endscop
}
