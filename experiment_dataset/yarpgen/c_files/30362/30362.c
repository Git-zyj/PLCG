/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 += var_9;
        var_21 += ((2147483644 ? 48824 : 3825895776679844493));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_22 = (min(var_22, 4169762826083936990));
                    arr_11 [i_1] = (min((arr_6 [i_1] [i_1] [i_2 + 1]), ((max((arr_6 [i_1] [3] [i_2 - 1]), 16733)))));
                    var_23 = ((!((min(1, var_7)))));
                }
            }
        }

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_24 = (((max((arr_13 [i_1] [i_1]), 55864)) | (max(14, var_16))));
            var_25 -= max((arr_6 [i_4] [i_4] [i_4]), 48819);
            var_26 = (((arr_4 [i_1]) ? ((var_13 ? (max(6906, (arr_10 [i_4] [i_4] [i_1]))) : -84)) : 6));
            arr_14 [i_1] [i_4] = 55882;
            var_27 = (max(var_27, (((((arr_7 [14]) & (arr_7 [i_1])))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_28 = (max(var_28, (-var_19 > 1)));
            arr_17 [i_1] [7] [7] = ((((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? ((max(var_3, (arr_16 [i_1] [i_5])))) : (max((arr_3 [i_1]), var_2))));
            var_29 &= (min(18370594229853063287, ((((arr_16 [i_1] [i_1]) || (arr_16 [i_1] [i_5]))))));
        }
        var_30 = -2147483639;
        arr_18 [i_1] = ((!((((arr_15 [i_1] [0] [i_1]) ? (arr_13 [i_1] [i_1]) : (arr_15 [12] [i_1] [i_1]))))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_31 = (((max((min(16417036744611209747, (arr_22 [i_6] [i_7] [i_8]))), (arr_21 [i_6] [i_7] [i_8])))) ? (arr_25 [i_6] [i_6] [i_8] [i_6]) : (((arr_7 [i_6]) & 1)));
                    var_32 = (min(var_32, 2609735539));
                    arr_26 [i_6] [i_8] [i_8] = (min(var_17, ((max((arr_6 [i_8] [i_7] [i_8]), (arr_3 [i_8]))))));
                    var_33 = (min(var_9, (arr_23 [i_6] [i_7])));
                    var_34 = var_5;
                }
            }
        }
        var_35 = (max(var_35, -16702));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 11;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_36 = (min(var_36, ((((arr_16 [i_9 - 1] [i_10]) ? 1 : (arr_16 [i_10] [i_10]))))));
            var_37 = (((arr_27 [i_9 + 1]) ? (arr_27 [i_9 - 1]) : 2147483620));
        }
        var_38 = (arr_15 [i_9] [i_9 - 1] [2]);
        arr_33 [i_9] [i_9] = (arr_8 [i_9] [i_9] [i_9]);
        arr_34 [i_9] [i_9 + 1] &= var_4;
        var_39 = (arr_29 [i_9]);
    }
    var_40 = (var_3 <= var_11);
    var_41 = (max(var_41, -var_5));
    var_42 = (max(var_42, (min(1494, var_8))));
    #pragma endscop
}
