/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_12 *= (arr_4 [i_0]);
                var_13 &= var_6;
                var_14 = ((~(arr_0 [i_1 - 1])));
            }
        }
    }
    var_15 = var_2;
    var_16 = var_4;
    var_17 = ((var_5 ? var_0 : 842334222634090549));
    var_18 = (min((~var_8), ((~(max(var_2, 842334222634090561))))));
    #pragma endscop
}
