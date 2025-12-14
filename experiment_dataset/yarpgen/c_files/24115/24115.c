/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_9 [11] [i_0] [i_2] = 0;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = 3203468282508604908;
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_13 & (-302299939 + 476312524776576081)));
                        var_18 = (max(var_18, ((((arr_8 [i_2] [i_2 - 1] [i_3]) | -995009831)))));
                    }
                    var_19 = min(((max((arr_7 [i_0]), var_1))), 1625047244092951162);
                }
                var_20 = (min(var_20, (((max(1, var_9))))));
                arr_14 [i_0] [i_0] [i_0] = ((var_15 ? (max((arr_7 [i_0]), (arr_4 [i_1 - 2] [i_1 - 3]))) : var_8));
                arr_15 [i_0] = ((max((((arr_2 [i_0] [i_0]) / (arr_12 [11] [i_1] [i_0] [i_0]))), (arr_10 [i_0] [i_1] [i_1 - 3] [i_1] [i_0] [i_0]))));
                arr_16 [1] &= 1;
            }
        }
    }
    var_21 = (max(var_21, var_8));
    var_22 = (max(var_22, (((var_8 % (var_4 < var_6))))));
    var_23 = (min(var_23, (((3129379729 < (-var_7 < -15131))))));
    #pragma endscop
}
