/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((~(var_18 | var_11)))) ? var_4 : ((var_6 << (78 - 59)))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_21 = (max(var_21, (((arr_0 [i_0]) ? ((((!(arr_1 [i_0] [14]))))) : (~0)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [7] [7] [i_2] [i_0] = (!239);
                        arr_11 [i_0] [i_1] [i_1] [i_1] = (!(!23));
                    }
                }
            }
        }
        var_22 = 2;
        var_23 = (min(var_23, (arr_9 [i_0 - 3])));
        var_24 = var_1;
    }
    var_25 = var_12;
    #pragma endscop
}
