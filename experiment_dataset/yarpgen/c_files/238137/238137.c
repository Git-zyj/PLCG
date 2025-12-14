/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] = var_4;
                    var_14 = var_13;
                    var_15 = (max(var_15, (arr_3 [i_0] [i_1] [i_0])));
                }
            }
        }
    }
    var_16 = ((!((((min(var_7, var_12)) << 1)))));
    #pragma endscop
}
