/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= -var_7;
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = 4016491759;
                                arr_13 [i_1] [i_2] [5] = (5275537451098952966 | 127);
                                var_16 += (~var_4);
                            }
                        }
                    }
                    arr_14 [i_2] = (((~(!20357))));
                    arr_15 [i_2] = (((47523146 ? var_2 : var_6)));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_18 [i_5] [i_1] = (!(~245));
                    var_17 = (arr_9 [i_0] [i_5] [i_0] [i_0] [2] [i_5]);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    arr_21 [i_6] [4] [i_6] [i_6] = ((((1 || (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [10] [i_1]))) || var_6));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_30 [i_6] [i_8] [i_8] [i_8] [i_6] = ((32767 ? 204 : 278475550));
                                var_18 *= (arr_23 [i_8] [i_1] [i_7]);
                                arr_31 [i_6] [i_1] [i_6] = 13171206622610598643;
                            }
                        }
                    }
                    var_19 = 4036128527;
                    var_20 -= 56121;
                }
                var_21 *= 18446744073709551612;
            }
        }
    }
    var_22 = var_5;
    #pragma endscop
}
