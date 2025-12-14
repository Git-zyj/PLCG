/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_15, var_8))) % var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (~var_10);
                    var_19 *= (min(((((((2147483647 ? (arr_5 [i_0 - 1] [i_0 - 1] [i_2] [5]) : (arr_4 [i_0 + 2] [2])))) ? ((var_16 + (arr_2 [i_0] [i_2]))) : var_16))), (((arr_5 [i_1 - 1] [i_1] [i_1] [i_2]) ? (arr_5 [i_1 + 1] [i_1] [i_2] [0]) : (arr_5 [i_1 + 1] [i_2] [i_2] [i_2])))));
                    arr_7 [i_0] [i_1 + 2] [i_2] [i_2] = (((arr_3 [i_0 - 2] [i_1]) ? (((((((arr_0 [i_2]) >= var_8)))) + (((arr_6 [i_2] [i_1 - 1] [i_1] [i_1]) ^ (arr_5 [i_2] [i_2] [i_1] [i_0]))))) : ((((arr_3 [i_0] [i_0]) + (~var_8))))));
                }
            }
        }
    }
    var_20 = 2147483644;

    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_21 += (arr_3 [i_3] [15]);
        arr_10 [i_3] [i_3] = ((!((14244296979148405381 != (arr_6 [i_3] [i_3] [i_3] [i_3 + 2])))));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_21 [i_6] [i_6] [i_6] [i_6] [i_4] [i_3] &= var_12;
                        var_22 = (min(var_22, ((min((arr_2 [i_3] [i_6]), var_14)))));
                        arr_22 [i_3] [i_4 - 1] [i_4] [i_5] [i_4] [i_6] = ((((((arr_12 [i_4 - 1] [10]) ? ((((-2147483647 - 1) % 38))) : (arr_5 [i_3 + 2] [i_5 - 1] [i_5] [11])))) ? ((var_14 ? ((((arr_1 [i_3]) != -2147483647))) : (((arr_13 [i_4] [i_4]) ? var_2 : var_8)))) : ((((arr_8 [i_5] [i_6]) != (min(var_13, (arr_13 [1] [i_6]))))))));
                        arr_23 [2] [i_4] [i_4] [5] [i_5] [i_5] = (-1 & 3785907948);
                        var_23 = (arr_17 [i_3] [i_3] [i_4] [i_5] [i_4] [i_6]);
                    }
                }
            }
        }

        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            arr_28 [i_7] = ((-((((((arr_0 [i_3]) ? var_7 : 2048224058256521940))) ? (max(var_16, (arr_9 [i_3]))) : (max(var_11, (arr_9 [i_7])))))));
            arr_29 [6] [6] = var_2;
        }
        var_24 -= (((((arr_12 [i_3] [i_3 + 1]) != (max(var_4, (arr_5 [i_3] [i_3] [i_3] [i_3]))))) ? ((((0 != 6636671740725260202) + (arr_6 [i_3] [i_3] [i_3] [i_3])))) : (((arr_14 [i_3 - 2] [i_3 - 2] [i_3 - 1]) + var_16))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_25 = (min(var_25, (((arr_11 [i_8] [i_8]) ? (max(8017970477460320223, -99)) : var_10))));
        var_26 = (min(var_26, ((((min(var_2, (arr_15 [i_8] [i_8]))) ^ var_12)))));
        var_27 = ((2147483647 ? var_8 : (min((arr_27 [i_8]), ((var_16 ? 2147483647 : var_0))))));
    }
    var_28 = (min(var_28, ((min(var_16, var_14)))));
    #pragma endscop
}
