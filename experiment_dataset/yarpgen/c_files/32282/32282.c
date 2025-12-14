/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (max(124, 65535))));
                var_15 = (min(((min(1, (min(22, 347320029))))), (arr_2 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_9 [i_3] = (min(var_2, var_12));
                var_16 = var_2;
            }
        }
    }
    #pragma endscop
}
