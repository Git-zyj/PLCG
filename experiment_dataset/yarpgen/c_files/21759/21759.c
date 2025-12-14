/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max((((min(var_5, var_4)))), (min(3658267517, (~var_13))))))));
    var_17 = (max(var_17, (((-121 ? var_7 : var_12)))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [2] = ((~(min(((-1 ? var_15 : -27)), ((-55 ? (arr_1 [22]) : 46))))));
        arr_3 [i_0] = -53;
        var_18 = (max(-12035, ((-27 ? -43563089 : ((-55 ? var_4 : 58))))));
        var_19 = (~-8898);
        arr_4 [i_0 - 1] = var_13;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((~(~89)));
        arr_8 [i_1] = -11;
    }
    #pragma endscop
}
