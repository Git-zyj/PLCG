/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((44 ? 44 : 30));
        var_17 = (max((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), var_16));
        arr_3 [i_0] [i_0] = (((((((((arr_1 [14] [i_0]) ? var_11 : (arr_1 [i_0] [i_0])))) ? var_8 : (((34 ? 58 : -10580)))))) ? (arr_1 [i_0] [i_0]) : 218));
        arr_4 [i_0] = var_13;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((-(arr_6 [i_1])));
        arr_8 [i_1] = (arr_5 [i_1] [20]);
        var_18 = var_3;
        var_19 = max((min(var_16, (arr_5 [i_1] [i_1]))), (arr_6 [i_1]));
    }
    var_20 = (min(var_9, (max(-var_6, var_12))));
    var_21 = ((var_2 & (max(-var_11, (-10580 <= 1220312271267426012)))));
    var_22 = var_2;

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_23 = (min(var_23, (((((max((arr_10 [i_2 + 2]), (arr_9 [i_2] [i_2])))) ? (arr_5 [i_2] [i_2]) : var_6)))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_14 [i_2 + 2] = ((-4595615689026064383 | ((((arr_12 [i_2 + 2]) ^ (arr_12 [i_2 + 2]))))));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                arr_18 [i_4] [i_4] [i_4] [i_2 - 1] = ((var_4 ? (arr_6 [i_2 + 1]) : (arr_6 [i_2 - 1])));
                arr_19 [i_4] [i_4] [i_2] = (((arr_13 [i_2 + 1]) >> var_12));
                var_24 = var_2;
                var_25 = (min(var_25, (((var_13 ? ((((arr_13 [13]) ? 0 : (arr_12 [i_2 + 2])))) : (arr_1 [i_2] [6]))))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_24 [i_3] = (min(-4595615689026064383, 11738684724594857045));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_32 [i_7] [i_7] [i_6] [i_5] [i_3] [i_2] [i_2 + 2] = -65523;
                        var_26 = arr_25 [i_5] [i_5] [i_5] [i_5];
                        var_27 = (((arr_25 [i_5] [i_2 - 1] [16] [i_2 + 1]) << (((arr_10 [i_2 + 1]) - 1431177214))));
                        arr_33 [i_2] [i_3] [i_3] [i_3] [19] = 28648;
                        var_28 = (min(var_28, (arr_25 [i_5] [i_5] [i_5] [i_2 - 1])));
                    }
                    arr_34 [i_2] [i_3] [1] [i_6] |= (((arr_17 [i_6]) > (arr_22 [i_2 + 2] [i_5] [i_6])));
                    arr_35 [i_2] [i_5] [i_3] [i_2] = (arr_0 [i_2 + 1]);
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        arr_41 [i_9] [i_9] [i_5] |= arr_21 [i_3] [8];
                        var_29 = (max(var_29, var_3));
                        var_30 = (arr_21 [i_2] [i_2]);
                    }
                    var_31 &= 11608583798517142175;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {

                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        var_32 = (((((~((var_5 ? var_16 : (arr_12 [i_2])))))) ? -var_3 : var_9));
                        arr_49 [i_2 - 1] [i_10] [i_11] [11] = ((((max((arr_27 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12] [i_12] [4]), var_7))) ? (arr_20 [2] [i_11]) : var_1));
                        var_33 = (max(var_33, ((+(min((arr_31 [i_12] [i_11] [i_11] [i_2] [i_2] [i_2]), -var_14))))));
                        var_34 &= var_6;
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        var_35 = ((!(arr_51 [i_2 - 1] [i_13 - 1] [i_13 + 1] [i_2 - 1] [16])));
                        var_36 = arr_5 [0] [i_13 + 1];
                    }
                    var_37 = (max(var_37, ((((var_0 + var_2) ? (((min((arr_12 [i_2 + 1]), (arr_12 [i_2 - 1]))))) : ((28648 ? 4595615689026064366 : 3)))))));
                }
            }
        }
        var_38 = (max(var_38, ((min((min((arr_25 [i_2] [i_2 - 1] [i_2] [i_2 - 1]), (arr_5 [i_2 + 2] [i_2 + 1]))), (max((arr_5 [i_2] [i_2 + 1]), (arr_5 [i_2] [i_2]))))))));
        var_39 = var_8;
    }
    #pragma endscop
}
