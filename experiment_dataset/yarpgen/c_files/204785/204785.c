/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_12;
    var_21 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, ((((max(var_7, (max((arr_5 [i_2] [i_2] [i_2]), (arr_4 [14] [5]))))) == (((arr_7 [i_0] [i_0] [i_0]) | (((((arr_3 [i_0] [i_0] [1]) == (arr_7 [i_0] [21] [21]))))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_23 -= (min(44918, -1));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] = ((var_16 * ((((var_10 && ((((arr_0 [5]) % (arr_4 [i_1] [i_1]))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 = arr_15 [i_0] [i_0] [i_1] [i_2] [4] [i_6];
                                var_25 = (min(var_1, (arr_20 [0] [14] [1] [17] [i_1] [13])));
                                arr_22 [i_5] [15] [15] [i_0] [i_5] = (max(((((arr_5 [i_0] [i_0] [i_0]) ^ var_15))), (var_5 * var_18)));
                            }
                        }
                    }
                    arr_23 [i_0] [i_0] [i_0] = ((((((var_13 * (arr_11 [i_0] [1] [1] [i_0] [21])))) / (min((arr_9 [16] [i_1] [4]), (arr_11 [i_0] [21] [i_0] [19] [i_0]))))) | ((max((((arr_18 [i_0] [i_0] [i_0] [i_0]) & var_7)), (arr_19 [i_2] [i_0] [i_1] [i_1] [i_0] [i_0])))));
                }
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
