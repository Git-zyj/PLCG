/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 += var_2;
                        var_16 = 1;
                        var_17 -= (((arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]) < var_1));
                    }
                }
            }
            var_18 = (((((var_3 ? 1 : 58))) ? ((1 ? var_5 : var_2)) : var_8));
            arr_12 [i_0] [i_0] = ((!(!var_10)));
        }
        arr_13 [i_0] = var_13;
        var_19 = var_11;
        var_20 = (var_9 < var_3);
    }
    #pragma endscop
}
