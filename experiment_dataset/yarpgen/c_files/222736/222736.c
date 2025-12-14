/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-9 ? (min(var_3, var_6)) : ((min(var_1, ((var_7 ? 24821 : 4212857103600686580)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = -39139;
                                var_15 = (min(var_15, (((((((arr_11 [i_0] [i_1] [i_2] [i_0] [i_1]) << ((((58154 ? -3480665911559557560 : var_4)) + 3480665911559557569))))) + 3789221374)))));
                                arr_12 [i_0] [i_0] [i_2 + 1] [i_0] [i_4] = ((~((max((arr_2 [i_2 - 1] [i_2] [i_2 + 2]), (arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                            }
                        }
                    }
                    var_16 = 114;
                }
            }
        }
    }
    #pragma endscop
}
