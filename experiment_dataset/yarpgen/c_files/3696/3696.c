/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_8 ? (164 / 92) : var_1)));
    var_15 = -var_3;
    var_16 = (((((((var_2 ? 14 : var_0))) ? 0 : (1 <= 255)))) ^ ((((min(1, var_11))) ? ((1 ? var_3 : var_12)) : 49404)));
    var_17 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_18 = -var_6;
        var_19 -= (arr_2 [i_0 + 1] [i_0 + 1]);
        var_20 = var_0;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (arr_1 [i_1]);
        var_22 = (((((arr_4 [i_1]) ? 27763 : ((var_4 ? var_1 : var_13)))) == (((1667426310 ? (((91 || (arr_0 [i_1] [i_1])))) : ((-(arr_1 [i_1]))))))));
        var_23 |= var_0;
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_24 = (((((-(((arr_5 [i_2] [i_2 - 1]) % (arr_1 [i_2])))))) ? ((0 ? (((var_12 % (arr_5 [i_2] [i_2 - 1])))) : 10040623733149567615)) : 16132));
        var_25 = (arr_2 [i_2 - 1] [i_2 + 1]);
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_26 = ((-((min(var_9, 17053691400189790783)))));
        var_27 -= ((-var_0 ? (((((var_2 ? var_9 : var_12))))) : ((-8654 / (arr_8 [i_3] [10])))));
    }
    #pragma endscop
}
