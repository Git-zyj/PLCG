/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    var_10 = ((((max(0, -1))) ? ((((!(arr_1 [i_2 + 1] [i_0]))))) : (max((max((arr_5 [i_0]), 18446744073709551615)), 14115144418414812763))));
                    var_11 -= (min(14115144418414812763, var_8));
                    arr_7 [i_1] [i_0] [i_0] [i_0] = ((min(3243, -397066054)));
                }
                var_12 = ((var_9 ? 18377659929265070690 : var_7));
                var_13 = (arr_6 [i_0] [12] [i_0]);
                var_14 = ((1 ? 15362561629831581100 : 2106411467393697377));
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
