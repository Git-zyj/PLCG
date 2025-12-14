/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = var_4;
                                arr_14 [i_2] [1] [i_2] [1] [1] = (arr_5 [i_4] [i_4] [i_2]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [13] [i_5] [22] = (((arr_1 [1] [i_1]) ? (((min(var_17, (!var_15))))) : (255 | 3807347396)));
                            var_20 = arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
