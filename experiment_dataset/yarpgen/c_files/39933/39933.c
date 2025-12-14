/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = -4790478564430361340;
                    var_13 = (((arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) << (var_3 - 23277)));
                }
            }
        }
    }
    var_14 &= ((((((((60 ? 1928258741 : 656334154))) ? (max(var_2, var_7)) : var_11))) ? var_11 : var_5));
    #pragma endscop
}
