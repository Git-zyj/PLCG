/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [17] = -93;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [2] [i_0] = ((!((min((arr_1 [i_1]), -15952)))));
            var_19 = var_4;
            var_20 = ((-24755 ? (((!(arr_0 [i_0])))) : ((min(31163, 34372)))));
            arr_8 [i_0] [i_0] = ((!((((((arr_5 [i_0] [15] [i_0]) != (arr_1 [i_1]))) ? (arr_4 [21] [21] [14]) : ((~(arr_1 [i_1]))))))));

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                arr_11 [i_2] [i_1] [i_1] = ((((var_17 && (arr_5 [i_2] [i_2 + 4] [19]))) ? ((min((var_13 / var_10), ((max(var_2, (arr_10 [i_1]))))))) : ((~(((arr_9 [i_0] [i_0]) * (arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_21 = (((((min((arr_14 [i_0] [i_0] [i_0] [i_2] [i_0]), 18446744073709551598)))) ? (arr_2 [i_0]) : ((~((450 / (arr_1 [i_1])))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((~(max((arr_0 [i_3 - 1]), (min(57379, var_0))))));
                            var_22 = ((!((((((arr_16 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1]) + 2147483647)) << (((((arr_12 [i_2 + 1] [i_2 + 3] [i_2] [i_2 - 1]) + 25435)) - 22)))))));
                            var_23 = (min(var_23, ((max((arr_14 [i_3] [i_3] [i_3] [i_3] [i_3 - 1]), var_4)))));
                        }
                    }
                }
            }
        }
        var_24 = (arr_2 [i_0]);
        arr_18 [i_0] = (max(((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [10]) : 2147483647))), ((max((arr_16 [1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((((arr_5 [i_0] [i_0] [8]) || var_18))))))));
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        var_25 = ((!((!(arr_19 [i_5 + 1])))));
        var_26 += ((((min((arr_19 [i_5]), var_11))) ? (((arr_19 [i_5 - 2]) ? (-103 / var_15) : ((-(arr_19 [i_5]))))) : (arr_19 [i_5 - 1])));
    }
    var_27 += var_15;
    #pragma endscop
}
