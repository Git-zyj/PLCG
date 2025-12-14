/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (((min((arr_0 [i_0] [1]), (arr_0 [i_0] [i_0])))) / ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = (((((-(arr_1 [i_0])))) ? 776197029 : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_13 *= (min(0, (((arr_11 [i_3 + 1] [0] [1] [i_1] [0] [i_1]) ? (arr_8 [0] [0] [i_3 - 1] [0]) : (arr_8 [12] [12] [i_3 + 1] [12])))));
                        arr_12 [i_0] = ((((!var_0) ? (((arr_10 [9] [9] [9] [9]) ? 1 : var_6)) : ((min(1, (arr_0 [i_0] [i_0])))))));
                        arr_13 [i_0] [1] = (min(((~(!var_6))), (arr_9 [6] [4] [4] [2] [i_0])));
                    }
                }
            }
            var_14 = ((var_7 ? (min((arr_0 [i_0] [i_0]), ((-776197055 / (arr_8 [i_0] [8] [10] [4]))))) : (((27 ? 13532 : 1)))));
        }
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        arr_17 [1] = ((((((arr_14 [i_4 - 2]) / var_6))) ? ((var_0 ? (arr_14 [i_4 + 3]) : (arr_14 [i_4 + 2]))) : (((arr_14 [i_4 + 2]) ? (arr_14 [i_4 - 1]) : (arr_14 [i_4 - 1])))));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_15 = var_3;
                arr_23 [i_4] [7] [7] = ((~((((min((arr_15 [i_6]), 2232097576885125999))) ? 1 : (~var_6)))));
            }
            arr_24 [1] [12] [12] = min(var_1, ((min(1, 15))));
            arr_25 [i_4] = arr_15 [13];
        }
        arr_26 [i_4] = ((~(arr_22 [i_4 - 2])));
        arr_27 [1] [21] = ((~(((arr_19 [i_4 + 2] [i_4]) ? (arr_19 [i_4 + 4] [i_4 + 2]) : (arr_19 [i_4 + 4] [i_4 - 2])))));
        var_16 = (max(var_16, ((min((min((arr_15 [i_4 + 3]), (arr_15 [i_4 + 3]))), (arr_15 [i_4 + 3]))))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_17 = ((-var_9 | (((arr_29 [i_7]) ? (arr_29 [i_7]) : (arr_30 [21])))));
        arr_31 [i_7] = ((arr_29 [9]) ? ((var_0 - (arr_29 [i_7]))) : (arr_29 [5]));
    }
    var_18 &= min(var_3, var_0);
    var_19 ^= ((var_6 ? 0 : 2232097576885125999));
    #pragma endscop
}
