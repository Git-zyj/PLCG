/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_11 = min((arr_3 [i_2 + 1] [i_2 + 4]), 0);
                            var_12 = var_7;
                            var_13 = (min(var_13, (((((min(-var_2, 0))) ? (((!(arr_11 [i_2] [i_2] [i_2 + 2] [i_2 - 2])))) : ((var_7 >> (8769313746571223488 - 8769313746571223487))))))));
                        }
                    }
                }
                var_14 |= var_2;
                arr_12 [i_0] [i_1] = var_5;
            }
        }
    }
    var_15 = var_5;
    var_16 = (min(var_3, (max((~-4859513935778898020), var_7))));
    #pragma endscop
}
