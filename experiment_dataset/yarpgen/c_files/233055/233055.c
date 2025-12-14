/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = var_18;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = ((1 ? 1 : 12));
                            var_22 = (max((max((arr_8 [i_0] [i_1] [i_3]), 1)), ((-((min(251, 85)))))));
                        }
                    }
                }
                var_23 = (max(var_23, (min((((arr_9 [i_0] [i_1] [i_1] [i_1]) & var_15)), ((((1194821930 <= 381093636) | ((var_6 ? (arr_8 [i_0] [i_0] [i_0]) : 27590)))))))));
            }
        }
    }
    var_24 &= -92;
    #pragma endscop
}
