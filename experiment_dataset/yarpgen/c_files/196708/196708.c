/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 296922848;
        var_14 &= var_0;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] = (arr_2 [i_4] [i_3]);
                        arr_14 [i_1] &= var_9;
                    }
                }
            }
            var_15 *= ((((max(-2063342578, (arr_2 [8] [16])))) ? (!2063342578) : ((max(1, var_11)))));
            var_16 += ((((min(((((arr_6 [i_2]) >= 19484889))), (arr_12 [i_1] [i_1] [i_1] [i_1] [4])))) ? var_8 : (((!((min((arr_11 [i_1] [i_2] [i_1] [i_2] [i_1] [i_2]), var_2))))))));
            var_17 += var_6;
            arr_15 [i_2] [1] = var_11;
        }

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    {
                        var_18 = (((max((max(4294967295, 1)), ((max(1, (arr_5 [i_6] [i_5])))))) / (arr_11 [i_1] [3] [i_5] [3] [i_6] [i_7 + 2])));
                        arr_22 [i_1] [i_6] [i_6] [i_7 + 1] [i_7] = ((((((-(arr_4 [i_1]))))) ? ((var_11 ? var_8 : ((min((arr_16 [i_5] [i_5]), 1))))) : var_10));

                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            arr_25 [i_6] [i_5] = (((arr_4 [2]) ? (((arr_0 [i_6]) ? (((arr_24 [3] [i_5] [17]) ? (arr_23 [i_5] [i_5]) : (arr_23 [15] [i_7]))) : -2063342579)) : (((((arr_1 [i_6]) ? var_11 : var_11))))));
                            var_19 = var_4;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_20 = 1;
                            arr_28 [13] [i_6] [i_6] = ((-var_3 ? (min((arr_18 [i_7 + 1] [i_5] [i_6] [i_7]), 2063342578)) : var_10));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_31 [i_6] [13] [8] [11] [2] = (var_13 >= var_1);
                            var_21 -= (!var_8);
                        }
                        var_22 = 14;

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_23 = var_6;
                            arr_35 [19] [19] [0] [4] [i_6] [i_7 - 1] [i_6] = 1007045907;
                        }
                        for (int i_12 = 3; i_12 < 19;i_12 += 1)
                        {
                            arr_39 [i_6] = var_10;
                            arr_40 [i_1] [i_6] [i_6] [i_6] [i_7] [i_7] [i_12] = (((arr_34 [i_1] [i_6] [i_6] [i_1]) ? ((((arr_34 [i_7 + 1] [i_12 - 2] [i_6] [i_12]) || (arr_34 [i_7 + 1] [2] [i_6] [i_7 - 1])))) : ((-2063342579 % (arr_27 [i_12] [i_12 + 2] [i_7 + 2] [i_7 - 1] [i_7 + 2])))));
                        }
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            arr_45 [i_6] [i_6] = var_5;
                            arr_46 [i_6] [i_5] [i_5] [3] [i_5] [0] [11] = var_10;
                            arr_47 [i_1] [i_6] [i_5] [14] [i_7] [i_13 + 2] = (min((max((arr_11 [i_7 - 1] [i_5] [0] [i_7] [i_7] [i_13 - 1]), (arr_11 [i_7 - 1] [i_1] [i_1] [i_5] [i_13] [i_13 - 1]))), (arr_20 [i_6] [i_5])));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            arr_51 [i_6] = var_1;
                            var_24 = 15;
                            var_25 = (min(var_25, (arr_9 [i_5] [7] [i_14])));
                            arr_52 [i_1] [i_1] [i_1] [i_1] [i_6] = -var_0;
                        }
                    }
                }
            }
            var_26 = (arr_27 [i_1] [i_5] [i_1] [i_1] [9]);
            arr_53 [i_1] [2] [i_1] = var_0;
            var_27 -= var_10;
            var_28 = ((-1 ? 3967300625674477655 : 15));
        }
        /* vectorizable */
        for (int i_15 = 4; i_15 < 20;i_15 += 1)
        {
            var_29 = (((arr_16 [i_1] [i_1]) ? (arr_23 [i_1] [i_1]) : -7485));
            arr_57 [i_1] = (((arr_23 [i_15] [12]) ? (0 < 30377) : (arr_5 [i_15 - 3] [i_15 - 3])));
            var_30 = (((-848355975 - 1) ? ((((arr_44 [i_1] [8]) != var_6))) : var_4));
        }
        var_31 = ((598227012 ? var_2 : (min(((((arr_9 [i_1] [i_1] [10]) * var_10))), ((var_1 ? (arr_26 [i_1] [i_1]) : var_5))))));
        var_32 = (min(var_32, ((((((3967300625674477655 ? (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]) : ((min(var_3, var_9)))))) ? (((arr_21 [14] [14] [i_1] [i_1]) ? (arr_16 [i_1] [16]) : ((max(1, (arr_56 [i_1] [17] [i_1])))))) : var_4)))));
        var_33 = (((min((min(3967300625674477646, 848355975)), ((max(var_12, -2063342581)))))) ? 2063342581 : var_11);
    }
    var_34 = ((((~(~var_12))) >= var_2));
    #pragma endscop
}
