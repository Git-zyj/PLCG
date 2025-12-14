/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_8 | var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(((!((max(var_9, 4294967295))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] [i_2] = (((-(((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 4294967295 : var_0)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_24 [i_6] [i_0] [i_5] [i_0] [i_1] [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? ((~(!227513784))) : ((var_4 >> (((min(var_1, 252)) + 5624229569579824912))))));
                                arr_25 [i_0] [i_5] [i_2] [i_1] [i_0] = ((!(max((((arr_9 [i_6] [9] [i_2] [i_2] [i_1] [i_0]) && -2377439022529076261)), (!1079667701871600761)))));
                                var_14 = ((-(((((94 ? (arr_2 [i_0] [i_0]) : (arr_13 [i_2] [i_0] [i_2] [i_2] [i_0] [i_0])))) ? -3361000099 : var_3))));
                                arr_26 [i_0] [i_5] [i_2] [i_0] = ((((arr_13 [i_6] [i_0] [i_5] [i_2] [i_0] [i_0]) && (((41462 | (arr_3 [i_5] [1] [1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((-(~var_0)));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                arr_32 [i_8] [i_7 - 3] = (((arr_3 [i_8] [i_7] [i_7]) % (((arr_30 [i_7 - 1] [i_8] [i_7]) ? (arr_30 [i_7 - 3] [i_8] [i_8]) : -94))));
                arr_33 [11] = (((!var_5) == -98));
                arr_34 [i_7] [i_7] [i_7] = ((-(((arr_4 [i_8] [i_8] [i_8]) - 4294967295))));
                arr_35 [i_7] = ((-(arr_6 [i_7] [i_7 - 2])));
                var_16 = (arr_8 [i_7 - 3] [i_8] [i_7] [i_7 - 1] [i_7 - 1]);
            }
        }
    }
    #pragma endscop
}
