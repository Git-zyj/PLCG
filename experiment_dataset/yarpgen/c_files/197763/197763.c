/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(8795824586752, -47435433));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((-729315029 ? var_4 : var_9));
        var_21 = (min(var_21, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = var_11;
        var_23 = (-(arr_1 [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_24 = (arr_6 [i_2]);
        var_25 = (min(var_25, -1));
    }
    #pragma endscop
}
