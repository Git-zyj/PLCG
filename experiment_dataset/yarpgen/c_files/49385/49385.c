/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((((((arr_0 [i_1]) ? 1360 : (((arr_3 [i_0] [i_1] [i_0]) - (arr_3 [i_0] [i_1] [i_1])))))) ? (arr_3 [i_0] [i_1] [i_1]) : ((min(var_15, var_3)))));
                var_18 = (+-1791370972772147930);
            }
        }
    }
    var_19 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = 252;
                                var_21 = (((arr_12 [15] [10] [i_3] [i_5] [1] [1]) >> (399529133 - 399529121)));
                            }
                        }
                    }
                    arr_14 [i_4] = ((((((arr_12 [1] [6] [i_4 - 3] [1] [i_3 - 2] [3]) ? (arr_12 [i_2] [5] [i_4 - 3] [3] [i_3 + 2] [i_4 - 4]) : (arr_12 [9] [6] [i_4 - 2] [11] [i_3 + 2] [i_3])))) ? var_1 : (((3120326265 < (arr_12 [14] [14] [i_4 - 4] [19] [i_3 + 2] [i_3 - 3]))))));
                }
            }
        }
    }
    var_22 = var_6;
    var_23 = (min((((((max(-1360, var_8))) ? 1355 : 86))), -62053));
    #pragma endscop
}
