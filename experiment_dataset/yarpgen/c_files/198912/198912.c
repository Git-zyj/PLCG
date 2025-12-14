/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);
        arr_5 [i_0] [i_0] = ((~((((arr_2 [i_0]) <= (arr_2 [i_0]))))));
        var_11 = ((max(-117, var_2)));
        var_12 = min(var_8, var_1);
    }
    var_13 = ((((max((max(var_0, var_1)), var_6))) ? (~var_7) : var_3));
    #pragma endscop
}
