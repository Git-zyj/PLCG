/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    var_15 = var_9;
    var_16 = (((((var_11 ? var_9 : var_2))) ? (((var_7 ? var_7 : var_2))) : 18446744073709551610));
    var_17 = 18446744073709551610;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 -= (((((6 ? 4294967276 : 5))) ? 15048 : -15027));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_19 |= 18446744073709551602;
            arr_6 [i_1] [i_1] = (((((18446744073709551610 ? -12630 : 4035731676))) ? -24222 : 15050));
            var_20 -= 24222;
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_2] [i_2] = 15130;
            var_21 = ((15122 ? -24240 : 24237));
            arr_11 [8] [i_0] |= 26373;
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            arr_14 [i_0] [i_3] [i_0] = (((((6 ? 26364 : 0))) ? -26374 : -15060));
            var_22 = ((259235603 ? -1 : 0));
        }
        var_23 = -15131;
    }
    #pragma endscop
}
