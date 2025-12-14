/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((!((max(var_6, (~var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (2552391814 && ((min(0, ((143833713099145216 ? 262143 : 0))))));
                    var_21 = ((18 ? 16383 : 1));
                    var_22 ^= (arr_3 [i_0] [10] [4]);
                    var_23 = (max(var_23, 16));
                }
            }
        }
    }
    var_24 = (((max(var_9, 3)) > (min(var_1, (max(16, 14568))))));
    var_25 = var_15;
    #pragma endscop
}
