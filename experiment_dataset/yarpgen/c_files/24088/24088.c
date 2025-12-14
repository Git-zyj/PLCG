/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (!var_13)));
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 *= (((arr_2 [i_0]) ? ((~(arr_1 [i_0] [i_1 - 1]))) : (((!13419790062004443313) ? ((((arr_1 [i_0 + 1] [i_0 + 1]) || (arr_0 [13] [6])))) : (136382712 || var_5)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = ((~((max(1, (arr_6 [i_1 - 1] [i_3] [20] [20] [i_0 - 1]))))));
                            arr_8 [i_0 - 4] [i_3] [i_2] [i_3] = (((((-((var_9 ? 49152 : (arr_3 [i_0])))))) ? (((arr_3 [i_1]) ? (arr_3 [i_0 - 4]) : (arr_3 [i_0]))) : (((arr_3 [i_0 - 1]) / (arr_3 [i_0 - 1])))));
                            var_18 = ((-(arr_7 [i_3] [i_1] [16])));
                            var_19 = (max((((!(((-(arr_4 [i_1] [i_1 - 1] [i_2] [i_3]))))))), ((-(min(18446744073709551586, (arr_2 [i_0])))))));
                        }
                    }
                }
                arr_9 [i_1] [2] = -3083680908303306716;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, (arr_18 [i_4])));
                                var_21 = (~662481711);
                            }
                        }
                    }
                    var_22 = var_4;
                }
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
