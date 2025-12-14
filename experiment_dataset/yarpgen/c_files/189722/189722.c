/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 && ((((((var_2 ? -369140993 : var_3))) ? (0 != var_11) : 2147483626)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_14 = (arr_2 [i_0 + 3] [i_0 + 2]);
        var_15 = (0 << 1);
        var_16 &= (arr_1 [i_0 + 2]);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 ^= -1;

                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        var_18 = (max(var_18, var_8));
                        var_19 = (min(1, 1));
                        var_20 = var_0;
                        arr_14 [4] [4] [i_2] = ((1945 == (arr_13 [i_2])));
                        arr_15 [i_2] = -var_4;
                    }
                    var_21 = (max(var_21, var_10));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_22 ^= (arr_10 [i_1] [i_1] [i_1] [i_1]);
                        arr_18 [5] [i_2] = (((arr_3 [i_3 - 1] [i_3 - 1]) * (arr_17 [i_5] [i_3 - 1] [0] [i_1])));
                        var_23 = var_11;
                        var_24 -= (arr_6 [i_1]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_25 *= (((((var_7 ? (arr_13 [i_6]) : var_8))) ? 1 : (arr_8 [i_6] [i_2] [9])));
                        arr_21 [i_1] [i_1] [i_1] [i_6] &= 2147483626;
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_26 *= (arr_11 [i_1]);
                        arr_24 [i_3 - 1] [i_2] [i_2] [i_2] = 83;
                        var_27 = (min(var_27, ((((((-(1 - 54)))) ? (1 ^ 7) : (arr_22 [i_7 + 2] [i_3 - 1] [i_2] [i_2]))))));
                        var_28 = -2147483614;
                        var_29 = (max(var_29, 60942));
                    }
                    var_30 *= 1;
                }
            }
        }
    }
    var_31 += var_11;
    var_32 = (min(0, var_10));
    #pragma endscop
}
