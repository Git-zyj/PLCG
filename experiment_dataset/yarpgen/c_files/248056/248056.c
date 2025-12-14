/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 *= max((var_9 && 12916512247722227463), (((!(arr_2 [i_0 + 1])))));
                var_15 = (((arr_1 [i_0]) + (((((12916512247722227450 ? var_1 : 12916512247722227441))) ? (min(12916512247722227463, 5530231825987324175)) : (arr_4 [i_0 + 1])))));
            }
        }
    }
    var_16 |= var_3;
    #pragma endscop
}
