/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_10 ^= ((30994 ? (arr_2 [i_0 - 2]) : (arr_1 [i_0 + 3] [i_0])));
        arr_3 [i_0] = ((~(arr_0 [i_0 - 1])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [1] [i_2] [i_1] = ((~(arr_2 [i_0 + 1])));
                        var_11 &= var_4;
                        var_12 *= ((-((((arr_7 [i_2] [i_1] [i_2] [6]) || 92)))));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]) ? (arr_8 [0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        var_13 = (arr_16 [i_4] [i_4 - 3]);
        var_14 = (max(var_14, (arr_16 [i_4] [i_4 + 2])));
        var_15 = (max(var_15, ((((arr_16 [i_4 + 2] [i_4 - 2]) >> (92 - 87))))));
    }
    var_16 = (min(var_16, (((-((-1 ? (!-83) : 76)))))));
    var_17 = var_1;

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_18 = (((arr_22 [i_6] [i_7 + 1]) ? 88 : -1113174188818519029));
                            var_19 = ((1 ? -var_6 : (((arr_26 [i_6] [i_7] [i_8] [i_9]) ? 128 : var_0))));
                            var_20 = (((var_9 >= var_8) ? (arr_18 [i_8]) : (~92)));
                            var_21 = (max(var_21, (arr_30 [i_7 + 2] [i_9] [i_8 + 3] [i_8 + 1])));
                            arr_31 [i_9] [i_8 + 1] [i_8] [1] [i_5] = (((((-1609 ? -93 : 0))) ? var_5 : (arr_17 [5] [7])));
                        }
                        var_22 = (min(var_22, 14036015073279690802));
                        arr_32 [i_5] [i_5] [i_8] [i_5] [8] = (31 && -4558563904257326888);
                    }
                }
            }
            var_23 = (((((arr_17 [i_5] [7]) + 0)) - 6264));
        }
        var_24 = var_7;
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    {
                        var_25 ^= ((~(((((var_2 % (arr_19 [5])))) ? var_7 : (((arr_37 [10] [11] [i_10 - 3] [i_5]) * 27964))))));
                        var_26 = (((((((arr_28 [i_5] [i_10] [i_12] [i_11]) ? 0 : 12427926862152162103))) ? 1764049662 : var_7)));
                        arr_43 [i_11] [i_11] [i_11] [i_11] = (((arr_24 [i_10]) ? var_0 : ((-125692316 ? 64 : ((max(var_2, 65524)))))));
                        var_27 = var_1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
