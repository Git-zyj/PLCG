/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_0 [i_0 + 1] [i_0 - 1])));
        var_13 = (min(var_13, (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_14 = (min(var_14, (((-(((arr_1 [i_1 - 1] [16]) ? 226 : (arr_2 [i_1 + 2] [i_1 + 1]))))))));
        var_15 = (min(var_15, ((((((((max(1, 5837227167478553421))) ? (((-1 ? 1 : 5))) : (min(1, 2850327244))))) ? ((((min(18446744073709551615, 249))) ? (arr_0 [i_1] [i_1 + 1]) : (arr_1 [i_1 + 1] [i_1 - 1]))) : 247)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_8 [i_2] = 1;
        arr_9 [i_2] [i_2] = var_4;
        var_16 = ((!((min((5 || 254), 28)))));
    }
    var_17 = 479180737;
    #pragma endscop
}
