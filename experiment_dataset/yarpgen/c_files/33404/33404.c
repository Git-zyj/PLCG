/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [5] [5] = ((var_19 ? (arr_0 [i_0] [i_0 - 1]) : (((arr_1 [i_0 - 1] [i_0]) ? (arr_2 [i_0]) : (max(var_19, (arr_2 [10])))))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_20 |= (((((arr_2 [i_1 + 1]) == (arr_0 [i_1 + 1] [4]))) ? (min(var_13, (arr_5 [i_0 - 1] [i_0 - 2]))) : (((((((((arr_1 [5] [9]) < (arr_1 [i_0] [i_0]))))) == (min((arr_4 [2]), var_2))))))));
            var_21 -= (max(((min((arr_0 [i_0 - 2] [i_0 - 2]), (arr_0 [i_0 - 2] [i_0 - 2])))), (((arr_5 [i_0 - 2] [i_0 - 2]) ? (arr_2 [i_0 - 2]) : (arr_5 [i_0 - 2] [i_0 - 2])))));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0 + 1] [i_2] = ((min(-var_2, (arr_6 [i_0] [i_0] [i_2 + 1]))));
            var_22 = (((arr_6 [i_0] [i_0 - 2] [i_2 + 1]) ? (((arr_2 [i_0 + 1]) & (arr_2 [i_2 + 2]))) : (min(var_5, (((arr_7 [i_2]) ^ (arr_4 [i_0])))))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_12 [1] [5] [i_2] [i_0 + 1] = ((+(min((arr_2 [3]), (arr_2 [i_2 + 1])))));
                var_23 += ((var_8 ? (min((((arr_10 [i_0] [i_2] [i_0] [i_2]) ? (arr_6 [5] [i_2] [i_2]) : (arr_0 [i_0] [i_0]))), ((var_9 ? (arr_0 [i_2] [i_3]) : var_3)))) : (min(var_12, (((arr_2 [i_0]) ? (arr_6 [i_0] [i_2 + 1] [i_3]) : (arr_7 [i_0])))))));
                arr_13 [3] [i_2] [i_2] = (min((((((((arr_2 [i_2]) ? var_1 : var_13))) ? (((arr_10 [i_0] [6] [i_2] [i_3]) * (arr_11 [i_0 - 2] [i_2 + 1] [i_2] [i_0]))) : ((min((arr_10 [i_0] [i_0] [i_2] [i_0]), (arr_11 [i_0] [i_0] [i_2] [i_2]))))))), (min((((arr_2 [i_0]) / var_9)), (((arr_6 [i_3] [6] [6]) / (arr_6 [i_2] [i_2] [1])))))));
            }
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0 + 1] [i_4] = var_19;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    {
                        arr_21 [i_4] [i_4 + 1] [i_5] [5] = ((((181731662 ? 14 : (arr_7 [i_6 - 2])))) ? (((arr_7 [i_6]) ? var_14 : (arr_7 [i_4 + 1]))) : (arr_7 [i_0 + 1]));
                        var_24 += (arr_15 [6] [6]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        {
                            arr_31 [i_7] [i_4] [i_0] [i_8] [i_7] = (arr_9 [i_0]);
                            arr_32 [i_4] [i_7] = (((((((var_13 && (arr_15 [i_0] [i_4]))) ? ((var_16 ? var_5 : var_5)) : (arr_30 [i_0] [i_7] [i_7] [i_8])))) && ((((~var_3) & ((var_12 ^ (arr_9 [i_0]))))))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
        {
            arr_35 [i_0] = ((!((((arr_11 [i_10 + 1] [i_0 - 2] [i_0] [6]) ? (arr_11 [1] [i_0 - 2] [i_0] [i_0]) : (arr_11 [10] [i_0 - 1] [i_0] [i_0 - 1]))))));
            arr_36 [i_0] [i_0] [i_0] = (((arr_24 [i_0] [6] [i_0] [i_0]) ? (min((arr_7 [i_0 - 1]), (arr_7 [i_0 - 1]))) : (max((!var_1), var_10))));
        }
    }
    for (int i_11 = 2; i_11 < 18;i_11 += 1)
    {
        arr_39 [i_11] [i_11 - 2] = (((((arr_37 [i_11 + 1]) / (((arr_38 [i_11] [12]) ? (arr_37 [14]) : (arr_37 [16])))))) ? ((var_18 * (((arr_37 [15]) ? (arr_38 [i_11 - 1] [i_11]) : var_4)))) : ((((((arr_38 [i_11] [9]) / (arr_37 [i_11])))) ? (min(var_6, var_3)) : (((max((arr_37 [i_11]), (arr_37 [i_11 + 1]))))))));
        arr_40 [14] = (((arr_37 [i_11 - 1]) ^ ((~(((arr_38 [i_11] [i_11 + 1]) ? (arr_37 [i_11]) : (arr_37 [10])))))));
    }
    var_25 ^= ((((var_16 ? (var_15 ^ var_9) : var_18))) ? (min((max(var_4, var_15)), -var_18)) : ((-((var_16 ? var_18 : var_13)))));
    #pragma endscop
}
