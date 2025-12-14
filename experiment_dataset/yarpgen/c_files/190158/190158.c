/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 = (((((((arr_8 [i_1] [i_3] [i_2] [i_1] [i_0]) ? var_1 : var_0)))) ? (((arr_12 [7] [i_4] [i_4]) ? var_0 : (max(0, var_2)))) : (((~(arr_4 [i_1 + 2] [i_1 + 2] [i_4 - 4]))))));
                                arr_14 [i_4] [i_0] [i_4] [i_0] [i_2] = var_6;
                                var_14 = (max(-1, (((-1 | 0) ? (~var_9) : (arr_1 [i_0])))));
                            }
                        }
                    }
                    var_15 = (((max(1073741823, 10889404166771224814)) - var_4));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 = (((arr_5 [i_5] [i_5] [i_5]) != (max((max(var_3, var_5)), var_8))));
                                var_17 = (arr_15 [i_1 + 1] [i_1 - 1] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((-((2480100906 & (-9223372036854775807 - 1)))));
    #pragma endscop
}
