/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_12, (12587 | -1408947114)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0 + 2] [i_0] [i_1] = (min(143, (((var_4 && (~var_11))))));
                var_14 = (min(var_14, var_11));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] [i_3 - 1] = ((min(var_10, 470077931)));
                arr_13 [12] [i_3] = (14311946205677225269 == -69);
                arr_14 [i_2] [i_3] [i_3 - 1] = ((((((min(100, 118))))) ? (((!(((var_9 ? -3324855912432533641 : var_4)))))) : var_12));
            }
        }
    }
    var_15 = ((var_9 ? ((102 ? -8618 : -95)) : 614050500));
    #pragma endscop
}
