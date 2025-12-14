/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_13, var_1));
    var_15 = ((!(((1842731889 ? -1205207777 : var_9)))));
    var_16 ^= -var_7;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_17 = ((!(arr_1 [i_0])));
        arr_4 [i_0] &= -10745;
        arr_5 [i_0] [i_0] = (min((max(32, 1303012088)), 2772598443));
        var_18 = 32767;
    }
    var_19 = var_3;
    #pragma endscop
}
