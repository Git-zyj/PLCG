/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((var_8 ^ var_1), ((((min(var_13, var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (max(((min(37, var_2)), (min((arr_2 [i_0] [i_0] [i_0]), (arr_0 [i_0] [9]))))));
                var_21 += (~var_12);
                arr_6 [i_1] [i_1] [i_1] = (!((((9223372036854775808 >> (((arr_0 [i_0] [i_0]) - 17930323892231875406)))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_2] [0] [i_1] = (!9223372036854775831);
                                var_22 = (max(var_22, ((max(9223372036854775794, (((!(arr_12 [i_4] [i_1 + 2] [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_0])))))))));
                                var_23 = ((((var_5 ? var_15 : (arr_7 [i_1 + 2]))) != 96));
                                var_24 = (min(var_24, (((-(((((var_11 ? 9223372036854775795 : var_9))) ? (arr_9 [3] [i_1] [i_2] [i_4 - 1]) : (max(9223372036854775808, var_0)))))))));
                                var_25 += (min(((9223372036854775774 ? (arr_4 [i_3 - 1] [i_3 - 1]) : var_9)), ((max((arr_11 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [7]), (arr_14 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [3]))))));
                            }
                        }
                    }
                    var_26 = (var_12 - 69);
                    arr_16 [1] [i_1] [6] [i_1] = (min((((arr_11 [i_2] [i_1 - 1] [i_1 + 2] [6] [i_1 + 2] [i_1 - 1]) ? (arr_4 [i_1 + 2] [i_1 - 1]) : 2502665217421178093)), ((max((arr_10 [i_1] [7] [i_1 + 2] [i_1 - 1]), (arr_11 [i_1 - 1] [i_1 - 1] [1] [1] [i_1 + 2] [i_1 - 1]))))));
                }
                var_27 = ((((max(-86, var_6)))));
            }
        }
    }
    var_28 = (((((min(var_15, 86)))) ? var_6 : ((var_5 ? var_6 : (min(var_6, var_15))))));
    #pragma endscop
}
