/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] |= (((arr_0 [i_0]) % 12758));
        var_12 = (max(((((arr_1 [i_0]) * (!12735)))), var_2));
    }
    var_13 = var_0;
    var_14 = ((var_5 || var_1) ? (((((((max(var_3, var_4)))) < (max(var_2, var_11)))))) : (min((((0 ? 12746 : var_8))), var_10)));
    var_15 = ((var_9 * ((var_2 >> ((((12736 ? var_4 : var_6)) - 31754))))));
    #pragma endscop
}
