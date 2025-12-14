/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min(var_10, 14358));
    var_13 = max(14346, 1547069001);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_10));
                var_15 = (min(((-(max((arr_2 [i_0] [i_0]), var_2)))), 2747898299));
                arr_7 [i_0] [i_0] = (var_6 <= 1110981000);
            }
        }
    }
    var_16 = (max(var_16, var_0));
    #pragma endscop
}
