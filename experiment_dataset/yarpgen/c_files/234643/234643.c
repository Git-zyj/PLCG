/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [13] [i_1] [i_0] = (((((var_7 ? (arr_1 [i_1 + 3]) : (((1 ? 1 : -8)))))) ? 98 : var_3));
                var_13 -= (max(-19167, 88));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_14 += ((((((arr_4 [i_2]) ? var_4 : 1))) ? ((((arr_4 [i_2]) && 0))) : (1 || 1)));
                var_15 |= var_9;
            }
        }
    }
    var_16 = ((~(min(1, -2791300567117080662))));
    #pragma endscop
}
