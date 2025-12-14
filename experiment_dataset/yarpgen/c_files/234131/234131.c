/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3520830046;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = 939524096;
                arr_4 [i_0] [i_0] = var_8;
            }
        }
    }
    var_14 = ((max(939524096, 8)));
    var_15 = (22 + var_9);
    #pragma endscop
}
