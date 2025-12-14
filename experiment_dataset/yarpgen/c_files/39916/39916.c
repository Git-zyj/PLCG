/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max(8871, (min(190, (arr_1 [i_4]))))))));
                                var_16 = max((max(8852, var_4)), ((max((arr_1 [i_2]), 253))));
                                var_17 = ((-(min(6098472, 202))));
                                var_18 = (max((((-(arr_4 [i_3])))), (min((arr_12 [i_0] [i_3] [i_3] [i_0] [i_4]), var_2))));
                            }
                        }
                    }
                }
                arr_16 [9] [i_0] [i_0] = (max(((~(arr_12 [20] [i_1] [2] [i_1] [i_0]))), (~var_1)));
                var_19 = (min(((min(4288868823, -14))), ((~(~var_5)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_20 = (max((~var_5), ((max((arr_13 [i_1] [i_6] [i_6 - 1] [i_6 + 3]), 82)))));
                            var_21 += (~202);
                            var_22 &= (max(((arr_15 [i_5] [i_5] [i_5] [i_5] [i_1] [i_0]), (max(var_7, (arr_12 [i_0] [i_5] [i_1] [i_5] [i_6]))))));
                            arr_22 [i_6 + 2] [i_5] [i_0] [i_0] = (max((min(var_5, var_0)), (arr_20 [i_6] [21] [i_1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
