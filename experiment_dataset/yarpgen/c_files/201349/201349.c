/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_1 - 2] [i_3] = (((((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? ((((arr_9 [i_3] [i_2] [i_1] [i_0]) <= (arr_5 [i_0] [i_1] [i_2 + 3])))) : (arr_0 [i_2 + 3]))) > ((((~15842399509628883312) == (var_4 + 32767))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] |= ((+((((((arr_5 [i_0] [i_1 + 1] [i_2]) == -5346))) + 0))));
                        var_17 *= ((arr_6 [i_2] [i_1] [i_2] [i_3]) ? ((~(arr_5 [i_2 + 2] [i_1] [i_1 - 1]))) : (((((var_5 ? var_14 : (arr_6 [i_0] [i_1 - 1] [i_1] [i_3])))) ? (((((arr_6 [i_0] [i_1] [i_2] [i_3]) && (arr_8 [i_3] [i_3] [i_3]))))) : ((var_10 ? var_1 : (arr_5 [i_1] [i_2] [i_3]))))));
                        arr_12 [i_3] = ((~((((63579 < (arr_9 [i_3] [i_2] [i_1] [i_0]))) ? ((((32767 >= (arr_7 [i_3] [i_1] [i_2 + 2] [i_3] [i_0] [i_0]))))) : (((arr_1 [i_1] [i_1]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : 2022281697))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] = (((var_11 ? var_5 : -1843396698)));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_4] = ((-1924165074 && (var_14 / var_0)));
                        arr_18 [i_4] [i_2 + 2] [i_1] [i_0] = 2022281697;
                    }
                    arr_19 [i_0] [i_1 - 1] [i_2] = ((~((((arr_13 [i_2 + 2] [i_2] [i_1] [i_0] [i_0]) >= -29763)))));
                    var_18 = (max(var_18, ((((32765 ? -24464 : (arr_13 [i_2] [i_2] [i_1] [i_1 - 2] [i_0])))))));
                    arr_20 [i_0] [i_2] = ((-((~((var_15 ? var_12 : -32757))))));
                }
            }
        }
    }
    var_19 = (max(var_19, (((var_3 > (var_6 >= var_13))))));
    #pragma endscop
}
