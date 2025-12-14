/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((max((~var_11), var_7))) ? -var_13 : (max(((var_9 >> (41 - 29))), var_8)))))));
    var_15 = (min(495339426, 34));
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [22] &= (max((((arr_6 [21] [i_1] [i_2]) ? 12181 : var_4)), (4780 && 32760)));
                    var_17 = ((~(arr_6 [i_2] [i_1] [i_2])));
                    var_18 = (((arr_2 [i_0]) <= (min(2803078379, var_7))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [5] [i_2] [i_2] = ((((max((max((arr_11 [i_0] [i_2] [i_4]), 12181)), ((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]) > (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) || (((~(max(1491888917, 12183)))))));
                                arr_15 [i_4] = ((min(((var_4 & (arr_4 [i_4] [i_2])), ((max(var_7, 12201)))))));
                                var_19 = 110;
                                var_20 -= (((arr_11 [i_0] [i_1] [i_4]) - ((-1491888917 * (255 && 2744623494)))));
                                arr_16 [i_4] [i_3 - 2] [i_2] [22] [22] = ((var_8 ? ((min((arr_5 [i_4 + 1] [i_1] [i_3 - 1]), (arr_5 [i_4 + 1] [i_1] [i_3 + 1])))) : var_4));
                            }
                        }
                    }
                    arr_17 [i_0] = ((+(((-32767 - 1) ? (var_0 % var_13) : (arr_10 [i_0] [1] [15] [i_2] [i_2])))));
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
