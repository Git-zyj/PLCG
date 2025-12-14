/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 -= ((~(arr_4 [21] [i_1] [i_1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 |= ((-(arr_6 [i_0])));
                    var_14 = (max(var_14, (arr_5 [i_0] [2] [i_2] [2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = ((-(arr_9 [i_0] [18] [18] [i_3] [9] [i_4])));
                                var_16 = ((!(arr_6 [i_3])));
                            }
                        }
                    }
                    var_17 = (arr_4 [i_0] [i_1] [i_2]);
                    var_18 = (arr_7 [i_0] [i_1] [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_19 ^= ((~(arr_3 [i_0] [i_1] [i_5])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((~(arr_7 [i_7 + 1] [i_1] [i_5] [i_1]))))));
                                var_21 ^= (--117);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_10;
    var_23 = var_8;
    var_24 = (~var_10);
    #pragma endscop
}
