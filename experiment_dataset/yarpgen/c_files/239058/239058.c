/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(((var_15 ? ((min(1748060422, var_0))) : ((var_12 ? -6408430226685073813 : -1522653125)))), (~1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [1] [i_2] [i_3] = -1804164565120263942;
                        arr_13 [12] [i_1] [i_0] [i_3] [i_0] [1] = ((-(arr_2 [i_1 - 2])));
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = -1879724598;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_22 [14] [8] [i_0] = 7901605698305159739;
                    arr_23 [i_0] = var_10;
                }
            }
        }
    }
    var_20 = ((var_17 ? ((((822583220 && ((max(var_18, var_6))))))) : var_5));
    var_21 = var_14;
    #pragma endscop
}
