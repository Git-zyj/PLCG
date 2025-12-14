/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (~var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = 481835045;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_2] [11] [6] = 0;
                                var_18 = ((~(min(18446744073709551600, 481835045))));
                                var_19 = (max(var_19, var_14));
                                var_20 = (min(var_20, (((((min((max(-5713, 1)), (arr_8 [i_4] [i_4] [i_3] [3] [i_0] [i_0])))) ? var_1 : ((min(var_16, (min((arr_3 [i_1] [i_4]), 10264))))))))));
                                arr_13 [i_1] [i_1] = (arr_9 [i_0] [i_1] [i_0]);
                            }
                        }
                    }
                    var_21 = (arr_5 [i_0] [i_1] [i_2] [6]);
                }
            }
        }
    }
    var_22 = (min(var_6, var_8));
    #pragma endscop
}
