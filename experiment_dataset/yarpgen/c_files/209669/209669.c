/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((~41463), ((~(min(0, 1152921500311879680))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!(!1152921500311879680)));
        arr_5 [i_0] [5] = 2097151;
        arr_6 [i_0] = (~0);
        arr_7 [i_0] = 0;
    }
    var_15 = var_4;
    #pragma endscop
}
