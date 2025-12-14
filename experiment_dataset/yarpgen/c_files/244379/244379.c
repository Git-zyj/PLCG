/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((var_6 ^ (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = (~-705246130065561372);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [16] [16] = (+-0);
        var_15 = ((-(arr_4 [i_1] [i_1])));
        arr_7 [i_1] [i_1] &= 124;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = ((((!(-127 - 1)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        var_16 = (~var_0);
                        arr_19 [i_2] [i_3] [i_4] [i_5] = ((-6019020327242322741 ? 0 : 60589));
                    }
                }
            }
        }
        arr_20 [i_2] [i_2] = (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]);
    }
    var_17 = var_8;
    var_18 |= (max(var_6, (min(((min(var_8, var_12))), (-120 + 6019020327242322726)))));
    #pragma endscop
}
