/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = (!(((~(min(-4868905532408376765, -13568))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_19 -= (!var_1);
                        var_20 = (min(var_20, 26299));
                    }
                }
            }
        }
        var_21 &= (((!2112186176) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((-4868905532408376780 ? ((((arr_7 [11] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [0] [i_0]) : var_0))) : ((var_6 ? (arr_3 [i_0] [i_0]) : 4868905532408376765))))));
        var_22 |= (arr_5 [i_0] [i_0]);
    }
    var_23 |= (((((var_14 >= var_9) ? var_10 : 13072)) != var_7));
    #pragma endscop
}
