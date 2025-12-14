/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min(var_3, ((var_7 ? var_2 : var_4)))), (((((min(var_13, 18100553828757365734))) ? var_7 : (!var_15))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((~(arr_1 [i_0])));
        var_19 = (~(4221738096 | var_13));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min((~var_2), 3347751148));
        arr_8 [i_1] = ((-105 == (arr_5 [i_1 - 1])));
    }
    #pragma endscop
}
