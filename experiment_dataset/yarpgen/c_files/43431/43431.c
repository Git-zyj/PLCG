/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((max(-var_9, (-2147483647 - 1))) >> (((max(((max(var_19, var_17))), (min(3379249113, (arr_0 [i_0]))))) - 3379249095)));
        var_21 = (((((15627442575635888468 + 9223372036854775807) >> (var_18 + 25775))) << (((max((arr_2 [i_0]), (max(65522, var_7)))) - 2627663467))));
        var_22 = ((!((min(var_0, var_3)))));
        arr_3 [i_0] |= (((min((arr_1 [i_0]), (arr_0 [4]))) * (min(var_8, var_6))));
        arr_4 [i_0] [i_0] = (((((!(((var_19 ? (arr_0 [14]) : var_12)))))) > var_13));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_23 = ((33090 ? ((-16455 ? 198 : var_15)) : 2147483627));
        arr_8 [2] [6] |= (var_16 ? (-9223372036854775807 - 1) : (arr_7 [i_1 - 2] [4]));
        arr_9 [i_1] = (arr_1 [i_1 + 3]);
        arr_10 [i_1] = (((!var_1) ? ((-2136615372 ? (arr_6 [0]) : var_6)) : ((4294967271 ? var_7 : 3))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_24 = (min(var_24, ((min(((((max(1295173360, var_10)) / (((var_7 ? var_14 : var_10)))))), ((((var_0 ? 1008066931995441482 : (arr_11 [i_2] [i_2]))) / (((14959 << (((arr_13 [9]) - 133))))))))))));
        var_25 = (min((min((var_14 <= var_15), (min(var_17, (arr_14 [i_2]))))), (((!(((var_7 ? var_12 : var_9))))))));
        arr_15 [i_2] = (min((min((-327913288 & var_2), -327913291)), var_14));
    }
    var_26 -= (((((min(9223372036854775805, var_17)) % (((var_2 ? var_6 : var_12))))) << ((((min(var_13, (!var_16)))) + 95))));
    var_27 |= ((((((var_1 < var_7) * var_4))) ? var_16 : var_12));
    var_28 = ((((min(var_11, (((var_8 ? var_0 : var_16)))))) ? (((var_2 ? (min(var_19, var_1)) : var_10))) : var_8));
    var_29 = (((var_6 & 327913267) - (var_1 == var_19)));
    #pragma endscop
}
