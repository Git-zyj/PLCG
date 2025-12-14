/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (max(192, 1));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (0 | 7783);
                    var_21 = var_11;
                    var_22 -= ((((~(arr_0 [1])))));
                    var_23 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
