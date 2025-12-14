/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_3 ? var_6 : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 -= (arr_5 [i_2 - 2] [i_2 - 2] [6] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [6] [i_1] [i_1] [i_3 + 3] [i_4] = ((arr_3 [i_3]) << (((((arr_3 [i_0]) ? var_14 : var_0)) - 1902142790)));
                                arr_12 [i_0] [i_1] [i_2 - 1] [i_0] [i_2 - 1] [i_2 - 1] [7] = (25554 > var_8);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((164 ? 2147483647 : 2147483647))) ? ((((var_15 != var_10) ? var_5 : var_7))) : var_13));
    #pragma endscop
}
