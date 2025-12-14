/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 ^= (~965317680);
                                arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_4] [i_4 + 1] [i_4 + 1]);
                                arr_11 [i_3 - 2] [i_2] = ((((((!var_3) ? ((var_11 ? 3329649615 : 965317680)) : (((var_7 ? (arr_4 [i_4 + 1] [i_3] [i_2] [i_0]) : (arr_9 [i_0] [i_1] [i_2]))))))) ? var_3 : ((~(arr_6 [i_4 + 1])))));
                                var_19 = (max(var_19, (((((!(arr_1 [i_4 + 1]))) ? (max(2934724387325282907, ((1 ? (arr_4 [i_0] [i_1] [i_2] [0]) : (arr_7 [i_0] [i_1] [i_1]))))) : ((((arr_3 [i_0] [i_1] [i_2]) ? (103 <= 3294564694) : ((-(arr_8 [1] [1])))))))))));
                            }
                        }
                    }
                }
                arr_12 [i_1] [i_1] [i_0] = (((((-(arr_1 [i_0])))) ? ((1 ? (arr_1 [i_1]) : (arr_1 [i_0]))) : (((arr_1 [i_1]) ? 0 : (arr_1 [i_0])))));
            }
        }
    }
    var_20 = ((var_3 ? ((((min(var_1, var_8))) ? (((max(var_12, var_15)))) : 5086873969989794686)) : var_2));
    var_21 &= ((1 ? 0 : -17));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_22 += ((!((min(((1 % (arr_8 [i_5] [i_5]))), 1139451901)))));
                    arr_23 [i_5] [i_6] [i_7] = (arr_1 [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
