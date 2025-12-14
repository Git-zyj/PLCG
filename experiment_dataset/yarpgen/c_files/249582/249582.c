/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = 1;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_21 = ((var_16 ? var_14 : 3777237908745192982));
                    arr_10 [i_0] [i_0] [i_0] [i_0] |= (max(((min(var_13, var_13))), 1));
                    arr_11 [i_0] [i_0] [2] [i_0] = 1;
                    var_22 = (max(var_22, var_17));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_17 [i_3] [i_0] [i_3] [5] = var_19;
                            var_23 += ((~(((var_2 + 1685346213604422986) ? ((var_8 ? 58 : var_1)) : 1))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_24 ^= (3777237908745192960 && 3777237908745192966);
                            arr_25 [i_0] [i_1] [9] = (~58);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
