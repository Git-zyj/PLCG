/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-32760 ? var_9 : var_9)));
    var_19 = (min(var_19, var_8));
    var_20 = ((!(((((-32760 ? var_7 : var_5)) - (-9223372036854775807 - 1))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -625252622;
        arr_3 [i_0] = (((arr_0 [4] [11]) > var_7));
    }
    #pragma endscop
}
