/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_13 -= 4229723997923082078;
                arr_5 [i_0] [i_0] = (((((~((-1993783544 ? (arr_2 [i_0] [i_1] [i_1]) : -3859))))) != -14217020075786469537));
                var_14 = (min((((7395 | 193) | (min(1440010444, 0)))), ((min(-1876658417, (arr_2 [i_0 - 1] [i_0 + 3] [i_0 + 3]))))));
            }
        }
    }
    #pragma endscop
}
