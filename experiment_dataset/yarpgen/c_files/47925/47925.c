/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((-(95 ^ 3364090118410600519))))));
    var_20 = 9478063454021529970;
    var_21 = (~-316165653);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (((!(((122 * (!-64)))))))));
                arr_4 [i_0] [i_0] = (((-6294089527628000002 % 16495246372116827396) != -1));
                var_23 = (+-8564648072230301272);
                var_24 = ((!(((1 >> (-902669946 + 902669953))))));
            }
        }
    }
    #pragma endscop
}
