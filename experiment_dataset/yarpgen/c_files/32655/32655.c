/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((~1), (((!(arr_1 [i_0] [i_0]))))))) && var_4));
        arr_3 [7] |= ((((arr_1 [i_0] [i_0 + 1]) - (arr_1 [i_0] [i_0 - 1]))));
        arr_4 [i_0] [14] |= (arr_1 [i_0] [i_0 + 1]);
    }
    var_20 = ((1 * (!var_10)));
    var_21 = 1;
    var_22 = ((var_17 ? (((325117816330404664 ? var_2 : var_8))) : (((var_8 ? var_6 : var_15)))));
    #pragma endscop
}
