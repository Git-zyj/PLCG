/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = -1732802915;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (var_7 ? (arr_4 [i_3] [i_2] [i_0]) : ((min((min(14, var_4)), -10049))));
                                var_20 = var_14;
                                var_21 = -1732802915;
                                var_22 = ((7184643666727938667 ? 11791490007313234542 : -7184643666727938668));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(3584542188, 710425119));
    #pragma endscop
}
