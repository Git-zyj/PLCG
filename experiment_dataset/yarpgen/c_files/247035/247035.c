/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((-1 - ((((arr_1 [i_0]) ? 0 : (arr_1 [i_0]))))));
        var_14 = (((((-(arr_0 [i_0])))) ? ((91 ? var_1 : var_7)) : var_5));
    }

    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1 - 1] = (((~40803) - (arr_1 [i_1 - 1])));
        var_15 = ((~(arr_3 [i_1] [i_1 - 3])));
    }
    #pragma endscop
}
