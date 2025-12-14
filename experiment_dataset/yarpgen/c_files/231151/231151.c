/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_7, (((((var_5 ? var_17 : 4161536))) ? (!var_16) : ((var_8 ? var_11 : var_0))))));
    var_21 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 = (arr_3 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 = (arr_12 [i_0] [i_1] [i_2] [i_3] [i_1]);
                                var_24 = var_12;
                            }
                        }
                    }
                    var_25 = (min(-1, -29935));
                }
            }
        }
    }
    #pragma endscop
}
