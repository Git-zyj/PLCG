/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (10163 ? var_14 : 7982445343413897807);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] = ((+(((~var_6) ? 1 : (((arr_13 [i_0] [i_0] [5] [2] [5] [i_3] [i_4]) ? 4817831392558936837 : (arr_7 [i_1] [0] [1] [4])))))));
                                arr_15 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4] = (arr_8 [i_0] [8] [i_0]);
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_4] = (arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4]);
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] = 1;
                    arr_18 [i_0] [i_1] [i_2] = ((7982445343413897807 / (arr_12 [i_0] [2] [2] [13] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
