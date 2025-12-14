/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0 + 1] [i_0 + 2]) ? (arr_1 [i_0 - 1] [i_0 + 2]) : -1));
        arr_2 [i_0] [i_0] = ((-32581 ? (1687771999159503190 < 7462) : var_11));
    }
    var_15 = ((32580 ? (((((max(var_8, -18046))) || (!var_1)))) : (min(var_11, ((var_4 ? 1 : var_9))))));
    var_16 = (((((34693 ^ ((var_12 ? 410442566 : -369038257))))) ? ((((((4963956416141864321 ? 15989776611612986571 : 120))) ? (!var_12) : 1))) : ((((min(1, 21284))) ? (1620931290658828611 * 0) : 247))));
    #pragma endscop
}
