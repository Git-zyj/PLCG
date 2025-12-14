/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((36220 ? var_11 : 36223));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((min((max(36220, 460563880)), ((min((!-1), ((!(arr_8 [i_0] [i_0] [i_0] [i_3 - 1])))))))))));
                                var_15 = (!460563875);
                                var_16 = ((+((((262143 | var_7) && (~var_10))))));
                                var_17 = var_5;
                            }
                        }
                    }
                    var_18 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
