/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (((~1) * 0));
                arr_4 [i_0] [i_1] = ((~(max((arr_2 [i_1 + 2] [i_1 - 1]), -5))));
                arr_5 [i_0] [i_1 + 3] = 0;
            }
        }
    }
    var_18 = (min(var_3, (((((-182425615417830014 ? var_11 : -18))) ? -73 : var_2))));
    #pragma endscop
}
