/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_0 ? var_3 : var_4)), var_4));
    var_11 = ((((min((((0 ? var_2 : var_4))), var_3))) || (!var_1)));
    var_12 = (max(var_12, var_2));
    var_13 = ((+((var_7 ? (var_6 | 65535) : var_5))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 15640852046467008699;
        var_14 = (((arr_2 [i_0]) ? ((var_7 ? var_9 : 44003)) : ((-1423393344 ? -13973 : (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
