/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_0] = (arr_0 [i_1]);
                arr_5 [i_0] [i_1 - 1] = (min(((-1180924658 ? (arr_0 [i_0 - 2]) : var_12)), (((((1180924658 << (34 - 34)))) ? ((var_3 ? var_9 : var_3)) : var_12))));
            }
        }
    }
    var_17 = ((var_6 ? 1 : var_11));
    #pragma endscop
}
