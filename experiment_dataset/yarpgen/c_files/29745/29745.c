/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_10;
    var_16 = ((-(~var_7)));
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [i_2] = arr_3 [i_1 - 4];
                            var_18 = ((-(((((min((arr_8 [i_1] [i_2] [i_1] [i_1]), (arr_2 [i_1] [i_2])))) != (arr_4 [i_1 - 3] [i_1] [i_1 + 2]))))));
                            var_19 = (((((~(arr_7 [i_1 - 4] [i_1] [i_1] [i_1 + 1])))) || ((min((((!(arr_0 [i_0])))), (arr_8 [i_1] [i_0] [i_1 - 4] [i_1 - 4]))))));
                            var_20 += (max((((arr_5 [i_1 - 4] [i_1 + 2]) ? (arr_5 [i_1 + 1] [i_1 - 3]) : (arr_5 [i_1 - 3] [i_1 + 2]))), (((arr_1 [i_1 + 1] [i_1 - 1]) & (arr_7 [i_1 - 1] [i_1 - 1] [8] [i_1 - 2])))));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_12 [i_4] [i_1] [i_2] [i_1] [i_0] [i_1] [i_0] = ((((var_0 > ((var_0 ? var_2 : (arr_11 [i_1]))))) || (arr_1 [i_1 - 4] [i_0])));
                                var_21 = (max(var_21, (arr_4 [i_0] [i_4] [i_2])));
                                var_22 = ((-(arr_4 [i_1 - 1] [i_1] [i_1])));
                                var_23 = (((var_10 / var_0) / var_6));
                            }
                        }
                    }
                }
                arr_13 [i_1] = (((((~((65535 ? 1 : 25137))))) ? (max(1, (((arr_6 [i_0] [i_0] [i_0] [i_1] [i_1]) ? var_14 : var_8)))) : (min(((var_5 ? 240 : 50024)), (arr_0 [i_0])))));
                var_24 = arr_11 [i_1];
                arr_14 [i_1] = (((((arr_11 [i_1]) ? (arr_5 [i_1 - 3] [i_1 + 1]) : (arr_10 [i_0] [i_1] [i_1] [i_1 - 2] [i_0]))) % ((((arr_4 [i_1 - 3] [i_1] [i_1 + 1]) <= (arr_4 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
