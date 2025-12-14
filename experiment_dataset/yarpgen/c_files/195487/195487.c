/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [i_0] [i_0 - 2]) ? 0 : ((((((-(arr_1 [i_0 - 3])))) ? (var_10 < var_1) : 32767)))));
        var_18 = (min(var_18, (((var_12 ? ((-1 ? (1 != 124) : var_14)) : var_13)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 = (min(var_19, (((((((arr_6 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 1))) / -var_6)))));
        var_20 = (min(var_20, -7163594030264133339));
        arr_7 [i_1] = (((var_0 / (((max(var_9, -32758)))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_21 |= -125;
        arr_12 [i_2] [i_2] = ((~(!3324165932)));
        var_22 ^= (((max(var_0, (((var_4 ? -49 : 9))))) >= (arr_11 [i_2])));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_15 [1] [i_2] [1] &= (arr_9 [i_3] [2]);
            var_23 += (arr_10 [i_3]);
            var_24 = ((((((((var_8 ? var_16 : var_10)) < var_16)))) + var_0));
        }
    }
    var_25 |= (min(((-(23630 && 4735809082283465063))), var_17));
    var_26 = ((!(18 || var_11)));
    var_27 += ((~(-var_8 >= var_17)));
    var_28 &= var_4;
    #pragma endscop
}
