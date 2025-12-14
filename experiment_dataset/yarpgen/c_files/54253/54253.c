/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((var_5 * var_4) & (max(var_7, var_1)))), ((max(24858, ((var_0 ? var_13 : -3738)))))));
    var_15 = (max(var_15, ((((((var_3 & var_10) ^ var_9))) ? ((30931 ? ((3738 ? var_13 : var_2)) : ((34628 ? var_6 : var_2)))) : 34626))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((var_3 ? (max(((34628 ? var_2 : (arr_1 [i_0]))), (((34813 ? var_12 : 19219))))) : (((((3541659035 ? 65535 : 3738))) ? 4294967279 : (((min(3384, 3738))))))));
        arr_4 [i_0] = ((65533 ? ((-(((arr_0 [i_0]) ? -3738 : -3738)))) : ((max((((var_1 || (arr_2 [i_0])))), (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = (min(((max((var_8 >= var_6), 1))), ((((5162 ? var_4 : 19224)) / (min(-1535863179, -19801))))));
        arr_7 [4] &= min((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))), ((((min((arr_2 [i_1]), (arr_2 [i_1])))) ? var_6 : (((arr_5 [i_1]) + (arr_5 [18]))))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2 - 1] [i_2 - 1] = (((((((var_9 * (arr_10 [i_2 + 1]))) / ((var_11 ? 46304 : var_12))))) ? -9 : ((((var_9 ? var_1 : 46311)) * 19219))));
        arr_12 [i_2] &= ((32050 ? ((-((34628 ? 595826628 : (arr_0 [i_2]))))) : (((var_4 ? (arr_10 [i_2 - 1]) : (arr_10 [i_2 + 1]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_17 += ((2 | (arr_17 [i_5 + 1] [6] [i_5 + 2] [i_6])));
                        var_18 ^= ((var_5 ? ((((var_1 <= (arr_5 [i_5]))))) : (((arr_19 [16] [i_6]) ? (arr_22 [13] [1]) : var_5))));
                        arr_23 [i_5] [0] [i_5] [i_5] = var_2;
                        arr_24 [6] [i_5] [i_5] [i_3] = (arr_21 [i_3] [i_5] [i_5] [i_3]);
                    }
                }
            }
        }
        var_19 = (min(var_19, (~-var_1)));
        arr_25 [16] = (((arr_19 [12] [12]) <= (arr_20 [i_3] [i_3])));
    }
    var_20 = ((-((45 ? 4294967279 : 2))));
    var_21 = var_11;
    #pragma endscop
}
