/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 26870;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((max(var_5, var_13))) + 285438955));
                    arr_9 [i_2 + 3] [8] [8] = (((max((arr_5 [i_2 - 1] [i_2 + 3] [i_2 - 2]), (arr_1 [i_2 + 3]))) * var_6));

                    for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [1] = (min((var_3 * 65535), (max(var_2, (arr_4 [i_2 - 2] [i_3] [i_3 + 1])))));
                        arr_13 [i_0] [2] [2] [i_2 + 4] [i_3] = (arr_4 [i_3] [i_1] [i_0]);
                        var_15 = (min(var_15, (arr_10 [i_3] [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 2])));
                    }
                    for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_16 = (((arr_7 [i_0] [11] [i_2] [9]) ? -85 : ((min((!3704), (min(-26870, var_1)))))));
                        var_17 = ((((~(arr_10 [i_4 - 3] [1] [1] [i_4] [i_4]))) + (((((var_4 ? -26845 : 2647570308)) < 26870)))));
                        var_18 = (min(var_18, var_5));
                    }
                    for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [i_1] [1] [i_1] = (arr_11 [i_1] [i_5] [i_2 + 3] [i_5] [1]);
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((24404 >= (((arr_4 [12] [i_5 + 1] [i_5 - 2]) ? 26870 : (arr_4 [5] [i_5 - 1] [i_5])))));
                        arr_20 [i_1] |= (((((arr_16 [i_2 + 4] [i_2 + 4] [0]) || (arr_16 [i_0] [i_2 - 1] [i_5]))) || var_12));
                        var_19 = (((((14069870011772327486 * (arr_17 [i_0] [i_0] [0]))))) ? (min(-1, (min(134201344, var_1)))) : (((((arr_4 [i_5] [i_5 - 1] [i_2 + 1]) >= var_9)))));
                        arr_21 [i_0] [i_0] [i_2] = (3637794650447691395 ? ((-(min(var_7, 332640093)))) : (arr_16 [i_2 + 3] [i_5 - 2] [i_2 - 2]));
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, -26845));
    #pragma endscop
}
