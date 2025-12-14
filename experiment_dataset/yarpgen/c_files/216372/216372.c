/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (~var_6);
    var_12 = (0 * var_1);
    var_13 -= (max((min((min(0, var_1)), var_9)), var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] = var_3;
                    arr_11 [i_0] [i_0] [1] [i_0] = (arr_4 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
