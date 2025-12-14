/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_1 * var_6);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_12 = ((((var_1 || (arr_2 [i_0]))) ? (!var_8) : var_5));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_1 - 2] [i_3] [i_3]) ? (arr_6 [i_1 + 2]) : (arr_6 [i_1 - 1])));
                    }
                }
            }
        }
        var_13 = ((-1699754822 ? var_5 : (arr_4 [i_0])));
    }
    var_14 = (min((((var_3 & -2988) | ((min(var_8, var_4))))), var_5));
    #pragma endscop
}
