/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 += 1;
                    var_18 = var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] = (arr_7 [i_3] [i_1] [i_0 + 1]);
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_2] = ((arr_4 [i_2 + 1]) | (min(-3543620511586932628, (arr_11 [i_0 + 1] [0] [i_2 + 1] [i_1 + 1] [i_4] [i_2]))));
                                var_19 *= var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, var_16));
    #pragma endscop
}
