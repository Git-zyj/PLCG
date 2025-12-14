/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (max((max(var_5, (1 % var_10))), (~var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [11] [22] [i_3] [15] [i_0] [i_0] &= ((-(((!(((var_10 ? (arr_8 [i_4] [i_3] [i_2] [i_0]) : var_4))))))));
                                var_12 = 109;
                                var_13 = (arr_4 [i_0] [i_1] [i_2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_5] [i_2] [i_5] [i_6] = (arr_8 [i_0] [i_5 + 2] [i_5 + 2] [i_1]);
                                arr_20 [i_5] = (max(((((((~(arr_11 [10] [i_6] [i_2] [i_6] [i_6 - 1] [14] [i_6 - 1])))) ? (185 || 120) : (-7570402348121180292 <= 146)))), ((min(8744644899805702996, (arr_10 [i_0] [i_1] [i_2] [i_5] [i_6]))))));
                                arr_21 [i_6] [i_5 + 1] [i_2] [8] [i_6] &= ((((((((arr_5 [i_0] [i_0] [i_0]) ? var_7 : var_6))) * (arr_10 [i_6] [i_1] [i_2] [i_1] [i_0]))) == (7 ^ 7)));
                                arr_22 [i_5] = (max((max(((0 >> (((arr_6 [i_1] [20]) + 832493935852392337)))), ((((arr_11 [i_1] [i_5] [i_2] [i_1] [i_1] [i_0] [i_0]) >= 30357))))), (min(((-(arr_5 [i_1] [i_2] [i_6 - 2]))), (arr_7 [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_6 + 2])))));
                                arr_23 [i_0] [i_5] = 219;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((var_8 == (!var_3)));
    #pragma endscop
}
