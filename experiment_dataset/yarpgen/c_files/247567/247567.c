/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 |= (arr_0 [17] [i_0]);
        var_14 = (max(((((min(1144281189, 14048))) ? (arr_0 [i_0] [i_0]) : (min(-2638051294345648772, 12618101088303120244)))), 2));
        var_15 = 2005046763;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 |= 133;
        var_17 = (min(var_17, (arr_4 [i_1])));
    }
    var_18 = var_0;
    #pragma endscop
}
