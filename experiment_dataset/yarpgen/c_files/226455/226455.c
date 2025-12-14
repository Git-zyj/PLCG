/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_5));
    var_17 = var_9;
    var_18 += var_9;
    var_19 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        var_20 = (i_0 % 2 == zero) ? ((((((arr_6 [i_3 + 2] [i_0] [i_0] [0]) + (arr_0 [i_0] [i_1]))) >> (((arr_4 [i_0] [i_0]) - 2090805440))))) : ((((((arr_6 [i_3 + 2] [i_0] [i_0] [0]) + (arr_0 [i_0] [i_1]))) >> (((((arr_4 [i_0] [i_0]) + 2090805440)) - 1895095280)))));
                        var_21 = arr_4 [i_1] [i_1];
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] = var_10;
                                var_22 = (arr_16 [i_0] [i_1] [i_2] [i_4] [i_5 + 2] [i_5 + 1]);
                            }
                        }
                    }
                    var_23 = (max(var_23, (((-((var_13 / (arr_15 [i_0] [i_0]))))))));
                    arr_20 [i_0] [i_1] [i_2] [i_0] = (((((arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2]) * (arr_14 [i_0] [i_0] [i_0] [8] [9] [0]))) + (109 - 2147483647)));
                }
            }
        }
    }
    #pragma endscop
}
