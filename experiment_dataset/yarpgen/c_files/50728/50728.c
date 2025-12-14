/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 2083574610;
        var_12 *= (~8896832360346423150);
        var_13 = (max(var_13, (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = -9223372036854775796;
        var_14 = (max(((((~(arr_3 [i_1]))))), ((((max((arr_4 [i_1]), var_10))) ? (arr_4 [i_1]) : 14298))));
        arr_6 [i_1] = var_10;
        var_15 = (~157);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = var_2;
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_16 = ((~(arr_1 [i_2 + 1])));
                        var_17 &= (var_0 && var_9);
                        var_18 = var_4;
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6 - 1] = (((min((arr_0 [0]), var_3)) == (var_1 - var_4)));
        arr_25 [i_6 + 1] = ((((arr_4 [i_6]) ? (min(-107, var_2)) : var_1)));
        var_19 = (max(var_19, var_6));
    }
    var_20 = var_7;
    var_21 = (((((0 - 10335883841082441241) * -120)) == -var_10));
    #pragma endscop
}
