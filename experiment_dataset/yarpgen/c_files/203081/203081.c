/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_19 = (var_9 - var_4);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_15 [i_0 + 2] [i_1 - 3] [i_1 - 3] [i_2 - 1] [i_3] [i_1] [i_4] = ((var_9 * (arr_8 [i_0 + 4] [i_1])));
                            var_20 = (max(var_20, (arr_14 [i_2 - 1] [i_3 - 2] [i_3 - 2] [i_4 + 1] [i_4] [i_3])));
                            var_21 += (169 + 0);
                            arr_16 [i_1] = ((-((((arr_14 [i_0 + 3] [i_1] [i_1] [i_1] [i_3 - 2] [i_1]) < (arr_2 [i_0 + 4]))))));
                        }
                    }
                }
            }
        }
        arr_17 [i_0] &= (((-(arr_1 [i_0 + 3] [i_0 + 3]))));
        var_22 = (min(var_17, var_10));

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_23 = (min(((((arr_0 [i_7]) ? var_6 : (arr_3 [i_0] [i_0])))), 1));
                        var_24 = (((~var_4) >= (!var_10)));

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_25 = (min((max(((-(arr_0 [i_7]))), ((max((arr_20 [i_6] [4] [i_6]), (arr_11 [7] [8] [i_6] [i_6])))))), (((max(-24781, (arr_0 [i_0]))) % (arr_1 [i_0 + 4] [i_0 + 4])))));
                            var_26 = (((var_10 & (((arr_21 [9] [9] [i_7]) ? (arr_7 [i_0 + 3]) : (arr_4 [i_8] [i_6] [i_5]))))));
                        }
                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_27 = var_8;
                            var_28 |= ((((arr_12 [i_0 + 1] [i_0 + 4] [i_0 + 3] [i_6 - 1] [i_9 - 2]) - 1)) - var_7);
                            arr_34 [i_9 - 2] [i_7] [i_6] [i_5] [2] = ((arr_19 [i_0 + 4] [i_5]) / (((arr_19 [5] [i_6 + 1]) ? (arr_19 [i_0 + 3] [i_5]) : (arr_19 [i_5] [i_5]))));
                        }
                        var_29 *= ((-((-(arr_27 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 4] [i_0 + 2])))));
                    }
                }
            }
            arr_35 [i_0] [i_0] = (~(((((~(arr_13 [i_0] [i_5] [i_0 + 2] [i_5] [i_5])))) ? 243 : (((arr_32 [i_0] [10] [10] [i_5] [12] [13]) ^ (arr_30 [i_0] [i_0] [3] [i_5] [i_5]))))));
            var_30 += (arr_0 [3]);
            var_31 = (-24781 || (arr_31 [i_0] [0] [i_0] [i_0 + 4] [i_0] [i_5]));
        }
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        var_32 ^= ((((arr_37 [i_10]) / var_16)));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    var_33 = (((((var_9 * 8191) * ((var_12 * (arr_42 [i_10] [10] [i_11] [i_12])))))) ? 360416123 : (max(((max(0, var_12))), (((arr_38 [i_10]) - 7083772694456366396)))));
                    var_34 = (min((max((arr_36 [i_10]), (arr_36 [i_10]))), (((arr_36 [i_10]) + 13899))));
                    var_35 = (min(var_35, (((max(-511, (-7083772694456366397 ^ -7083772694456366397)))))));
                    var_36 = (arr_38 [i_10]);
                }
            }
        }
        var_37 = ((~((((min(var_10, -8))) ? (arr_44 [i_10] [16] [i_10]) : (arr_38 [i_10])))));
    }
    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        var_38 = (min(var_38, ((((((~((var_17 ? (arr_27 [i_13] [i_13] [4] [i_13] [i_13 + 2] [i_13 - 1]) : -4))))) ? 20596 : (((((max((arr_6 [i_13 + 1]), var_18))) < (var_13 << 1)))))))));
        var_39 = (max((((max((arr_9 [i_13] [i_13 - 1]), var_8)))), (arr_29 [i_13])));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        arr_51 [i_14] [i_14] = (((arr_47 [i_14]) ? 0 : (arr_47 [i_14])));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                {
                    arr_58 [i_14] [i_14] [i_15] = var_18;
                    var_40 &= ((-var_17 > (!21324)));
                    var_41 = ((!(arr_56 [i_15 - 1] [i_15] [i_15 - 1])));
                }
            }
        }
    }
    var_42 = (min(var_42, ((-(!-var_10)))));
    #pragma endscop
}
