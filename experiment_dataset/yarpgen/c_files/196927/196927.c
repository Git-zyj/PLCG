/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 ? var_0 : (((var_10 & var_1) ? 65535 : (~184)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_18 = ((((arr_2 [0] [i_0]) ? 18446744073709551601 : 3207786605574196082)) >> (23352 - 23345));
        arr_5 [i_0] [i_0] = 2255604797532596075;
    }
    #pragma endscop
}
