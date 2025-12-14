/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_19 & var_8) + (min(2012840363, 112))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (+-7994453027315220172);
                        arr_10 [i_0] [3] [i_1] [i_0] [i_0] [i_3] = (((((0 || (arr_0 [i_1] [i_2 - 1]))))));
                    }
                }
            }
        }
        var_22 = (16760832 + 1);
        var_23 |= (((arr_9 [i_0] [i_0] [i_0] [i_0]) != (var_3 < var_5)));
        var_24 = (var_1 / var_9);
        arr_11 [i_0 - 1] = (-(((var_19 + (arr_7 [2] [i_0])))));
    }
    #pragma endscop
}
