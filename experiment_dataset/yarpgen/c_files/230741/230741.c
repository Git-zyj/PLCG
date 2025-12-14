/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (arr_1 [i_0]);
                var_20 = ((((((-32767 - 1) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1])))) ? (~var_2) : (arr_1 [i_1 - 1])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [8] [i_1] [i_2] [i_3] [2] [i_0] = ((-(~var_12)));
                                var_21 = ((-((var_10 ? (arr_15 [i_0] [i_1] [i_1 + 1] [i_2 - 1] [i_0] [i_2] [i_1 + 1]) : (((arr_13 [i_0] [i_1] [i_2 + 2] [i_3] [i_2] [i_4] [i_4]) ? (arr_0 [i_4]) : var_3))))));
                                arr_17 [i_3] [i_3] [i_2] [i_3] [i_3] = var_6;
                            }
                        }
                    }
                }
                var_22 -= (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                arr_18 [i_0] [8] = ((((-32767 - 1) ? (253 & 40005) : (((arr_15 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2] [i_0] [i_1]) << (((arr_11 [i_1] [i_1] [i_1] [i_0] [i_1]) + 64)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_23 = -0;
                            arr_29 [10] [10] = ((var_14 ? 603102081 : (((((var_16 ? -1 : var_18))) ? var_0 : (arr_22 [i_5] [i_5])))));
                            var_24 = (((((3909302273 ? ((-603102082 ? var_4 : (arr_26 [i_7] [i_7] [i_7]))) : (arr_27 [i_7] [i_7] [i_7] [2])))) ? var_18 : ((((arr_25 [i_6 + 1] [i_6] [i_7]) ^ (arr_25 [i_6 + 2] [i_6 + 1] [i_7]))))));
                            var_25 = var_14;
                            var_26 = ((var_18 + ((((min(var_16, var_13))) ? var_12 : (arr_21 [i_8 + 2])))));
                        }
                    }
                }
                arr_30 [5] [i_6 + 2] [i_6 + 2] = (arr_25 [i_5] [i_5 + 2] [i_5]);
                var_27 -= (arr_27 [9] [9] [9] [9]);
            }
        }
    }
    #pragma endscop
}
