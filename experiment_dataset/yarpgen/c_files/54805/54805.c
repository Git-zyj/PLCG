/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = ((!((((var_11 && var_1) ? ((min(var_5, var_13))) : (var_1 && var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (~(-642574643 & 2456737648));
                    var_18 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 ^= (2456737648 >= 1838229647);
                                arr_12 [i_0] [i_1] [i_0] [i_1] [i_2] = ((((((!((min(var_3, var_11))))))) % ((min(var_14, var_7)))));
                                arr_13 [i_0] [1] [6] [i_2] [i_0] = var_4;
                            }
                        }
                    }
                    var_20 = ((+((((((arr_4 [i_1]) - var_14))) ? -var_5 : (((arr_0 [i_1]) + var_2))))));
                }
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
