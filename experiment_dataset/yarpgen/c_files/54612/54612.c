/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] = ((((~(arr_6 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]))) & (~-11990)));
                            arr_9 [i_0] [2] [i_0] [i_0] |= (~(max((~-120), (min(0, 1812429347)))));
                            var_19 = var_14;
                            var_20 = (arr_5 [i_1] [i_2] [i_3]);
                            var_21 = (max(var_21, 0));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_22 |= 1206;
                    var_23 = (min(var_23, ((((11865 / var_10) / (arr_7 [i_1] [i_1] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_24 = (max(var_24, ((var_16 - (var_11 >> 0)))));
    #pragma endscop
}
