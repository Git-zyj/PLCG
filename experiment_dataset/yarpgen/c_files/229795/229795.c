/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((!((min(3239, ((var_9 ? (arr_3 [i_1]) : (arr_6 [9])))))))))));
                                var_18 &= (arr_8 [i_0] [i_0] [i_2] [6] [i_4] [i_4]);
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_3] [i_4] = ((max((arr_0 [i_1 + 2]), (arr_0 [i_1 + 3]))) / (arr_0 [i_1 - 1]));
                                arr_14 [i_0] [8] [i_2] [8] [i_2] &= ((2957 ? (arr_4 [i_3]) : (((arr_4 [i_1 + 2]) ? (arr_4 [i_0]) : (arr_4 [i_2])))));
                            }
                        }
                    }
                    var_19 -= ((var_8 ? (((arr_10 [i_1 + 3] [i_1 + 4] [i_1 + 4]) ? (arr_2 [i_1 + 1] [i_2]) : (arr_0 [i_1 - 1]))) : ((-(-2964 >= var_7)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 = (((((((var_11 ? (arr_5 [i_1] [1] [i_6]) : (arr_11 [1] [i_6] [1]))) > (arr_2 [1] [i_2])))) >> (((arr_10 [i_0] [i_0] [i_0]) - 47663))));
                                arr_20 [i_0] [i_1] [i_2] [4] [i_5] [i_6] |= ((+(((arr_9 [i_1 + 1] [1] [i_2] [i_2] [i_1 - 1]) ? (arr_9 [i_1] [i_1] [i_2] [2] [i_1 - 1]) : (arr_9 [i_0] [i_1] [i_0] [i_0] [i_1 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max((((var_2 != (min(var_11, 4294967295))))), (((arr_15 [i_1 + 3] [i_1 - 1]) + (arr_15 [i_1 + 1] [i_1 + 4]))))))));
                                arr_28 [i_0] [i_0] [i_2] [i_7] [i_8] = 2898284547;
                            }
                        }
                    }
                    arr_29 [i_1] = (max((((~(~var_7)))), (min((arr_15 [3] [i_1]), -2962))));
                }
            }
        }
        var_22 = (2898284547 || 1);
        var_23 -= (min((arr_0 [i_0]), ((((((arr_22 [i_0] [i_0] [i_0] [i_0] [6]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : -2957))) ? 1 : ((max((arr_10 [5] [i_0] [i_0]), -2960)))))));
        arr_30 [i_0] [i_0] = (((((((var_10 ? var_0 : (arr_15 [i_0] [8])))) ? (arr_10 [i_0] [i_0] [i_0]) : (~-2947))) - ((((((arr_12 [i_0] [i_0] [0] [i_0] [0] [i_0]) ? (arr_27 [i_0] [4] [4] [4] [i_0]) : (arr_24 [i_0] [i_0] [i_0] [9] [i_0] [i_0]))) <= ((max((arr_2 [i_0] [8]), var_2))))))));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_24 = (max(var_24, (arr_6 [i_0])));
            var_25 = 235;
            arr_35 [i_9] = ((156 >= (((min((arr_4 [i_0]), (arr_4 [i_9])))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_38 [10] &= (arr_37 [7]);

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_26 = ((!(~var_13)));
            arr_42 [i_11] [i_10] |= ((~((var_0 ? 1396682759 : 34683))));
        }
    }
    var_27 |= (min(var_11, var_5));
    #pragma endscop
}
