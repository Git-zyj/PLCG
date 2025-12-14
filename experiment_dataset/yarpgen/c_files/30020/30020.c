/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_20 = (min((min(-var_0, (max((arr_1 [i_0] [i_0]), (arr_4 [i_0] [i_1]))))), (min((min(8840788565880808473, (arr_3 [i_0] [i_1]))), 8840788565880808464))));
            var_21 = (min(8840788565880808453, (arr_1 [i_1 - 2] [i_0 + 3])));
            var_22 += -103;
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_2] = 871465911;
            arr_10 [10] [1] [i_2] = (arr_4 [i_2] [i_2 - 2]);
            var_23 = ((((arr_7 [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_3 [i_2] [i_2]))));
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            arr_13 [16] [16] [16] = (max((((!(arr_8 [0])))), (min(var_2, (min((arr_2 [0]), (arr_8 [16])))))));
            var_24 = (min(((25947 ? 8840788565880808449 : 871465919)), 2528664553280284188));
        }
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            var_25 = (max(var_25, (arr_1 [11] [i_4])));
            var_26 = ((~(max((arr_11 [i_0 + 1] [i_4 - 2] [i_4 + 1]), (arr_3 [i_0] [i_4])))));
        }

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_20 [10] [14] [i_0] = (871465914 % 2147483647);
            arr_21 [1] [i_5] [i_5] = (max(var_10, (min((min(var_6, var_1)), var_17))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_30 [i_0] [i_0] [i_6] [i_0] = (min(((max(126, (115 < var_8)))), (max(var_8, var_12))));
                        var_27 = ((!(arr_25 [i_0 + 1])));
                        var_28 = -25948;
                        arr_31 [i_7 + 1] [i_6] [i_0] [i_0] = (max(((max(var_3, (arr_11 [i_0] [i_0 + 3] [i_7 + 1])))), (max((min(2528664553280284188, (arr_11 [i_0] [i_0] [i_0]))), 9605955507828743145))));
                    }
                }
            }
            var_29 = ((((min(-86, (max(3343191261, (arr_18 [5] [5])))))) ? (min((max((arr_28 [i_0] [i_0] [18] [i_0]), var_2)), ((max(var_16, (arr_5 [16] [12] [16])))))) : ((((((15918079520429267427 ? (arr_24 [i_0] [i_5] [9] [i_0]) : 9605955507828743145))) ? var_16 : (((arr_23 [7] [7] [i_5]) ? (arr_22 [i_0] [i_5] [i_5] [i_5]) : var_8)))))));
        }
        for (int i_8 = 3; i_8 < 16;i_8 += 1)
        {
            arr_34 [i_0] = (arr_4 [i_8 + 3] [i_0 - 1]);
            var_30 = (min(var_30, ((max((((max(-6871, var_17)))), ((var_7 % (((min(var_14, var_11)))))))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_31 = (((((((((arr_28 [15] [15] [i_0] [15]) ? var_17 : (arr_35 [i_0] [i_0])))) ? (arr_11 [i_0] [i_0] [1]) : var_16))) ? (min((~18), (((arr_28 [i_0] [i_0] [i_0] [i_9]) ? (arr_32 [i_0] [17] [i_9]) : var_3)))) : (arr_5 [i_0] [i_9] [1])));
            arr_38 [i_0] [1] = var_5;
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_32 = arr_35 [i_10] [i_10];
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    var_33 *= var_17;
                    arr_46 [i_10] [i_10] = ((!(((2528664553280284183 ? 3343191276 : 8840788565880808485)))));
                    arr_47 [i_10] [i_10] [i_10] = (arr_35 [i_10] [i_11]);
                    var_34 = 1294576806;
                }
            }
        }
        arr_48 [i_10] [i_10] = (~871465911);
        var_35 *= (arr_41 [i_10] [i_10]);
    }

    for (int i_13 = 1; i_13 < 17;i_13 += 1) /* same iter space */
    {
        arr_51 [i_13] = (max((((((arr_35 [i_13 - 1] [i_13 + 1]) ? var_2 : (arr_25 [i_13]))) + (arr_5 [i_13 - 1] [i_13 - 1] [4]))), ((((arr_7 [18]) ? (((~(arr_36 [i_13] [i_13] [10])))) : (min(var_16, (arr_7 [4]))))))));
        arr_52 [i_13] = (min(82, 0));
    }
    for (int i_14 = 1; i_14 < 17;i_14 += 1) /* same iter space */
    {
        var_36 = (max(((-(min(9605955507828743145, 85)))), (min((min((arr_0 [i_14]), (arr_27 [i_14 - 1] [i_14]))), ((max(var_15, var_16)))))));
        var_37 = (min(var_37, (min(((max((arr_26 [i_14 + 1] [i_14] [17]), var_17))), (arr_26 [i_14 + 1] [i_14 + 1] [i_14 + 1])))));
        var_38 = 21909;
        arr_57 [i_14] = (max((max((arr_18 [1] [1]), (arr_2 [0]))), (max((((arr_14 [i_14]) ? (arr_24 [i_14] [i_14] [i_14] [i_14]) : var_18)), (((var_8 ? (arr_36 [15] [7] [i_14]) : (arr_37 [19]))))))));
    }
    #pragma endscop
}
