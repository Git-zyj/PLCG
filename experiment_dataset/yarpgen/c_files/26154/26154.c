/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (arr_0 [4] [i_0]);
                    var_18 = (max(((var_16 ? ((((var_2 + 2147483647) << (var_1 - 21105)))) : var_9)), var_7));
                }
            }
        }
    }
    var_19 = -var_7;
    #pragma endscop
}
