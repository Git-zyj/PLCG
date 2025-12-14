/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_11 = (((((arr_9 [i_1 + 1] [i_2] [i_2]) ^ (arr_10 [i_1 - 2] [10] [i_3] [i_3] [i_3] [i_3]))) <= (arr_4 [i_3] [i_3] [i_3])));
                        var_12 = (min(((1473381742 / (arr_1 [i_1]))), var_6));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [9] [1] [i_4] [9] = (30 + -110);
                        var_13 = max(-77, 65530);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [7] [3] [i_1] [i_2] [i_2] [i_5] [i_6 + 3] = var_8;
                                arr_22 [5] [5] = (arr_12 [i_5] [i_0]);
                            }
                        }
                    }
                    var_14 = (1988662453 / 32767);
                    arr_23 [i_0] [i_0] [i_1 + 2] [20] = ((-1571751096 ? (arr_8 [i_0] [i_0]) : (arr_8 [i_2] [i_0])));
                    arr_24 [i_2] = (9622 / 83);
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = ((var_0 ? (((max((var_5 < var_6), (-96 < var_3))))) : var_3));

    /* vectorizable */
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        arr_27 [i_7] = var_1;
        arr_28 [i_7] = (((arr_5 [16] [i_7]) + (-110 + 2)));
    }
    var_17 = (max((var_8 / 241961880), (((((119 ? 1 : var_7))) ? 1 : -612805797))));
    #pragma endscop
}
