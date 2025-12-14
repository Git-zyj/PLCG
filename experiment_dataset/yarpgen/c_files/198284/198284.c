/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] |= max((min((min(var_5, var_6)), (!27))), ((min(((max((arr_2 [i_1]), -27))), var_3))));
                                var_16 = ((-var_9 ? var_14 : var_9));
                                arr_15 [i_0] [i_1 - 1] [19] [i_1 - 1] [i_4] = var_9;
                                var_17 += (-(((arr_6 [0] [0] [i_1 - 1]) << (((arr_6 [17] [i_0] [i_1 + 1]) - 1529016519)))));
                                var_18 = (min(5048336379585076987, (((arr_1 [i_1 + 1]) ^ (arr_5 [i_1] [i_4])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, var_8));
                                arr_22 [i_0] [i_1] [i_2] [12] [i_6] = (((min(18, 4294967295)) | ((((arr_12 [i_1] [i_5] [i_1] [i_0]) & (arr_12 [i_0] [i_1] [i_2] [i_5]))))));
                                arr_23 [i_0] [i_1] [i_2] [i_5] [20] = ((var_14 ? (((arr_9 [i_0]) + (arr_1 [i_0]))) : (((min((arr_20 [8] [8] [i_2] [i_5] [i_6] [12]), (arr_1 [0])))))));
                                var_20 *= (arr_18 [i_1 + 1] [15] [i_1 + 1]);
                                arr_24 [i_0] [i_1] [i_2] [1] [i_5] [i_5] [i_6] = min((arr_11 [11] [i_1] [i_2] [11] [i_5] [i_6]), (((min(3182792559, (arr_19 [20] [20] [i_2] [20] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    var_21 += (arr_4 [i_7] [i_8] [i_9]);
                    arr_34 [5] [5] [1] = (29618 && 11);
                }
            }
        }
    }
    #pragma endscop
}
