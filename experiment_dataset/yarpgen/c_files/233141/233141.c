/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (min((((!((max(var_4, var_4)))))), (~-5754448132616268807)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = -23;
            var_15 ^= ((max(var_9, ((!(arr_3 [i_0] [i_1]))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_12 [i_0] [i_3] = var_12;
                    arr_13 [i_0] [i_0] [i_0] = 150;
                    arr_14 [i_0] [i_0] [i_3] [1] = -292161912;
                }
            }
        }
        var_16 = (max(var_16, ((max(((((arr_1 [i_0]) ? (arr_1 [i_0]) : 42485))), (min((arr_1 [i_0]), -6255130671663050958)))))));
        var_17 = (((!13007326163392893089) && ((max((((arr_3 [i_0] [i_0]) ? 62118 : var_5)), ((min((arr_1 [i_0]), (arr_5 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 24;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_18 = ((var_2 ? (arr_19 [i_4 - 1]) : (arr_20 [i_4])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_19 = (arr_25 [i_4] [i_4] [i_4] [i_4]);
                            arr_30 [i_4] [i_4] [i_5] [17] [i_7] [i_8] = var_8;
                            arr_31 [i_6] [i_5] [i_6] = var_9;
                            arr_32 [i_4 - 2] [i_4 - 2] = var_0;
                        }
                    }
                }
            }
            var_20 -= ((~(arr_16 [i_4 + 1])));
            var_21 = (arr_21 [i_4 + 1]);
        }
        var_22 += var_9;
    }
    var_23 = var_12;
    var_24 = ((!(!var_3)));

    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_35 [i_9] = ((~((1 ? 21 : (arr_33 [i_9])))));

        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_25 = (max(var_25, ((((arr_29 [i_9] [i_10] [i_10] [i_10]) * (arr_5 [i_9] [i_11]))))));
                            var_26 = (!1642381886);
                        }
                    }
                }
            }
            arr_44 [i_9] [i_10 + 1] [2] = (arr_11 [i_9] [i_9] [i_9] [i_10]);
            var_27 = (max(var_27, 10));
        }
        arr_45 [i_9] [i_9] = (arr_20 [i_9]);
        arr_46 [i_9] [i_9] = (arr_29 [i_9] [i_9] [i_9] [i_9]);
    }
    #pragma endscop
}
