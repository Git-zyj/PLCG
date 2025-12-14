/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_20 &= (arr_6 [0] [i_3 - 2] [i_2]);
                        arr_9 [i_0] [i_1] [0] [i_1] = (var_6 ? ((var_11 ? var_3 : 63)) : 2090192290976046091);
                    }

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_21 = (min(var_21, (((+(((arr_3 [i_2]) ? 16447984986838883977 : var_18)))))));
                        arr_14 [i_0] [i_1] [3] = ((((((arr_6 [i_0] [5] [i_2]) ? 3857688697457153108 : -9223372036854775807))) ? -9223372036854775807 : (arr_8 [i_0] [i_1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        var_22 = (max(var_22, 1));
                        var_23 = (~9223372036854775807);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((-(min((~0), (((var_13 ? (arr_8 [i_7] [i_6] [i_1]) : -16889))))))))));
                                arr_23 [1] [16] [i_2] [i_1] [i_7] [i_1] = var_9;
                            }
                        }
                    }
                    var_25 = -9223372036854775807;
                    var_26 = (((((((arr_20 [i_1] [i_2]) ? 1337645949058147186 : var_9))) || -9223372036854775801)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_27 = (max(var_27, ((((((arr_3 [16]) || 6752)) ? var_6 : var_5)))));
        arr_26 [i_8] = var_14;
        arr_27 [i_8] = ((~(arr_5 [i_8] [i_8] [i_8])));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_28 = (max((((var_6 ? (arr_20 [i_9] [i_9]) : var_11))), (((var_9 ? ((((arr_24 [i_9] [i_9]) || (arr_15 [i_9] [6] [10] [10] [i_9] [i_9])))) : (!var_14))))));
        var_29 = (((~-36) / (((-(arr_24 [i_9] [i_9]))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_35 [4] [i_10] = (((arr_10 [i_10] [i_10] [i_10] [i_10] [i_10]) / (arr_10 [i_10] [1] [i_10] [i_10] [i_10])));
        var_30 += (~var_14);
    }
    var_31 = (min(var_31, (((var_0 || ((((!3415980590) ? ((min(0, var_16))) : (~var_11)))))))));
    #pragma endscop
}
