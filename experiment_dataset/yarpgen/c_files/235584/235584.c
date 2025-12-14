/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 17470446935613025574;
    var_20 = var_1;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = -70;
        arr_4 [i_0] [i_0] = ((max(-1314853192, 8185)));
        arr_5 [i_0] = -16353;
        var_21 = var_18;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = var_4;
        arr_9 [i_1] [i_1] = ((((max(16353, var_18))) ? (16332 % 16353) : ((127 ? 1 : -8053))));
        arr_10 [2] = (!-3236208057525862886);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = var_9;
        arr_15 [i_2] = (min(3744898660521472683, ((((16353 ? 18446744073709551614 : 16320))))));
        var_23 = (min(var_23, ((((!var_10) ? ((~((min(var_12, var_5))))) : var_18)))));
        var_24 = 3449713767381965414;
        arr_16 [i_2] = (max((max(15210536016183688729, 56)), (~58)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_20 [i_3] [i_3] = 1008;
        var_25 = ((2534857937 ? 2434412909 : 0));
        arr_21 [i_3] [3] = (((~var_7) ? (~30720) : 36));
    }
    var_26 = (max(23, var_5));
    #pragma endscop
}
