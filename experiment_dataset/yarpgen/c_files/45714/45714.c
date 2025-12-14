/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 += ((((((arr_2 [i_0] [i_0]) ? (min((arr_2 [1] [5]), 3589661832)) : ((((-2147483647 - 1) ? -61919865 : (arr_0 [10] [i_0]))))))) || (~-42)));
        var_14 = (max(var_14, ((max((((!((!(arr_1 [i_0])))))), (arr_0 [6] [6]))))));
        var_15 = ((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) ? (min((arr_1 [4]), (arr_1 [i_0]))) : ((((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 = ((arr_3 [i_1]) > (arr_4 [i_1 - 2]));
        var_17 ^= ((-var_4 == ((-(arr_4 [i_1])))));
        var_18 = ((~(((-188816268 + 2147483647) >> (188816291 - 188816260)))));
        var_19 = ((arr_4 [i_1]) ? (((arr_3 [2]) ? 17 : 0)) : (((arr_3 [i_1]) ? -188816293 : (arr_4 [i_1]))));
        arr_5 [i_1] = var_1;
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((((var_3 ? (arr_4 [i_2 - 2]) : (arr_3 [i_2 - 2]))) <= (((((-(arr_8 [i_2] [i_2])))) ? -61919864 : (arr_6 [i_2 + 2]))))))));
        var_21 += (max(((var_3 + (arr_3 [i_2]))), (min((var_7 + -188816308), -188816292))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_22 = (((-2147483647 - 1) ? 2147483641 : 17655));
                        var_23 = (max(var_23, ((max((((arr_7 [i_4]) ? 2007 : var_7)), ((((arr_12 [12]) || (arr_7 [i_4])))))))));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_23 [i_7] [12] [i_4] [i_4] [i_3] = ((-((-188816293 ? (arr_2 [1] [i_7]) : var_3))));
                        arr_24 [i_3] [i_3] [1] [1] = (arr_10 [i_3] [i_3]);
                        var_24 = ((-(arr_2 [i_3] [i_3])));

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 12;i_8 += 1)
                        {
                            var_25 = (min(var_25, ((((arr_0 [i_3] [4]) ? (arr_11 [i_5] [i_4]) : 1)))));
                            arr_28 [i_3] [i_8] [i_5] [i_8] [i_3] = (((((arr_16 [i_7]) ? var_8 : var_5)) | (arr_22 [i_3] [i_8 - 1] [i_8 - 3])));
                        }
                        arr_29 [i_7] [i_5] [7] [i_3] = (((-((-125 ? 130 : (arr_21 [1] [5] [i_3] [i_3]))))) < ((~(((0 == (arr_11 [i_3] [i_3])))))));
                    }
                    var_26 *= (min((((arr_25 [i_3] [i_3] [i_4] [i_5] [i_5]) ? (arr_10 [i_5] [i_4]) : (arr_15 [i_3]))), (((((arr_7 [i_5]) ? var_1 : -46))))));
                    arr_30 [i_5] [i_4] [i_3] = (arr_11 [4] [i_3]);
                    var_27 = ((((((arr_21 [i_3] [10] [i_4] [i_4]) ? (arr_21 [i_3] [i_3] [i_5] [i_3]) : (arr_21 [i_5] [i_5] [i_5] [i_5])))) ? ((((arr_21 [i_3] [i_3] [6] [i_3]) ^ var_9))) : (max((arr_21 [i_3] [i_3] [i_4] [i_5]), 12))));
                    var_28 = ((((((max((arr_26 [i_5] [i_5] [i_5] [i_3] [i_4]), var_8)) - (var_6 + 188816291)))) ? (((-2147483647 - 1) ? (((arr_16 [i_4]) ? (arr_3 [i_4]) : var_1)) : var_2)) : ((-(arr_0 [i_5] [i_5])))));
                }
            }
        }
    }
    #pragma endscop
}
