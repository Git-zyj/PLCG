/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_5;
                    arr_9 [i_0] [i_0 - 1] [i_0] [i_2] = ((arr_7 [i_0 - 1] [i_2 - 2] [i_2] [6]) / (arr_7 [i_0 + 1] [i_2 + 4] [3] [i_2]));
                }
            }
        }
        var_17 = ((-(arr_3 [i_0 - 1] [i_0])));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (max(((-(((arr_10 [i_3] [i_3]) ? (arr_11 [i_3]) : var_5)))), (arr_11 [i_3 - 1])));
        var_18 &= ((arr_11 [i_3]) ? (((!(((-1656880552 ? (arr_10 [4] [4]) : (arr_11 [i_3]))))))) : (arr_10 [10] [i_3]));
        var_19 -= (arr_11 [i_3 + 2]);
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_20 = var_13;
        var_21 = (((max((~var_12), 94)) * 0));
        arr_17 [i_4] = (658839750 * ((((((arr_11 [i_4]) ? var_7 : (arr_15 [16])))) ? (~1) : var_9)));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                arr_26 [2] = var_11;
                arr_27 [i_5] [i_6] [13] [i_5] = (((arr_19 [i_5]) ? (((20307 ? 5492 : 658839763))) : ((var_16 ? 1863151258886702109 : var_14))));

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_31 [i_5] [i_6] [i_7] [i_8] |= ((!(arr_23 [i_5])));
                    arr_32 [14] [10] [10] = -4864396965310723352;
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_22 |= (~(arr_22 [i_6] [i_6 + 1] [12]));
                    var_23 = (arr_18 [i_9]);
                }
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    var_24 = (((arr_19 [i_5]) ? (~82) : 126));

                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        arr_41 [i_11] [i_6] [3] [i_6] [i_5] = (arr_22 [i_6] [i_10 + 1] [i_11 + 2]);
                        arr_42 [i_5] [i_6] [i_10] [11] = (152 ? ((~(arr_24 [i_5] [i_5] [i_5]))) : -658839750);
                        var_25 = ((-2147483643 ? (arr_30 [i_10] [i_10] [7] [i_10 - 1] [16]) : var_12));
                    }
                }
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                var_26 = ((var_13 ? (arr_21 [i_5] [i_5]) : (arr_36 [i_5] [i_6 + 2] [2] [i_6 - 1] [2])));
                var_27 = (112 < 1);
                var_28 = ((32767 || (arr_38 [i_5] [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 1])));
                arr_45 [i_12] = arr_14 [i_5] [i_5];

                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    arr_49 [i_12] [i_5] = (arr_24 [i_6 - 1] [i_6] [i_13 - 1]);
                    var_29 = ((65523 ? 3872 : ((-510946235 ? 1 : -6331250404339260103))));
                    arr_50 [i_5] [1] [1] [i_12] [13] = (((arr_30 [i_5] [0] [i_6 + 2] [i_13 + 1] [i_13]) <= (arr_36 [10] [i_6] [i_6 + 2] [i_13 + 1] [i_13])));
                }
            }
            arr_51 [1] [i_6] [i_6] = var_0;
        }
        arr_52 [2] = (min((arr_15 [i_5]), ((-(arr_23 [i_5])))));
        var_30 = (min(var_30, ((((-20307 - 0) ? (max((arr_11 [5]), ((((arr_29 [i_5] [i_5] [i_5] [15]) + 18372))))) : ((((((max(var_16, var_9))) || (arr_40 [i_5]))))))))));
    }
    var_31 = (((((var_8 ? (!-6331250404339260097) : var_9))) ? 722388409 : ((max(-var_3, var_10)))));
    var_32 = var_8;
    #pragma endscop
}
