/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, 14805836435328835325));
                                var_18 = (min(var_18, 0));
                                arr_12 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = 1;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_19 = 17775753331816142714;
                        var_20 = (max(var_20, -var_4));
                    }
                }
            }
        }
        arr_15 [i_0] |= var_12;
    }
    var_21 = (max(var_21, 17775753331816142721));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            {
                arr_22 [i_6] [i_6] [i_6] = var_7;
                var_22 = (~181);
                arr_23 [i_6] [i_6] &= ((~((~(!var_0)))));
                arr_24 [i_6] &= var_8;
            }
        }
    }
    #pragma endscop
}
