/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((-((max(var_11, var_6))))) != var_7));
    var_19 |= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 -= var_13;
        arr_2 [i_0] [i_0] = (1023 > 1036);
    }
    var_21 = var_9;
    #pragma endscop
}
