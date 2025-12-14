/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max((3 & var_4), ((min(-13, var_13)))))) ? ((((3 ? 3 : 3)))) : (max(-var_4, var_15))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [22] [i_0] = (max((((1 * var_14) * (var_2 / -1))), ((((arr_1 [i_0]) ? -4 : -3)))));
        arr_3 [i_0] [i_0] = ((-1245287523 >> ((((~(arr_1 [i_0]))) + 1538196956705937371))));
    }
    #pragma endscop
}
