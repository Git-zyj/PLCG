/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_5);
    var_14 = (min(((~((var_3 ? var_4 : var_11)))), var_1));
    var_15 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_16 = (arr_3 [i_1] [i_0]);
            var_17 = (arr_2 [i_0] [i_1] [i_1]);
            var_18 -= (((var_2 ? -1 : var_3)));
            arr_6 [i_0] [i_0] [i_0] = 1690943038;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_13 [12] [6] [i_2] [20] [i_1] &= (((arr_9 [i_3] [6] [21] [7]) & (arr_10 [i_2] [i_3 + 1])));

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            arr_16 [i_4] [i_0] [i_2] [i_0] [1] = -var_12;
                            var_19 = var_12;
                            var_20 *= ((-1690943047 ? 127 : (arr_4 [i_4 + 4] [i_4])));
                        }
                    }
                }
            }
        }
        arr_17 [i_0] = (~-3);
    }
    #pragma endscop
}
