/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 22;i_4 += 1)
                            {
                                var_11 = ((~((((var_7 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_1] [i_0])))))));
                                arr_15 [i_3] [i_3] = (((~(arr_1 [i_4 + 2]))));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                            {
                                var_12 = (((((511 + (531 - 802630885)))) ? (((((((arr_5 [i_0]) < var_1))) <= (((!(arr_5 [i_0]))))))) : var_10));
                                var_13 = var_2;
                                var_14 = (((((var_2 | var_4) ? (arr_10 [i_2 - 2] [i_2] [i_2 + 3] [i_2 - 2]) : var_0)) >= (arr_0 [i_2])));
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                            {
                                var_15 ^= (max((max((!var_4), (arr_3 [i_2 - 2] [i_2 + 2]))), ((((arr_20 [i_0] [10] [i_1] [i_2 - 2] [i_3] [i_3] [i_6]) * var_2)))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((!((max((arr_1 [i_2]), var_0))))))) - (((arr_11 [i_2 + 1] [i_2 - 3] [i_2 + 3]) / (arr_16 [i_2 + 2] [i_2 - 2] [i_2 + 3] [i_2] [i_2 + 2] [i_6])))));
                                var_16 = ((~((~(arr_19 [i_2 + 3] [i_2 - 1] [i_3] [i_6] [20])))));
                                var_17 = (((((arr_13 [i_0] [i_1] [i_2 - 2] [i_2] [i_2 - 2]) << (var_5 + 4076394505412985075))) <= (arr_13 [i_0] [i_1] [i_2 - 2] [15] [i_6])));
                            }
                            var_18 = (max(((((var_3 & (arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2 - 1] [i_3]))) << (var_3 - 5351925080495871654))), (((((max(var_10, (arr_7 [i_0] [i_1] [i_1])))) ? var_0 : var_0)))));
                            var_19 = (min(var_19, ((!(arr_19 [11] [24] [i_2 - 2] [11] [i_2])))));
                            var_20 = ((255 ? 5362032817415513442 : (~480)));
                            var_21 = (((((~(arr_6 [i_2 + 1] [i_2 + 3] [5])))) ? ((~(arr_7 [i_2 - 2] [i_2 + 3] [i_2 - 2]))) : ((~(!var_0)))));
                        }
                    }
                }
                var_22 ^= max(var_3, (((((!(arr_19 [15] [0] [15] [i_0] [i_1]))) && ((!(arr_20 [6] [20] [i_0] [i_0] [i_0] [i_1] [i_1])))))));
            }
        }
    }
    var_23 = ((var_10 > (max((var_1 - var_9), var_4))));
    #pragma endscop
}
