/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [1] [i_1] = var_9;
                    arr_11 [8] [i_1] [i_0] = (max((~var_0), ((-13847 ? 8727325393511471495 : 1))));
                    var_10 = ((!((min((arr_0 [3]), (arr_2 [11] [i_0 + 1]))))));
                }
            }
        }
    }
    var_11 = ((var_3 ? (((-var_4 && (var_0 == var_2)))) : var_9));
    #pragma endscop
}
