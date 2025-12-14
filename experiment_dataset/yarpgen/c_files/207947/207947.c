/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 43));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max(-61, -916206687)))));
                    var_14 = (max(var_14, ((-((var_4 ? (arr_5 [8] [i_1 + 2] [i_1 + 1]) : (arr_5 [i_0] [i_1 + 1] [i_1 + 2])))))));
                    var_15 = (min((max(var_7, 1)), (arr_4 [i_0] [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((arr_8 [i_4] [i_4] [i_1 + 1] [i_3] [8]) / var_1)))));
                                var_17 = (((var_7 ? 1 : 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
