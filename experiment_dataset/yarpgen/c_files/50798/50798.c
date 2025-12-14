/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-var_17, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = ((((max((arr_1 [i_0]), var_14))) ? (arr_2 [i_0] [i_1] [i_1]) : (((var_11 ? var_18 : (arr_4 [i_0]))))));
                arr_5 [i_0] = ((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0]))) >= (min(100, -2083649232)));
                arr_6 [i_0] [i_0] = (max((((var_5 ? (((var_6 && (arr_2 [i_0] [i_1] [i_1])))) : (((arr_4 [i_0]) | -2083649232))))), (arr_3 [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_18 [i_4] [i_3] = ((!((max(-var_9, (max(var_19, (arr_17 [i_2] [i_2] [i_4] [i_4] [i_5] [i_5] [i_5]))))))));
                                arr_19 [i_2 + 1] [i_2 + 1] [i_4] = var_13;
                                var_22 = ((+((((((arr_15 [i_2] [i_2] [i_2 - 1]) ? (arr_16 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : var_8))) % (max(15, var_13))))));
                            }
                        }
                    }
                    var_23 = min(((((var_4 / var_14) && (var_5 - -1)))), ((+(max((arr_14 [i_2 + 1] [i_2 + 1] [i_3 + 1] [i_3 + 1] [i_4] [i_4]), var_19)))));
                }
            }
        }
    }
    #pragma endscop
}
