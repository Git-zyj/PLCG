/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_6, var_3));
    var_20 = (min(var_5, var_17));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_21 = (min(var_21, (max(3940310545373886383, 2953638486680583650))));
        arr_4 [i_0] [i_0] = (((max(var_4, var_18))));
    }
    #pragma endscop
}
