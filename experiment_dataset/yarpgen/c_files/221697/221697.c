/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((max(var_18, 457242979))) ^ (~7602606569511650833))), var_14));
    var_20 = (((((-((min(var_9, var_17)))))) / ((var_2 ? var_5 : (var_4 % var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] = ((min(0, 0)));
                    arr_10 [i_2] [i_1] [i_2] [i_1] = (arr_3 [i_2 - 2]);
                    var_21 ^= ((((min(var_17, var_13))) ? ((min(31132, var_9))) : 7602606569511650832));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    arr_13 [i_1] [i_1 + 2] = (((var_0 ? (arr_0 [i_1 + 3]) : 65520)));
                    arr_14 [i_1] [i_1] [i_3 + 1] = (arr_12 [i_0]);

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_1] = (arr_8 [i_1 + 1] [i_1] [i_3 - 2]);
                        var_22 = ((~var_17) ? ((-(arr_1 [i_0]))) : 31114);
                    }
                    var_23 = ((4 ? (arr_16 [i_1] [i_3 - 2] [i_1] [i_1] [i_0]) : (arr_16 [i_1] [i_3 - 1] [i_1] [i_3 - 1] [i_1])));
                }
                arr_18 [i_1] [i_1 + 2] = (max((((arr_8 [i_0] [i_1] [i_1]) ? (((max(var_9, var_17)))) : (((arr_15 [i_1] [i_1]) ? (arr_8 [i_0] [i_1] [i_1]) : (arr_12 [i_1]))))), var_6));

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_24 = (min(34407, (var_12 / var_13)));
                    arr_22 [i_5] [9] [i_1] = var_8;
                    arr_23 [i_5] [i_5] [i_5] [i_1] = ((arr_5 [i_0] [i_1]) ? var_3 : (-var_16 * var_4));
                }
                /* vectorizable */
                for (int i_6 = 4; i_6 < 16;i_6 += 1)
                {
                    var_25 += 18446744073709551606;
                    arr_27 [i_6 - 3] [i_6] [i_1] [i_0] = var_0;
                    arr_28 [i_1] [i_1] [i_6 - 2] [i_1] = (((arr_11 [i_1] [i_1 + 2] [i_0]) ? 35809 : -var_11));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_26 += ((122402518 ? ((964374967 ? 6 : var_11)) : ((18446744073709551611 | (arr_1 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_37 [i_9] [i_8] [i_1] [i_1] [i_0] = (~var_11);
                                var_27 = ((-(~34407)));
                            }
                        }
                    }
                    arr_38 [i_0] [i_0] [i_1] = (~31133);
                }
            }
        }
    }
    var_28 = (min(var_28, var_12));
    #pragma endscop
}
