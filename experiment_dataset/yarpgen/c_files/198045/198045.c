/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? (~var_12) : ((((var_8 ? var_14 : var_9)) - (max(var_8, var_12))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_17 ^= (min(((((max((arr_0 [i_0] [i_0]), var_14))) ? ((min((arr_0 [i_0 + 1] [i_0]), (arr_1 [i_0])))) : ((((arr_1 [i_0]) < var_12))))), ((((~var_13) > var_11)))));
        var_18 &= (min(((((arr_1 [i_0 - 3]) == var_1))), (min(0, (arr_0 [i_0] [i_0])))));
        arr_2 [i_0 - 2] [i_0] = (arr_0 [i_0 + 1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((var_8 ? (((-0 - ((var_15 ? (arr_4 [i_1] [i_1]) : var_14))))) : -var_15));
        var_19 = (max(var_19, var_9));
        var_20 = (~var_2);
    }
    var_21 = (max(var_21, ((min((((var_15 ? 4073284657 : var_9))), var_9)))));
    var_22 = (max(var_22, var_1));
    #pragma endscop
}
