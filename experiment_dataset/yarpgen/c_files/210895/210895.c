/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (var_8 ^ var_16);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = 5967723628339870223;
        arr_3 [i_0] |= (1 != -24411);
        arr_4 [i_0] [i_0] = 2535833176255000903;
        var_20 = (max(var_20, 0));
    }
    var_21 = var_13;
    #pragma endscop
}
