/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~((var_15 ? var_13 : -10907)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((((~(((arr_7 [i_0] [i_0] [i_0]) + (arr_4 [i_0] [i_0] [i_0]))))) * (max((((!(arr_5 [i_0] [i_1])))), var_1)))))));
                    var_18 = ((((arr_3 [i_1 - 1]) << (((arr_3 [i_1 - 1]) - 150)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = -10908;
                                arr_13 [i_4] [i_3] [i_2] [i_0] = (max((((arr_2 [i_0]) ? var_10 : (max((arr_6 [i_4] [i_0] [1] [i_0]), (arr_0 [i_0]))))), -1));
                                var_20 = ((64 && ((max((var_1 - var_2), (arr_11 [i_0] [7] [7] [i_3] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_12;
    var_22 = (max(var_5, ((min((var_9 < var_14), (!var_8))))));
    #pragma endscop
}
