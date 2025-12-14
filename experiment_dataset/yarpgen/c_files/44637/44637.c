/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min((9331232511760217231 || var_7), var_4)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [1] [i_3] = (max(215, 1));
                        var_18 = ((max(((10186 ? (arr_1 [i_0]) : var_2)), (arr_2 [i_3] [i_2]))) != 45138);
                        var_19 = (((var_5 >> (arr_4 [i_0] [i_0]))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] = (arr_6 [i_0] [i_1] [i_0] [i_3]);
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (((((19 > ((max(var_1, var_8)))))) * (((arr_9 [i_0] [i_0] [2] [i_0] [i_0] [i_0]) | (arr_0 [i_0] [i_0])))));
        arr_13 [i_0] = -50;
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_20 = min(((((((var_2 ? (arr_15 [i_4] [0]) : var_6))) ? 2457342918 : (arr_14 [i_4])))), ((15981 ? (arr_15 [i_4] [12]) : (((min((arr_16 [i_4]), -15981)))))));
        var_21 ^= (((arr_15 [i_4] [i_4]) ? -15985 : 58));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_20 [6] = var_13;
        var_22 = ((-((((((arr_18 [i_5]) ? var_5 : (arr_18 [i_5]))) < var_6)))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_32 [i_5] [i_6] [i_7] [8] = ((((((max((arr_25 [i_5] [i_6] [i_7] [i_8]), var_7))) ? ((min(var_11, 1))) : (arr_31 [i_9] [i_7] [1] [i_8] [i_9])))) <= ((-27 ? (arr_21 [i_7]) : ((((arr_17 [4]) % var_12))))));
                                var_23 = ((!(arr_17 [i_9])));
                                var_24 = (min(var_24, (min(((((((arr_29 [1] [i_6] [i_6] [i_7] [i_6] [i_9]) ? (arr_24 [i_6] [i_6] [i_8]) : var_0))) ? (arr_21 [i_5]) : ((((arr_17 [i_8]) ? var_11 : var_6))))), (arr_23 [i_5] [i_6 - 2] [i_7])))));
                            }
                        }
                    }
                    var_25 = var_16;
                    var_26 = (((((~((min(var_13, (arr_26 [11] [11] [11]))))))) ? var_10 : (arr_31 [i_5] [i_6 - 2] [i_5] [i_7] [i_7])));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_38 [i_5] [i_6] [i_7] [i_10] [i_11] [13] = (arr_29 [4] [i_6] [i_7] [1] [i_7] [8]);
                                arr_39 [i_5] [i_5] [i_5] [i_5] [1] = (arr_33 [i_6 - 1] [1] [18] [i_10 - 1]);
                                arr_40 [17] [i_10 + 1] [i_6] [i_7] [i_6 - 1] [i_6] [i_5] = (((2155173069729074297 | (arr_30 [i_10 - 1] [i_6] [i_6 - 2] [i_6]))));
                            }
                        }
                    }
                }
            }
        }
        arr_41 [16] = (((arr_31 [i_5] [i_5] [i_5] [i_5] [i_5]) ? var_14 : ((((arr_36 [i_5]) / ((max((arr_29 [6] [3] [i_5] [i_5] [3] [1]), var_13))))))));
    }
    #pragma endscop
}
