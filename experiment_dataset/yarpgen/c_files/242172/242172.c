/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 35183298347008;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (--387717569);
                    var_13 += ((var_1 ? (((((387717561 ? 103 : 1))) ? (((-387717574 ? 2341 : 83))) : ((248 ? -8204521087587027623 : 35183298347008)))) : 4146194979459733612));
                }
            }
        }
    }
    #pragma endscop
}
