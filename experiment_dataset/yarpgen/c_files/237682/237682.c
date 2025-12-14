/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (!(((((min(var_1, var_10))) ? ((min(68, 74))) : ((var_10 ? var_3 : var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 |= (arr_1 [i_1 - 1] [i_3]);
                                arr_10 [i_0] [i_1 - 1] [i_2] [i_2] [i_0] [i_4] = (arr_4 [i_0]);
                            }
                        }
                    }
                    arr_11 [i_0] = (max((arr_6 [11] [6] [i_2] [i_2 - 1] [i_2]), (max(((max((arr_8 [i_0 - 1]), (arr_1 [i_0] [i_0])))), (arr_0 [i_1])))));
                }
            }
        }
    }
    var_15 = ((!((min(var_6, ((var_5 ? var_6 : var_8)))))));
    #pragma endscop
}
