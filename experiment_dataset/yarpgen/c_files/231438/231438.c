/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (0 < var_13);

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 = ((8771 == (var_11 == 206)));
        arr_2 [i_0] [i_0] = (((var_2 * var_13) ? (max(0, var_1)) : 0));
        var_17 = (min(-2692202571940495113, 3929156516));
        var_18 = var_5;
    }
    var_19 = var_13;
    #pragma endscop
}
