/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_20 -= (((var_7 ? 1556034217 : var_17)));
                        arr_11 [i_3] [i_0] [i_0] [i_0] = (+(min((arr_9 [i_1 - 1] [12] [12] [i_0]), var_3)));
                        var_21 += (!8955522526153682739);
                        var_22 = (-8955522526153682726 ^ 786970827);
                        arr_12 [i_0] [i_1] [i_0] = (arr_4 [i_0] [i_1 + 1] [i_1]);
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_0] [2] = var_4;
                        var_23 -= (((((var_5 ? -2344382889647946791 : var_17)) ? (((min(15, var_11)))) : (arr_8 [i_4] [i_2] [i_2 + 1] [i_0] [i_2] [i_0]))));
                        arr_17 [4] [i_1] [i_1] [i_0] = ((((((arr_13 [i_2 - 1] [i_2 - 1] [i_4 + 2] [i_0]) ? 4117116067 : -8955522526153682740))) ? (max((arr_7 [i_2 - 1] [i_0] [i_4 - 1] [i_1 + 2]), var_15)) : (((arr_13 [i_2 + 1] [0] [i_4 + 4] [i_0]) ? (arr_13 [i_2 + 1] [i_1] [i_4 - 1] [i_0]) : 16187827352396837968))));
                    }
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_24 = ((max((~var_17), var_8)));
                        var_25 += (min((max(8955522526153682720, var_9)), (((!((max(var_7, var_9))))))));
                    }
                    arr_21 [i_0] = ((-(arr_8 [i_0] [i_0] [i_1 + 2] [i_1] [i_2 + 1] [i_2 - 1])));
                    arr_22 [i_0] [15] [15] [i_0] = ((~(min((arr_9 [7] [9] [i_1 - 1] [i_0]), 16187827352396837968))));
                }
            }
        }
    }
    var_26 = (((((~(min(57765, -8955522526153682740))))) ? 1 : (min(((-8955522526153682746 ? -8955522526153682720 : 8955522526153682746)), var_6))));
    var_27 -= (max(var_14, ((var_11 ? ((8955522526153682752 ? 1 : -8955522526153682746)) : ((max(var_14, -1799630330)))))));
    var_28 &= ((-(~var_18)));
    #pragma endscop
}
