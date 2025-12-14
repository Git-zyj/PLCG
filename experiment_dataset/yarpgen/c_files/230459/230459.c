/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((+-127) ? 9057 : ((var_5 ? var_11 : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (max(462422394872458049, (arr_4 [i_1 + 1] [i_3 + 3])));
                                arr_15 [i_0] [7] [i_2] [i_0] [i_4] = (((((var_7 / (arr_9 [i_0] [i_0] [i_1 - 1] [i_3 + 1])))) ? (((arr_9 [i_0] [i_0] [i_1 - 1] [i_3 - 3]) ? 19378 : (arr_7 [i_2] [i_1 - 1] [i_1 + 1]))) : (min((arr_7 [i_4] [i_1 - 1] [i_1 - 1]), (arr_11 [i_4] [i_1] [i_1 - 1] [i_3 + 1] [i_0])))));
                                var_14 = ((-123 ? (((((107 ? var_8 : (arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] [i_2])))) ? ((var_3 ? -1396282027 : var_10)) : 19378)) : (arr_9 [i_0] [i_0] [i_0] [i_3])));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] = 127;
                var_15 = (max((max(9708751141044320954, 3)), (max((arr_3 [i_1 + 2] [i_1 + 2]), 15373090414786027168))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_16 = (max(((((arr_22 [i_6] [i_7] [i_8]) == var_10))), (arr_28 [i_5] [i_5] [i_5] [i_5])));
                            arr_29 [i_5] [i_8] [i_6] [i_5] [1] [i_8] = arr_22 [i_6] [i_7] [i_8];
                            arr_30 [i_5] [i_8] [i_8] [i_8] = (i_8 % 2 == zero) ? ((((-19363 == 12) >> (((arr_12 [i_5] [i_7] [i_7] [i_8] [3] [i_8]) - 11915))))) : ((((-19363 == 12) >> (((((arr_12 [i_5] [i_7] [i_7] [i_8] [3] [i_8]) - 11915)) - 9541)))));
                            var_17 += (max((arr_2 [i_5]), (162 / 9223372036854775807)));
                        }
                    }
                }
                var_18 = (min(((max((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6]), (arr_22 [18] [18] [i_6])))), (((arr_24 [i_6] [i_6] [i_5]) ? (arr_24 [9] [i_6] [9]) : (arr_4 [i_5] [i_6])))));
                var_19 = (min((max(var_3, 9708751141044320954)), ((((arr_6 [i_5] [18] [i_5] [i_6]) > (arr_6 [i_6] [i_6] [i_6] [i_5]))))));
                var_20 = (((arr_17 [i_5]) ? (((!(arr_17 [i_5])))) : (((arr_17 [i_5]) ? (arr_17 [i_5]) : (arr_17 [i_6])))));
            }
        }
    }
    var_21 += ((var_11 >> (var_9 - 7813171487298488400)));
    #pragma endscop
}
