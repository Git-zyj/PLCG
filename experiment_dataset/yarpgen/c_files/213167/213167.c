/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? (((var_6 ? ((var_7 ? 45613533 : var_9)) : var_2))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_14 = (((!(arr_4 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = (((!(arr_16 [i_4] [i_3] [i_2 + 1] [i_2] [i_1] [i_0] [i_0]))));
                                var_16 = (248 * var_7);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_17 = (((((arr_12 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1]) ? ((var_9 ? var_1 : var_8)) : (arr_12 [i_0 - 4] [i_1 - 1] [i_1 + 1] [i_1 + 1] [7] [i_0 - 4]))) == (var_5 || var_9)));
                    var_18 = -2809225949184114833;
                }
                var_19 = (max(((~((var_0 ? (arr_6 [20] [20]) : 125)))), ((var_3 << (((arr_17 [i_1 - 1] [i_1] [i_0 - 3]) - 3805752210267755963))))));
                var_20 = ((((max(var_3, (arr_0 [i_0 + 2] [i_0 - 4]))))) == (((arr_6 [10] [21]) ? (arr_1 [i_0 + 2] [i_0 + 2]) : (arr_6 [i_0 + 1] [i_1]))));
                var_21 = (((((15784 ? (arr_5 [i_0] [i_0 - 3] [i_1]) : ((-(arr_10 [i_0] [i_0] [i_0 + 3] [i_1] [i_1])))))) ? (((var_11 < 15792) ? (((15776 || (arr_10 [i_0] [i_1] [i_0] [i_1 + 1] [i_1])))) : (arr_19 [i_0 + 2] [i_0 + 2] [i_1]))) : (arr_3 [i_0 + 1] [i_1 + 1])));
                var_22 = ((((((11041311013173314915 << (((arr_9 [9] [i_1 - 1] [9] [i_0 - 1]) + 96)))) > (((-1746351050 ? 4787018612112437971 : 65516))))) ? (((min((arr_19 [i_0 - 3] [i_0 - 3] [i_1 - 1]), 49740)))) : (((((43627 ? -5 : 15816))) & -15315339166497639464))));
            }
        }
    }
    #pragma endscop
}
