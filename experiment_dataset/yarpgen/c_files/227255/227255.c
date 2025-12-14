/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_17;
    var_21 = (((max(var_19, var_11))));
    var_22 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_23 = (max(var_23, (arr_5 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_24 = (max(var_24, -20));
                            var_25 = var_0;
                            var_26 = (min(var_26, (arr_13 [i_3] [10] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2])));
                            arr_14 [i_0] [i_2] [i_1] &= var_1;
                            arr_15 [i_2] = (arr_13 [i_2] [3] [i_2] [i_2 + 2] [i_2] [i_3]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            {
                var_27 += (arr_18 [i_5 - 1]);
                arr_22 [i_5] = var_8;
                var_28 = (min((max((((arr_20 [10] [i_5] [i_5]) ? var_12 : (arr_20 [i_4] [i_4] [i_4]))), ((((arr_18 [i_4]) && (arr_20 [i_5 - 1] [i_4] [i_4])))))), (arr_21 [i_4])));
                var_29 += ((+(max((arr_17 [i_5 + 1] [i_5 + 2]), (arr_17 [i_5 + 2] [i_5 - 1])))));
            }
        }
    }
    #pragma endscop
}
