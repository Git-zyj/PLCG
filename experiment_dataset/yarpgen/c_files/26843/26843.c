/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = (((((-var_4 ? ((max(var_7, -54))) : ((max(1, var_10)))))) ? (((var_1 ? var_9 : var_2))) : (((-((max(1, var_8))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (min((max((arr_6 [i_0] [i_2 - 2] [i_2] [i_2 - 2]), (-3451 > var_3))), ((!(((16522 ? (arr_4 [i_0] [i_0]) : (arr_3 [i_0] [i_1]))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((-(max(((-(arr_3 [i_0] [i_0]))), (((var_8 - (arr_4 [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_2 - 1] [i_1] [i_3] = var_7;
                                arr_15 [i_4 + 1] [i_3] [i_3] [i_3] [i_2 + 1] [i_3] [18] = (min((max(((max((arr_7 [i_0] [i_1] [i_4]), (arr_10 [i_2] [i_3] [i_1] [i_2])))), (((arr_11 [i_0] [i_0] [i_0]) ? 3443 : var_2)))), ((((max((arr_12 [i_0] [i_0] [i_0] [i_1] [i_4] [i_0] [i_4]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (!28) : (((arr_4 [i_0] [i_1]) ? (arr_2 [i_1] [i_1]) : -3443)))))));
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] [i_4] = ((!(((((1 ? (arr_7 [i_3] [i_3] [i_3]) : -29762)) + 21939)))));
                                var_18 = ((-(((arr_13 [i_3] [i_1] [i_2 - 1] [i_3] [i_4]) ? (arr_13 [i_3] [i_1] [i_1] [i_1] [i_1]) : (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3])))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = (max((max(var_9, (((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [i_1]) : -29765)))), (((arr_13 [i_3] [i_4] [i_4] [i_1] [i_3]) ? (arr_13 [i_3] [i_3] [i_2 + 1] [i_1] [i_3]) : 20))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 |= ((var_4 > (max(((min(var_9, -120758514))), (max(var_13, var_3))))));
    #pragma endscop
}
