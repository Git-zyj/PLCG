/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = var_12;
                                arr_13 [13] [i_3] [12] [12] [i_4] = (((!var_11) * (arr_7 [i_3 + 1] [i_4 - 4] [i_4 - 4] [i_4 - 4] [i_4] [i_4 - 1])));
                                var_15 = (!7);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_16 = (var_8 * 229);
                                var_17 = (((arr_19 [i_0] [i_1] [i_5] [i_6] [i_6]) ? (247 / 128) : var_9));
                                var_18 = ((((159 ? (arr_15 [i_0] [i_0] [i_0] [4]) : 255)) - 139));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1] = ((-(arr_5 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_19 = (max(var_19, var_12));
    #pragma endscop
}
