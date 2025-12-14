/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = (max(((-278131029 >> (-var_11 - 196051869))), var_3));
        arr_3 [i_0] [i_0 - 2] = ((242 / (((arr_1 [i_0 - 2] [i_0 + 1]) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 - 2] [i_0 + 1])))));
    }
    var_16 = (((((var_14 ? 1073725440 : var_8))) ? ((((!var_10) && var_13))) : ((((var_12 - var_4) && ((min(var_12, 4016836266))))))));
    var_17 &= 0;
    #pragma endscop
}
