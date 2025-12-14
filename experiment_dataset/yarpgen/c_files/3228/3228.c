/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((var_3 ? var_2 : (arr_5 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [10] [i_2] [i_3] = (max((!var_13), var_9));
                            arr_13 [i_0] [i_1] [i_0] [i_0] = var_3;
                            var_20 = ((!(arr_6 [i_0] [i_2] [3])));
                        }
                    }
                }
                var_21 = (max(var_21, var_15));
                arr_14 [i_0] [i_1] = (arr_4 [i_1]);
            }
        }
    }
    var_22 = (max(var_22, var_4));
    var_23 = (max(var_11, ((min((!var_15), (!var_4))))));
    #pragma endscop
}
