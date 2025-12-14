/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(max(4294967295, 1073741823))));
    var_17 *= (((var_5 - var_10) && var_1));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = (((max(131071, 3221225472)) & 1073741798));
                                var_18 = (~19);
                                var_19 = (min(var_19, (((628380248 || (((-(arr_10 [i_0 + 1] [i_4 - 3] [i_3] [i_3] [i_0 + 4] [i_0 + 1])))))))));
                                var_20 = (min(var_20, (((min(var_3, (arr_9 [i_4 + 3] [i_2] [i_0 + 4] [i_0 + 3] [i_0])))))));
                            }
                        }
                    }
                    var_21 = 3504436256;
                }
            }
        }
    }
    var_22 = (max(var_22, (((var_0 ? 1073741834 : var_6)))));
    var_23 *= ((-((~((var_8 ? -33 : var_5))))));
    #pragma endscop
}
