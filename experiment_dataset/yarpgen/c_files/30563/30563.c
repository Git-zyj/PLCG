/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_11 = var_7;
        var_12 = ((((max(var_4, (!var_10)))) ? ((((max((arr_2 [4] [13]), 100))) ? var_4 : var_4)) : var_3));
        var_13 = (~(arr_2 [4] [i_0 + 1]));
        var_14 = ((96 - (arr_0 [i_0 + 1] [i_0 - 1])));
        var_15 = var_7;
    }
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_17 [3] [i_2] [6] [i_4 - 1] [i_2] = (min((arr_3 [0]), ((((max(var_0, var_1))) << (((~var_10) + 969098219))))));
                                var_17 = ((((((arr_10 [5] [i_4 + 2] [i_4 + 2] [15] [i_4 + 3]) * var_4))) ? ((var_3 * (arr_10 [i_4 + 2] [i_4 - 2] [i_4 + 2] [3] [i_4 + 2]))) : ((var_3 ? var_4 : (arr_10 [1] [i_4 + 1] [i_4 - 2] [9] [i_4 + 3])))));
                            }
                        }
                    }
                }
                arr_18 [i_2] = var_0;
                var_18 = (max(var_18, ((max(((max(var_0, var_9))), (((arr_16 [14] [i_1] [i_2] [i_2] [14] [6]) ? var_9 : var_2)))))));
                var_19 = (max((((arr_7 [1] [i_2] [i_2]) - (var_6 + var_0))), (var_8 * var_2)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_7] = ((min(var_3, (arr_21 [i_7 - 1] [i_7 - 1]))));
                    var_20 = (max(var_20, (((((max(((min(-27, (arr_8 [i_6] [i_7 - 1] [i_8])))), (max((arr_20 [i_6]), -10))))) && ((min(var_7, (arr_26 [i_7 + 1] [i_8] [i_8] [5])))))))));
                }
            }
        }
    }
    #pragma endscop
}
