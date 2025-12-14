/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_11;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 + 2] [i_0] [i_0 - 2] [i_0] [i_2] [9] = ((!((((arr_5 [i_3] [i_2] [i_3 + 4] [i_3 - 2]) ? var_2 : var_4)))));
                                var_13 = var_9;
                                var_14 += (!var_0);
                                arr_12 [i_2] = (~var_2);
                            }
                        }
                    }
                    var_15 += ((((((!((min(4026531840, 464822081136854228))))))) > ((((max((arr_9 [6] [i_1] [i_1] [i_1] [6]), (arr_5 [i_0 - 1] [6] [i_1] [i_2])))) ? ((min(var_5, var_10))) : (max(86, var_0))))));
                }
            }
        }
    }
    var_16 = (max((~4026531819), var_7));
    #pragma endscop
}
