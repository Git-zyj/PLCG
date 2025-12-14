/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_15 = min(((((arr_7 [i_0] [i_1] [i_2 - 2]) & (((arr_4 [i_0]) ? var_7 : 1631464613))))), (max(var_3, ((((arr_4 [i_2]) ? var_1 : 120))))));
                        var_16 = (((max(65513, var_9)) >> (((!(-16 + 7))))));
                        var_17 = ((2 ? 30688 : -5));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_18 = (((var_4 - var_9) ? (~-16) : 165));
                        var_19 |= ((8 ? -142933506 : 16995));
                        var_20 |= (((arr_11 [i_2 - 4] [i_2] [i_2] [i_2 - 2]) >= (((~34175) & (max((arr_11 [i_0] [i_0] [i_0] [15]), var_2))))));
                    }
                    var_21 = ((arr_0 [i_2 - 4]) ? (((arr_0 [i_2 - 3]) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 4]))) : (arr_0 [i_2 - 1]));
                    var_22 = (min(var_22, ((max(-15, 15427315607556246986)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_23 &= (!(arr_16 [i_5] [i_2 + 2] [i_2] [i_2 - 4] [i_0] [6]));
                                var_24 = (max(var_24, (((arr_14 [i_0] [i_1] [i_1] [15] [i_5] [i_6]) ? (arr_19 [i_0] [i_0] [i_2 + 2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 1]) : ((88 ? 254 : (arr_15 [i_2 + 1] [i_2 - 3])))))));
                                var_25 = (max(((((var_13 | var_5) ? (arr_20 [i_6]) : (var_6 || 11019772456720343494)))), (var_3 * 0)));
                            }
                        }
                    }
                    var_26 = (min(((((arr_21 [i_0] [i_0] [1] [1] [i_2 - 1] [1] [i_2 - 1]) ? (arr_21 [i_1] [8] [14] [12] [i_2 - 1] [i_2 - 3] [i_2]) : (arr_21 [i_0] [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2] [i_2])))), (((~var_3) * (arr_21 [i_1] [i_2] [i_2 - 1] [i_1] [i_1] [i_1] [i_1])))));
                }
            }
        }
    }
    var_27 = var_11;
    var_28 = (min(var_28, (min(var_7, ((((var_5 ? var_6 : 18446744073709551585)) >> (var_1 - 1123658378618495246)))))));
    #pragma endscop
}
