/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((1 && var_7) + var_8))) && 48));
    var_11 = (!var_1);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = arr_1 [i_0] [i_0];
        arr_2 [i_0] = (((!(arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max((max((arr_5 [i_1] [i_1]), (arr_3 [i_1]))), ((((((7321786717259086936 * (arr_3 [i_1])))) ? (arr_5 [8] [i_1]) : 229)))));
        var_13 = (arr_4 [i_1]);
        arr_7 [10] [10] = ((max(-var_6, (255 * 32074))));
        arr_8 [i_1] [6] = arr_4 [i_1];
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_14 = arr_12 [i_2 - 2];
                                var_15 ^= var_7;
                            }
                        }
                    }
                    var_16 ^= 32087;
                }
            }
        }
        arr_24 [1] = -var_9;
        arr_25 [i_2] = var_3;
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                {
                    var_17 = (arr_20 [i_2] [20] [i_2] [i_2 - 2] [19] [i_2]);

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_18 = ((-((((min(232, 3351080135550932272))) ? (arr_10 [i_7]) : 243))));
                        arr_35 [i_7] [i_8] [i_8] [i_9] = (arr_9 [i_7]);
                        arr_36 [i_9] [i_7] &= (min((arr_14 [i_9]), ((((arr_23 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2]) ? ((min(124, 4))) : ((var_3 ? (arr_30 [0] [i_9] [i_9] [10]) : 53)))))));
                        arr_37 [i_2] [i_2] [i_7] [i_9] = var_2;
                        arr_38 [22] [22] [i_7] = ((!(arr_26 [i_8] [i_7])));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_19 = (max((((!(((var_4 ? 30 : (arr_30 [i_10] [i_7] [i_7] [i_2]))))))), ((min(var_1, var_2)))));
                        arr_42 [i_7] [12] [i_10] = 8905665445872837047;
                        var_20 &= (min((arr_26 [9] [20]), ((((((arr_17 [i_2] [16] [i_7] [14] [18] [i_2]) % (arr_27 [2] [i_2])))) % ((var_5 ? (arr_10 [i_2]) : (arr_33 [i_10])))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        var_21 = (max(var_21, ((((-1246729418318107663 ^ (arr_32 [i_2])))))));
                        arr_46 [i_7] = var_3;
                        arr_47 [2] [i_7 - 2] [i_7] [i_8] [i_7] = ((((((!(arr_14 [i_7]))))) / (arr_39 [i_7])));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_22 = (min(var_22, (!3351080135550932250)));
                                arr_52 [i_7] [i_12] [i_13 + 1] = (arr_11 [0] [i_2 - 2] [i_7 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 4; i_14 < 17;i_14 += 1)
    {
        var_23 = arr_51 [i_14] [i_14] [i_14] [3] [2];
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                {
                    var_24 = ((9223372036854775807 & (arr_28 [i_15] [i_15] [i_16])));
                    var_25 = (max(7171448674740972211, 112));
                    arr_63 [i_14] [i_15] [i_15] [i_16] = (arr_11 [i_16] [i_15] [i_14 + 1]);
                    var_26 = (max(var_26, ((((((min(var_4, ((70 ? 32743 : 4940073896588235957)))) + 9223372036854775807)) << (((!((((var_4 + 2147483647) << (((var_8 + 15890) - 6)))))))))))));
                }
            }
        }
        var_27 = (((6 <= 3351080135550932262) ? (!var_3) : (arr_61 [i_14])));
    }
    #pragma endscop
}
