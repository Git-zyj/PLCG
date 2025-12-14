/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 581123203;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [11] = (arr_0 [i_0]);
        var_21 = (arr_1 [i_0] [16]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (((~-32757) <= (arr_1 [3] [10])));
                    arr_9 [18] [11] [1] = ((-3738815559 ? (255 + 829115752) : 5673));
                }
            }
        }
        var_23 = ((!(arr_5 [1] [18] [i_0])));
    }
    var_24 = (((((-5673 ? var_4 : var_14))) << ((((-1132183901 ? 1132183924 : 1132183939)) - 1132183913))));
    var_25 = var_3;
    #pragma endscop
}
