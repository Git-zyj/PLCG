/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_3] = (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 3]);
                            arr_10 [14] [i_1] [i_1] [i_3] = (arr_8 [i_0] [i_0] [i_0] [17] [i_3] [1]);
                        }
                    }
                }
                var_20 = (max(var_20, (((522815793 > (((arr_7 [i_1 - 4] [i_0] [10] [i_1 + 3]) ? (arr_7 [i_1 - 4] [i_1] [1] [i_1 - 3]) : (arr_7 [i_1 - 3] [i_0] [i_1] [i_1 + 1]))))))));
            }
        }
    }
    var_21 = var_19;
    var_22 = (max(var_22, var_16));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_23 [i_4] [i_4] [i_5] [10] [i_4] [i_4] = (arr_3 [i_4] [i_4] [i_4]);
                            arr_24 [i_4] [i_5] [i_5] [i_4] = (max((max(1515167136, 41)), 522815793));
                            var_23 = var_7;
                            var_24 = ((!(((arr_1 [i_5]) != (arr_1 [i_5])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_25 -= ((7566089277973327004 ? -522815794 : 522815802));
                                arr_34 [1] [i_5] [i_5] = ((-(arr_2 [i_4] [i_4] [i_4])));
                            }
                        }
                    }
                }
                arr_35 [i_5] = (522815777 && 30);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 17;i_13 += 1)
            {
                {
                    var_26 = (max((((var_8 ^ ((min((arr_39 [i_12]), 127)))))), ((-522815794 ? (min(-522815794, (arr_0 [i_12]))) : (arr_8 [i_11] [2] [i_11 + 1] [i_11] [i_12] [i_11 - 1])))));
                    arr_43 [i_12] [i_12] [i_12] = (arr_6 [i_11] [i_12] [i_13]);
                    var_27 = (min(((1857706297 | (min((arr_6 [i_11] [i_12] [4]), (arr_37 [i_11]))))), (arr_2 [i_11] [18] [i_13])));
                }
            }
        }
    }
    #pragma endscop
}
