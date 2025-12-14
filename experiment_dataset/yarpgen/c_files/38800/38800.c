/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [22] [7] [i_0 - 2] [i_0] [i_0 - 2] = (max(((~(max(256, (arr_6 [i_4]))))), (((~(((arr_13 [i_0 + 1] [i_0 + 2] [i_0]) / var_8)))))));
                                arr_16 [i_4] = ((!((min((min(var_12, 1792)), (12 | -1815))))));
                            }
                        }
                    }
                    var_16 = ((-(((!((max(1803, 1792))))))));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_21 [i_0 + 2] [i_1] [13] [i_0 + 1] [15] &= (((max(((max(6836, var_1))), (min((arr_0 [5]), (arr_18 [i_0]))))) > (((((min(var_8, var_11)))) / (min(var_2, (arr_7 [9])))))));
                            var_17 = ((!((min(-var_13, (!0))))));
                            var_18 = (((max((max(var_2, var_0)), ((max(-1815, var_12))))) | ((((!(!-1495458989680733023)))))));
                            var_19 ^= (max((min(-var_6, (min(var_5, var_15)))), (max(((max(-1044294845, (arr_12 [i_5] [2] [10] [9])))), (min(var_2, (arr_14 [i_6] [i_5] [9] [i_1] [i_0 - 1])))))));
                        }
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            var_20 = ((!((max((max((arr_13 [21] [i_1] [i_1]), var_14)), (-1 > var_6))))));
                            var_21 = (((min((max(var_2, (arr_8 [i_5] [i_1]))), 1495458989680733022)) / (((-(max(var_1, var_5)))))));
                        }
                        var_22 = (min((((~(((arr_5 [16] [i_2] [i_5]) ^ 1495458989680733015))))), (((((min(var_13, var_13)))) & (min((arr_9 [i_0] [i_0] [15]), (arr_6 [20])))))));
                    }
                }
            }
        }
    }
    var_23 = ((((max((max(var_12, var_14)), -var_14))) && ((min(((min(var_3, var_0))), (var_0 / 58716))))));
    #pragma endscop
}
