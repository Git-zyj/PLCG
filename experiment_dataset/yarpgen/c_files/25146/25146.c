/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_8 [1] [i_1] = ((124 + ((var_5 ? -7703100487933333364 : (arr_3 [i_0] [19] [i_0])))));
                        arr_9 [i_1] [i_1] [0] [8] = 1;
                    }
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        arr_13 [i_4] [i_1] [i_1] [10] = (max((arr_2 [i_0] [18]), (((!(arr_5 [0] [1] [14]))))));
                        arr_14 [10] [i_1] [i_1] [i_0] = ((var_8 ? ((((arr_2 [i_0 + 2] [i_0]) == (arr_6 [1] [i_1])))) : (arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 2])));
                        arr_15 [1] [i_2] [16] [20] [i_0] = (max(((((max(7, var_8)) >> (((var_9 / var_1) - 44280))))), ((-7703100487933333383 ? (min((arr_5 [0] [i_2] [i_4]), (arr_5 [i_4] [i_1] [i_0]))) : 3149594369869098661))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_18 [i_0] [i_5] [6] = ((var_0 * ((-((((arr_12 [16] [6] [i_1] [14]) <= (arr_7 [1] [i_1] [i_2] [i_5]))))))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] [i_2] [i_2] = ((!((max((32646 >= 28428), (min(47261, -10440)))))));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_2] [i_1] [i_1] [11] = (arr_10 [1] [12] [12] [i_0]);
                        arr_24 [13] [i_2] [15] [12] = ((13501 & (-6708741972678450419 % -20162)));
                        arr_25 [13] [i_2] [i_2] [i_6] [5] [i_2] = var_4;
                    }
                    arr_26 [i_0] [i_2] [22] [i_2] = 17911800370474821410;
                    arr_27 [i_1] [i_1] [4] = ((36894 && (~3783171533771827843)));
                    arr_28 [i_1] [i_0] = (arr_12 [i_0] [1] [i_1] [4]);
                }
            }
        }
    }
    var_19 |= var_4;
    #pragma endscop
}
