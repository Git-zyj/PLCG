/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_8 < var_7) ? var_4 : (min(var_7, 1163781405))))) ? (((var_9 ? 65112 : var_3))) : (((-111 ^ var_6) * var_1))));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((var_8 ? (((arr_1 [i_0] [i_0 - 2]) ? 1505115671 : 27979)) : (arr_1 [i_0] [i_0 - 3])));
        arr_3 [i_0] [i_0] = (((((arr_0 [i_0]) ? (((((arr_0 [i_0]) < 1505115671)))) : ((1505115671 << (((arr_1 [i_0] [i_0]) - 41397)))))) > ((((!(!20)))))));
    }
    #pragma endscop
}
