/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (((((max(16, 115)))) + var_9));
                var_21 ^= (max((((!(arr_2 [i_0] [i_1 + 2] [i_1 + 1])))), (arr_2 [i_0] [5] [i_1 + 3])));
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
