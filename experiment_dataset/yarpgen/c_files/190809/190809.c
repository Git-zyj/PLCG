/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (((((0 >= (arr_3 [i_1] [i_1] [i_0])) ? ((var_6 ? (arr_3 [i_0] [8] [7]) : var_8)) : (!25794)))));
                arr_5 [i_0] [i_1] [i_0] = ((~(arr_0 [i_0])));
                var_12 = (-71 ? 25805 : 2838);

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_13 += ((((-(arr_7 [i_0] [i_0] [i_1]))) <= var_1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((-(min((((8582 / (-127 - 1)))), 4294967295))));
                                arr_15 [i_0] [i_1] [i_0] [7] = ((~(min(var_1, (arr_0 [i_0])))));
                            }
                        }
                    }
                    var_15 = (arr_9 [i_0]);
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((-(min((2030138416 / 25787), (arr_9 [i_1])))));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_16 -= ((1 ? (((17456172179406365592 ? var_4 : (arr_11 [i_0] [i_1] [i_1] [i_1] [i_0])))) : ((((-25805 ? var_4 : var_2)) * ((990571894303186020 ? (arr_1 [i_5]) : 21868))))));
                    var_17 = arr_10 [i_0] [i_1];
                    arr_19 [i_0] = arr_13 [i_0] [i_1] [i_1] [i_1] [i_1];

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] = (min(990571894303186029, 1));
                        arr_24 [i_0] [i_0] = (~17456172179406365586);
                        var_18 = var_10;
                        var_19 += (((((~(((arr_9 [i_0]) ? -25820 : var_0))))) ? ((~((min(0, var_8))))) : (((((16149 ^ (arr_0 [1])))) ? 52068 : ((((arr_13 [i_5] [i_5] [i_5] [4] [i_5]) <= (arr_4 [i_0] [i_5] [i_6]))))))));
                    }
                    var_20 -= (min((((arr_11 [i_0] [i_1] [i_5] [i_5] [i_5]) ? 17456172179406365586 : (arr_11 [i_0] [i_0] [i_5] [i_0] [i_5]))), var_10));
                }
            }
        }
    }
    var_21 = min(((var_6 ? ((var_5 ? var_3 : var_10)) : var_6)), var_8);
    var_22 = (var_1 && var_3);
    #pragma endscop
}
