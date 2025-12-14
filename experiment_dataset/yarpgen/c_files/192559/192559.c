/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (14862188631796168871 == 3584555441913382730);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [6] [10] [i_0] = min((((~(~var_10)))), (min((((101 ? var_6 : var_0))), 3584555441913382721)));
                arr_7 [i_1 + 1] [7] [i_0] = 523309091;
            }
        }
    }
    #pragma endscop
}
