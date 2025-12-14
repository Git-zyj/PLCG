/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((41 * (arr_1 [i_0])))))));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [12] [i_1] [i_1] [i_1] [18] [i_1] [i_2] = arr_13 [i_0] [i_1] [i_1] [i_3] [i_4 + 1];
                                arr_15 [i_2] [8] [i_2] = 210;
                                arr_16 [i_2] [i_2] [i_1] [i_2] = ((((((arr_13 [16] [16] [i_2] [i_4 + 1] [i_2 + 2]) - (arr_13 [i_0] [i_0] [i_4] [i_4 + 1] [i_2 - 1])))) ? (min((arr_13 [i_0] [i_3] [i_4 + 1] [i_4 + 1] [i_2 + 3]), (arr_13 [i_0] [1] [i_4] [i_4 + 1] [i_2 + 1]))) : ((((!(arr_13 [i_0] [i_1] [i_3] [i_4 + 1] [i_2 - 1])))))));
                            }
                        }
                    }
                    var_21 = ((max(1, (arr_13 [i_2] [i_2 + 2] [15] [i_2] [i_2 - 1]))) >= (arr_13 [i_2] [i_2 - 1] [i_2 - 1] [15] [i_2 - 1]));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = (2147483647 - 15540407699285424079);
                                arr_24 [i_2] [13] [8] [i_2] = (min((((!(((15540407699285424079 ? 67 : (arr_9 [i_0] [i_5] [i_2] [i_1] [i_5]))))))), (min(1, (arr_21 [i_0] [i_1] [i_2 + 1] [13] [i_2])))));
                            }
                        }
                    }
                }
                arr_25 [0] [i_1] [14] = (max((((((((arr_0 [i_0]) > (arr_5 [i_1] [i_1] [i_1]))))) <= 2076502287)), ((!(min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]), 1))))));
            }
        }
    }
    var_23 |= (min(var_3, var_18));
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_24 = (max(var_24, 2147483647));
                    var_25 = ((arr_31 [i_7 + 2]) ? (((!((0 <= (-2147483647 - 1)))))) : (((((min(var_18, 1))) && (!var_6)))));
                    arr_33 [i_7] [i_7] [i_7] = (((((arr_26 [i_7 - 1]) / (arr_31 [i_7 + 1])))) ? (arr_31 [i_7 + 1]) : (arr_31 [i_7 + 2]));
                    arr_34 [i_9] [i_8] [i_7 + 1] = (arr_26 [i_7 + 1]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [17] [i_9] [i_9] [i_10] [i_10] [i_10] = (((((arr_35 [i_10] [i_8] [i_8] [i_7 - 1]) ? (arr_35 [i_11] [i_9] [1] [i_7 + 2]) : (arr_35 [i_7 + 1] [i_8] [4] [i_7 - 1])))) ? (min((arr_35 [i_7] [6] [i_9] [i_7 + 1]), 15540407699285424073)) : (arr_35 [5] [i_8] [i_9] [i_7 + 2]));
                                arr_40 [i_10] [i_8] [i_8] [14] [i_11] = (((~((~(arr_27 [i_7 + 2] [i_9]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = ((!(!var_2)));
    #pragma endscop
}
