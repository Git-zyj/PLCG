/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 -= 1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = (((((arr_2 [i_4 - 1] [i_0]) ? var_9 : (arr_2 [i_4 + 2] [i_0])))) ? ((-113 ? (arr_2 [i_4 - 1] [i_0]) : 1467811374800544857)) : (max((arr_2 [i_4 + 1] [i_0]), (arr_2 [i_4 - 2] [i_0]))));
                                var_11 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }

                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    var_12 = ((((var_3 ? (max(-131941453552216882, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) : -573996824)) | 103));
                    var_13 -= (((-131941453552216888 ? ((max(1, 8))) : (arr_15 [i_0] [i_0] [i_0] [i_0]))));
                    var_14 = (1 >= 1);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_15 -= 14153;
                                var_16 = ((1 ? 101 : 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((1 ? 36028797018963967 : var_0))) ? ((((((1 ? 2431585393192407520 : -113))) ? ((6094161937454769539 ? 33 : -75)) : 1))) : (~5595484042415754226)));
    var_18 -= ((!(~1008806316530991104)));
    var_19 = var_8;
    #pragma endscop
}
