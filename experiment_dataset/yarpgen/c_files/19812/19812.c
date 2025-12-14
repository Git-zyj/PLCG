/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_14 = -94;
                    var_15 = ((!(!2245306196578269189)));
                }
            }
        }
    }
    var_16 = var_0;

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_17 = (var_0 - -1);
        var_18 = 481036337152;
        var_19 = (((min((((var_1 ? 1771618995 : 93))), 236)) % var_9));
    }
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        var_20 = (!var_8);
        var_21 = var_10;
        var_22 = var_6;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_23 = var_0;
            var_24 = var_13;
        }
    }
    #pragma endscop
}
