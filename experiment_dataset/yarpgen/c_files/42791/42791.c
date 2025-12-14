/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (((((min((arr_2 [i_0] [i_1]), var_5)) == var_2)) ? (arr_0 [i_0]) : -68));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_16 = ((!((((((var_9 / (arr_4 [i_1])))) ? var_7 : (((min((arr_1 [7]), var_2)))))))));
                    var_17 = (max(((max((max(7, (arr_3 [i_0]))), 251))), 27540));
                    var_18 = 3417678534;
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 = ((((~(max(608944359, 46503)))) == (((!(arr_7 [i_3]))))));
                        var_20 = (min(var_20, (((!(arr_2 [i_3 + 3] [i_1 - 1]))))));
                    }
                    var_21 = (((arr_6 [i_1 - 1] [i_1 - 1] [i_3 - 1]) ? (~11) : ((max(((((arr_8 [i_0] [i_0] [i_0] [i_0]) || 9496404638950529591))), (max(var_2, var_3)))))));
                    var_22 |= (~((-13183 | (((var_10 == (arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_23 = min(11380, -27547);
                                var_24 ^= (arr_11 [i_0] [i_1] [i_5] [i_6]);
                            }
                        }
                    }
                }
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    arr_17 [i_0] = (min((((-9833 + -608944350) ? 9496404638950529583 : (arr_16 [i_0] [6] [i_0]))), 3070124230));
                    arr_18 [i_0] [i_1 - 1] [9] = ((((max(12, (arr_14 [i_0] [i_1 - 1] [6] [1] [i_7 - 3] [i_7])))) ? 255 : 7));
                    var_25 = (((-(arr_15 [i_0] [i_1 + 1] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_26 = (arr_3 [i_0]);
                                arr_23 [1] [i_0] [i_1] [i_1] [i_7] [i_8] [i_7] = ((4089502587 ? 25 : 0));
                                var_27 = 35571;
                                arr_24 [i_0] [i_0] [3] [i_0] [i_8] [i_0] [3] = (((((~(-9843 | var_0)))) ? (((arr_16 [i_7] [i_8] [i_9 + 2]) / 1)) : (((var_12 / var_12) * var_3))));
                                var_28 *= (((var_2 > (arr_20 [0] [12] [i_8 - 1] [i_9]))));
                            }
                        }
                    }
                }
                arr_25 [i_1 - 1] = (min((arr_11 [i_1 + 1] [12] [i_1] [i_0]), (((!((max(var_2, (arr_20 [2] [i_1] [i_1] [2])))))))));
                var_29 = ((((((arr_6 [i_1 + 1] [i_1] [i_1 + 1]) + (var_9 + 9053644790835519488)))) && (2016643110955583314 == 63661)));
            }
        }
    }
    var_30 = var_0;
    var_31 = (((18446744073709551600 >> (60135 - 60077))));
    var_32 = ((((~(35571 > 29))) * (var_6 & var_12)));
    #pragma endscop
}
