/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 -= (!var_13);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_1] = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] [i_4 + 1] = var_7;
                                arr_17 [i_1] = var_7;
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_1] = ((192 ? var_10 : (arr_5 [i_0] [i_3] [i_0 + 3] [i_3])));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        arr_26 [i_7] [i_7] [i_5] [i_6] [i_6] [i_7] = (arr_23 [i_0 + 4]);
                        arr_27 [i_0 - 2] [i_7] [i_6] [i_7 + 1] [i_5] [i_5] = (((arr_12 [i_7]) >= 5));
                        arr_28 [i_0] [i_5] [i_7] = (!var_4);
                    }
                }
            }
        }
        var_18 = (191 ? (arr_13 [1]) : var_5);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_19 *= (((((arr_21 [i_8]) ^ var_1)) & (!var_3)));
        arr_33 [i_8] = 45;
        var_20 = (~0);
    }
    #pragma endscop
}
