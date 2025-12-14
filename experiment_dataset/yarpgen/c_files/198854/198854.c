/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((-41 ? 1 : 316822128));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (min(var_21, var_19));
        arr_3 [9] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = var_6;
        var_22 ^= (arr_1 [i_0] [i_0]);
    }
    var_23 = var_17;
    var_24 = (min(3978145159, 1));
    var_25 = (min(var_25, var_17));
    #pragma endscop
}
