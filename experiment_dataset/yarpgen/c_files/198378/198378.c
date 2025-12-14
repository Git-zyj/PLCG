/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!31362);
    var_15 = (min(((((min(31357, -31362))) ? ((-31351 ? -31374 : 31382)) : ((min(31374, 31362))))), (~-31366)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] = 31382;
                        arr_12 [i_0] [i_1 - 1] [i_0] [i_0] = ((-((31382 ? 31363 : -31375))));
                        arr_13 [i_0] [i_0] = (((-31365 ? -31381 : -31375)));
                    }
                }
            }
        }
        arr_14 [i_0] = -31378;
        arr_15 [i_0] = -31341;
        arr_16 [i_0] [i_0] = ((!(!31362)));
    }
    var_16 = ((31377 ? var_7 : var_10));
    #pragma endscop
}
