/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (18446744073709551594 ^ 24872)));
    var_19 = var_0;
    var_20 = var_6;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_0] = 22;
            arr_6 [i_1] = (arr_2 [i_1]);
            var_21 *= (((38 & 0) ? 64826 : -620554056));
            arr_7 [i_1] = (((arr_1 [i_0 + 1]) ? -1 : (arr_2 [18])));
        }
        var_22 = -3419453045100876080;
        var_23 = (arr_1 [i_0]);
    }
    #pragma endscop
}
