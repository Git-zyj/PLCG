/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = ((((((min(var_11, var_16)))) + 2757880706)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (((18 || 82) >= (arr_2 [i_0])));
        var_22 = (((((~((min(1, (arr_2 [8]))))))) ? (min((min((arr_1 [i_0]), 1478427369)), ((max((arr_0 [3]), (arr_2 [i_0])))))) : (((((var_11 < (arr_0 [i_0])))) << (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = (((((arr_6 [i_0] [i_0]) + (arr_4 [i_1])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_23 = (arr_2 [10]);
                            var_24 = (((arr_1 [8]) ? (min((min(var_3, var_18)), (((arr_5 [i_4] [i_1] [i_4]) - (arr_11 [i_0] [i_0] [i_3] [i_3]))))) : (arr_10 [0] [0] [0] [i_3] [i_1])));
                        }
                    }
                }
            }
            var_25 = var_16;

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_26 = (arr_4 [i_1]);
                arr_16 [i_0] [i_0] [i_1] [i_5] = (((((-var_16 <= (min((arr_3 [i_1]), (arr_15 [i_0] [i_1] [i_1] [i_5])))))) / ((-(arr_15 [i_5] [i_1] [i_1] [i_0])))));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_27 = (((-1 - (arr_9 [i_1] [i_1]))));
                var_28 ^= ((((~((var_18 ? var_7 : var_2)))) <= ((((((-(arr_0 [i_0])))) ? -254 : ((min(var_6, (arr_6 [i_1] [i_1])))))))));
            }

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_29 = ((((((arr_15 [i_0] [i_1] [i_0] [i_0]) || (arr_9 [i_1] [i_7])))) != (min((((86 >= (arr_5 [i_0] [i_1] [i_1])))), (((arr_3 [i_0]) ? (arr_19 [5] [i_0] [i_1] [5]) : (arr_14 [2] [i_0] [i_1])))))));
                arr_21 [i_0] [i_1] [i_7] [i_7] = (((arr_18 [i_1] [i_1] [i_7] [i_7]) ? (arr_18 [i_1] [i_1] [i_7] [i_7]) : (arr_18 [i_1] [i_1] [i_1] [i_7])));
            }
        }
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            arr_25 [i_0] [2] = ((((-(arr_6 [i_0] [i_0]))) <= (((arr_0 [i_8 + 1]) - (arr_2 [i_0])))));
            arr_26 [i_8] = (arr_12 [i_8] [i_8] [i_8 + 2] [i_8]);
            arr_27 [i_8 + 2] = (arr_1 [i_8]);
        }
        arr_28 [i_0] [1] = (arr_14 [i_0] [i_0] [0]);
        arr_29 [i_0] = ((arr_5 [i_0] [0] [i_0]) ? ((-(arr_19 [i_0] [i_0] [i_0] [3]))) : ((((arr_1 [i_0]) || ((((arr_6 [i_0] [i_0]) ^ (arr_4 [8]))))))));
    }
    #pragma endscop
}
