/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = (~var_5);
    var_15 -= min(var_9, ((((min(var_11, -28312))) ? (((max(var_3, var_1)))) : (max(var_7, var_0)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (max((((~(arr_0 [i_0])))), (max(8118427504429715100, 1023))));
        arr_4 [i_0] = (max(((((max(-1563841443, -35)) % var_11))), ((-(arr_2 [i_0])))));
    }
    #pragma endscop
}
