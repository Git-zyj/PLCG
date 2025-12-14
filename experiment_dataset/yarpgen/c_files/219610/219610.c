/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~74);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((((0 - 38495) + 2147483647)) << ((((((4685 ? 6812364647622715298 : (arr_0 [i_0] [9]))))) - 10146))));
                arr_5 [i_0] [i_0 - 1] = (min(((~(~var_1))), (~62141)));
            }
        }
    }
    var_14 = (max(var_14, ((min((min((var_10 / 72), var_0)), 1073741823)))));
    #pragma endscop
}
