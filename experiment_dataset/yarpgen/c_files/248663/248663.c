/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((var_13 ? (((min(var_15, (min(var_15, -55)))))) : (((((115 ? 11124 : (arr_0 [i_0])))) ? (((115 ? 0 : 148))) : ((0 ? 7306696700382654396 : var_8))))));
        var_18 = ((((min((arr_1 [i_0 - 1] [i_0]), (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0 + 1] [i_0]) : ((((((((arr_0 [1]) < (arr_0 [i_0]))))) > 8936465056861541243)))));
        var_19 = (((arr_1 [i_0] [i_0]) / (min(var_16, (((var_12 ? (arr_0 [i_0]) : var_8)))))));
        arr_3 [i_0] = (((arr_0 [i_0 + 1]) > ((134184960 ? var_3 : (arr_0 [i_0 + 1])))));
        var_20 &= (arr_0 [13]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_21 = ((((max((((-16 || (arr_0 [i_1])))), var_0))) ? (((((var_14 ? (arr_4 [i_2]) : 16)) == (min((arr_4 [i_2]), (arr_7 [i_2])))))) : (!var_15)));
                var_22 = var_4;
                var_23 = ((((((arr_7 [i_2]) ? (min(var_12, 4676188277162040674)) : (((max((arr_1 [i_1] [i_2]), var_3))))))) ? ((-var_6 - (((-7306696700382654397 ? var_0 : 0))))) : (arr_5 [i_1])));
                var_24 = (min((((((-(arr_8 [i_1] [i_2])))) ? ((((arr_1 [i_1] [i_2]) || (arr_5 [18])))) : 1)), (((!((((arr_7 [i_2]) - var_1))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_25 = ((~(arr_5 [i_3])));
            arr_15 [i_3] [i_4] = (arr_0 [i_3]);
            arr_16 [i_3] [i_3] [i_4] = 4026366388;
            var_26 = (((((arr_8 [i_3] [i_4]) ? 115 : var_11)) > (arr_5 [i_3])));

            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_27 = (max(var_27, (((!(!var_4))))));
                arr_19 [7] [0] [i_5] = ((1 != var_16) == (arr_8 [10] [i_5]));
                var_28 ^= (((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_3])));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_26 [i_3] [i_4] [i_4] [i_7] [i_6] [i_4] = 268600917;
                            var_29 = ((+((((arr_6 [i_7]) != (arr_4 [i_3]))))));
                            var_30 -= ((11138 ? (arr_24 [i_7] [i_4] [i_6] [i_7] [i_8]) : 1));
                        }
                    }
                }
                var_31 = 549751619584;
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    arr_34 [i_9] [i_9 - 1] [i_9] = (arr_1 [i_9 - 1] [i_9]);
                    var_32 = ((-(arr_25 [i_3] [i_3] [i_3] [i_9] [i_3] [i_9] [i_10])));
                }
            }
        }

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_37 [i_11] [i_11] = ((-(arr_20 [i_3] [i_11] [i_3] [i_3])));
            arr_38 [i_11] = var_15;
            var_33 ^= (((arr_28 [i_11]) == (((12 ? (arr_27 [i_3] [i_11]) : (arr_21 [i_3] [i_11] [i_3] [i_11]))))));
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_34 = (((-(arr_39 [i_12]))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_35 = ((~1) ? (arr_40 [i_12] [i_15]) : (((arr_43 [i_3] [i_3] [i_12]) ? var_15 : var_15)));
                            var_36 = var_6;
                            var_37 = (arr_42 [i_15 + 1] [i_14] [i_3]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 13;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            arr_56 [i_12] [i_17] [i_16] [5] [i_12] = ((-(var_14 - var_6)));
                            arr_57 [i_3] [i_12] [i_12] = var_1;
                            arr_58 [i_12] [12] [12] [i_17] [i_18] = (arr_46 [i_16] [i_12]);
                        }
                        var_38 = 115;
                    }
                }
            }
        }
    }
    var_39 = (min((min(var_10, (min(var_14, var_5)))), (((var_11 ? var_14 : (max(var_9, var_2)))))));
    #pragma endscop
}
