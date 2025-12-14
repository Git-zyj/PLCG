/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min((max(var_0, -1557768711)), ((((min(1557768707, 6))) ? var_0 : -155199476))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((max((~5723403620715175549), ((2 ? 8426445131416547732 : -5337434997127582639))))) ? (max(var_8, -1557768707)) : 10020298942293003870));
                    arr_9 [i_0] = ((max(-5337434997127582639, 5337434997127582639)));
                }
            }
        }
    }
    var_13 = (min(var_13, (((var_8 ? ((12531787440669219245 ? 5337434997127582648 : -32749)) : var_0)))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (!-21921);
        var_14 = ((var_10 ? -99 : var_6));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_15 = ((!((max(-8911114260189148698, 6)))));
        var_16 = (max(var_16, ((min((var_4 * 15), (min(var_8, 33)))))));
        arr_15 [i_4] = (!5337434997127582635);
    }
    var_17 = (max(1, (min(((max(3, -1))), (min(0, var_0))))));
    #pragma endscop
}
