/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((-(max((var_3 / -1319284473022582079), var_9))));
    var_13 = (((var_3 == var_10) || var_2));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (arr_2 [i_0] [i_1 + 1]);
                var_15 = (~(arr_2 [i_0 - 1] [i_0 - 2]));
            }
        }
    }
    var_16 = (min(var_16, ((((((5417584637971410191 ? 15327078451391499289 : -64))) ? (1 * var_3) : (-5417584637971410197 / 606462563128795422))))));
    #pragma endscop
}
