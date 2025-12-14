/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((1 <= 1) ^ var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [8] [0] [i_0] = ((((min(((min((arr_4 [i_1]), (arr_1 [i_0] [i_1])))), (((arr_2 [i_0]) + (arr_0 [i_0])))))) ? 0 : (arr_1 [i_0] [i_1])));

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    var_15 = (((((26 ^ (arr_1 [i_0] [i_1])))) ? ((max((arr_1 [i_1] [13]), var_2))) : ((max((arr_6 [i_2 - 2]), 0)))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (max(((32438 * ((1 ? 1 : 1)))), ((1 >> ((((1522875030 ? -767863566 : 934660711)) - 3527103721))))));
                    arr_11 [1] [i_0] [i_0] = ((1 + (((((((arr_6 [i_2]) ? 208 : (arr_9 [i_0] [21] [i_0])))) <= ((217 ? var_12 : 14677228202180779578)))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_14 [i_0] [9] [i_1] [i_0] = (((3439 % ((38008 ? var_9 : 536870911)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_16 = (!var_3);
                                var_17 = (min(var_17, ((((((((((arr_17 [i_3] [i_1] [19] [i_4]) ? (arr_20 [i_5] [1] [i_4] [i_0] [i_1] [i_0] [i_0]) : (arr_13 [i_0] [0] [i_5])))) ? (arr_1 [i_0] [i_0]) : 1))) && ((((((((arr_16 [i_0] [i_0] [i_3] [i_4]) - 44807)) + 2147483647)) >> (((arr_9 [10] [8] [i_5]) - 77))))))))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_3] [i_3] = (((((!(arr_2 [20])))) == 289405435));
                    var_18 ^= (((((arr_12 [i_3] [i_0] [i_3]) ? var_6 : (arr_12 [i_0] [15] [i_3]))) <= ((20 ? (arr_12 [i_0] [i_1] [i_3]) : var_12))));

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_0] = (max((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), ((min((-32767 - 1), 54886)))));
                        arr_26 [21] [i_0] [i_0] = (((((16 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : 1))) ? (arr_1 [i_0] [i_6]) : (((!(((var_2 >> (((arr_20 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6] [i_6]) - 94))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
