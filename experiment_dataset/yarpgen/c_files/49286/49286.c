/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_16 -= var_4;
                            var_17 = 2257686966;

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_0] [4] [i_0] &= ((2185466396 ? 1975377456 : 1301726173));
                                arr_14 [i_0] [i_0] [i_4] = var_14;
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_0] = (arr_6 [10] [10] [i_0]);
                            }
                        }
                    }
                }
                var_18 |= ((1 >> ((((var_3 || (arr_1 [7])))))));
            }
        }
    }
    var_19 = ((((var_9 ? var_1 : (25145 + var_0)))) ? var_3 : 1);
    #pragma endscop
}
