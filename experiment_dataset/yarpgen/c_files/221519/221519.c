/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(1073090757, 10162))), var_1));
    var_17 = -30609;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((+(min(((max((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0] [i_0 - 1])))), (((arr_0 [8] [i_0 + 1]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [8])))))));
        arr_4 [i_0] = 1851569348;
        var_18 = (max(var_18, (arr_0 [i_0 - 1] [i_0])));
    }
    var_19 = 52360;
    #pragma endscop
}
