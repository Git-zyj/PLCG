/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((var_4 * (var_9 * 15573286668132155858)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    var_14 &= (((((((arr_7 [i_0] [i_1] [i_2]) == var_3)))) >= (arr_3 [i_2 - 1])));
                    var_15 &= (!1);
                }
                var_16 -= (-(min(2873457405577395757, ((((arr_5 [i_0]) <= (arr_7 [i_0] [i_0] [i_0])))))));
                arr_8 [i_0] = (min((((max(var_12, var_0)))), (arr_6 [i_1] [5] [5])));

                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    var_17 &= (arr_0 [i_0] [i_0]);

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_1] [17] &= (arr_10 [i_4] [i_1] [i_1] [i_0]);
                        var_18 = (arr_5 [i_0 + 2]);
                        var_19 = arr_6 [i_4] [i_3] [i_1];
                        var_20 ^= ((-var_4 ? (((!(arr_5 [i_0 + 4])))) : ((min((arr_5 [i_0 + 2]), (arr_5 [i_0 + 1]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_21 = (max(var_21, (var_7 * var_0)));
                        var_22 = (max(var_22, (((((var_8 != (arr_6 [i_3] [i_3] [i_0]))) ? (arr_6 [i_0] [i_0 + 3] [i_0 + 3]) : var_3)))));
                        var_23 = (-(arr_1 [i_0 + 4]));
                        var_24 &= ((!(arr_0 [i_0 + 3] [i_3 + 1])));
                    }
                    var_25 ^= ((((((-(arr_12 [i_0] [i_0] [i_0]))))) | (((!-19) ? var_8 : (min((arr_1 [i_1]), (arr_16 [i_0] [i_0] [i_0] [i_1])))))));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_26 += (((~(arr_9 [i_0] [i_0 + 4] [i_0] [i_0 + 4]))));
                    arr_19 [i_0] [i_0] [i_6] [i_0] &= (arr_5 [i_1]);
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_27 = (max(var_27, ((((((-(arr_15 [i_9] [i_9] [i_7] [i_9])))) ? (max((min(var_11, 2873457405577395768)), 137438953471)) : (((((arr_22 [i_9] [5] [i_7] [i_1] [i_0]) * (arr_23 [i_7] [i_1] [i_7] [i_7]))) % (((var_6 ? (arr_25 [i_7] [i_7]) : var_10))))))))));
                                var_28 ^= (max((((((var_2 ? (arr_16 [i_1] [i_7] [i_8] [13]) : (arr_5 [i_1])))) % ((0 ? (arr_16 [4] [4] [i_0] [i_0]) : 2873457405577395737)))), ((((max(15573286668132155872, 1)) <= (min(2873457405577395758, 60193)))))));
                            }
                        }
                    }
                    var_29 = (min(var_29, (((((((arr_5 [i_0 + 1]) >= (arr_3 [i_0 + 4])))) == ((((arr_20 [i_0] [i_0] [i_0]) <= var_8))))))));
                }
                arr_26 [i_0] [i_0] [i_0] = (((((6713387245842409216 ? (arr_11 [i_0] [i_0 + 1] [i_0 + 4] [i_1] [i_1]) : (arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))) ? ((((!(arr_5 [i_0 + 1]))))) : (min((arr_11 [1] [i_1] [i_1] [i_0] [i_0 + 1]), 12006844342537932594))));
            }
        }
    }
    #pragma endscop
}
