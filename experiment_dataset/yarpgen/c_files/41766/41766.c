/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2 - 1] [i_0] [i_4] [i_2 - 1] = (arr_7 [i_0 - 2] [1] [i_2 - 1] [i_4]);
                            arr_18 [i_0] [i_1] [i_0] = ((-(arr_6 [i_0 - 2] [i_2] [2] [i_4])));
                            var_20 = (!1);
                            arr_19 [i_0] [i_1] [i_2] [8] [i_4] = ((!(arr_6 [i_0 - 2] [i_2 + 1] [i_2] [0])));
                        }
                        var_21 = (arr_15 [i_0] [i_0] [4] [4] [i_0]);
                        var_22 = 1;
                        arr_20 [i_0] [i_0] [i_0] [i_1] [i_1] = ((-(arr_12 [i_0] [i_1] [i_0] [i_1] [i_1])));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_23 = (((arr_4 [i_0] [i_5]) ? 1 : ((1 | (-9223372036854775807 - 1)))));
                        arr_24 [i_0] [1] = 23982;
                        var_24 = (arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_0 - 1]);
                        var_25 = ((var_11 * (((((arr_5 [10]) < (arr_4 [i_1] [i_5])))))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_26 = (-(arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]));
                        arr_27 [i_0] [i_0] [i_2] = ((arr_1 [i_0]) ? ((32767 ? var_5 : (arr_9 [i_0] [9] [5] [i_6] [i_6]))) : (((arr_2 [i_0]) - var_12)));
                        var_27 = -23973;
                        var_28 = ((!(!23975)));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_29 = (((((var_16 ? (arr_21 [i_0] [i_1] [9] [i_2] [i_2]) : -23976))) && var_16));
                        var_30 = (((((var_3 ^ (arr_14 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_1] [i_0] [i_0])))) || (arr_25 [i_0] [i_0] [i_0] [i_0] [12] [i_7])));
                    }
                    var_31 = (arr_1 [i_0]);
                }
            }
        }
        arr_30 [i_0] [i_0] = var_1;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                {
                    var_32 = (((arr_9 [i_0] [i_0 - 2] [i_0 - 2] [i_8] [11]) ? var_4 : (arr_34 [i_0] [i_8] [i_9 + 2] [i_0 - 2])));
                    var_33 = (((arr_35 [i_0] [0] [i_0] [i_0]) ^ ((-1 ? var_7 : 32767))));
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_41 [i_0] [i_8] [i_9] [i_9] [i_9] |= (arr_23 [1] [i_8] [i_11 - 1]);
                                var_34 = ((!(arr_32 [i_9 + 3] [i_9 + 1])));
                                var_35 = (((arr_10 [i_9] [i_9 + 3] [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9]) ^ -32767));
                                var_36 = (arr_38 [i_0 - 2] [i_0] [i_0 - 2] [i_9 + 3] [i_10 + 3]);
                            }
                        }
                    }
                }
            }
        }
        arr_42 [i_0] [i_0] = (arr_32 [i_0 - 1] [i_0]);
    }
    var_37 = 9579;

    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                {
                    arr_52 [i_12] [i_12] [i_12] [i_14] = min(var_6, ((((arr_49 [i_13] [i_13]) < ((var_1 ? (arr_48 [i_12]) : (arr_44 [i_12])))))));
                    var_38 = ((((max((!12619), (((arr_51 [i_12] [i_13] [i_12] [i_14]) ? var_3 : var_18))))) ? (max((min(var_7, var_8)), (arr_46 [i_12] [8]))) : ((max(((var_16 ? var_17 : (arr_50 [i_12] [i_13] [i_13]))), ((max((arr_44 [11]), (arr_43 [i_12] [i_13])))))))));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 16;i_16 += 1)
                        {
                            {
                                var_39 = (arr_57 [i_13]);
                                arr_60 [4] = (arr_47 [i_12] [i_13] [i_16]);
                                arr_61 [i_12] [i_13] [i_13] [i_13] [i_13] [i_16] = (arr_50 [i_16 - 2] [i_13] [13]);
                            }
                        }
                    }
                    var_40 = ((!((((-32754 ? 1 : 123))))));
                }
            }
        }
        arr_62 [i_12] = (0 ? ((((((arr_44 [i_12]) ? (arr_58 [i_12] [12] [i_12] [i_12] [i_12]) : (arr_51 [i_12] [i_12] [i_12] [i_12])))) ? var_6 : var_12)) : ((((arr_44 [i_12]) ? ((1 ? 255 : (arr_51 [i_12] [i_12] [i_12] [12]))) : ((var_8 ? 37378 : -249586839))))));
        var_41 = ((-((6003 ? -var_8 : (((arr_56 [i_12] [i_12] [i_12] [i_12] [i_12]) ? var_10 : 1))))));
    }
    var_42 = ((!((min((var_8 / var_5), var_6)))));
    #pragma endscop
}
