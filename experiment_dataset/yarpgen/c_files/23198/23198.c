/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-1272604438 < (((-2147483647 - 1) ? ((0 ? 249 : 7)) : 52257))));
    var_15 = (((-2147483647 - 1) ? ((228832392 << (var_7 - 4210318051))) : var_0));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, ((13279 * (((arr_1 [i_0] [i_0]) ? var_2 : (arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (((arr_4 [i_0] [i_1] [i_2 - 1] [i_0]) << 8));
                    arr_6 [i_0] [i_1] [i_0] = ((~((255 << (-2 + 22)))));
                }
            }
        }
    }
    #pragma endscop
}
