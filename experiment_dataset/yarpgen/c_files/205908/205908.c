/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((min((((var_18 && -576460752303423488) ? (arr_5 [9] [8] [i_2]) : ((((arr_2 [i_0]) && (arr_4 [12] [i_1] [i_2])))))), -4126)))));
                    var_20 = (max(var_20, ((((~(arr_5 [i_0] [i_1] [i_2])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_21 = (((arr_3 [i_0]) | ((((arr_1 [i_0]) ? 4109 : 0)))));
                        arr_10 [i_0] [i_1] [0] [i_3] [i_0] &= var_9;
                        arr_11 [17] [i_1] [i_0] [17] = ((-4126 && (arr_7 [i_0] [i_0] [i_0] [3])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_4] = ((~(arr_6 [i_0] [i_1] [i_2] [11])));
                        arr_16 [i_0] [i_0] [i_2] [5] [i_0] = (1 && -4126);
                        arr_17 [4] |= (arr_9 [i_1] [10] [i_2]);
                        arr_18 [i_0] [i_2] [i_1] [i_0] = -10508;
                        arr_19 [6] [i_1] [i_1] [i_0] [i_1] [i_1] = ((!((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [9] [i_0] [i_0] = var_6;
                        arr_23 [i_0] [i_1] [i_2] [i_5] = (arr_9 [i_0] [i_0] [i_0]);
                        arr_24 [i_0] [i_5] [10] = (((arr_14 [i_0] [6] [i_2]) ? (arr_7 [i_0] [i_1] [i_0] [i_5]) : ((((!(arr_9 [1] [i_0] [i_2])))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_28 [i_0] = ((~(arr_1 [i_0])));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_22 -= (arr_25 [i_0] [i_6] [i_2] [i_1]);
                            arr_31 [i_0] [i_1] [i_0] [i_0] [i_7] = (((arr_20 [i_0]) ? (arr_20 [i_0]) : (arr_20 [i_0])));
                            arr_32 [i_7] [i_7] [i_0] [i_2] [i_0] [i_0] [i_0] = (arr_27 [i_0] [i_1] [i_6] [i_7]);
                            arr_33 [i_0] [i_1] [i_0] [i_1] [i_0] = (arr_2 [i_1]);
                            var_23 -= (((((16838 ? var_1 : (arr_2 [i_1])))) ? 47818 : (4113 % -134217728)));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_24 = (((arr_9 [i_0] [i_0] [i_2]) > (arr_26 [i_2] [i_0])));
                            arr_37 [i_6] [i_0] [i_2] [i_6] [i_0] = (arr_36 [i_0] [i_0] [4] [6]);
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_40 [i_9] [i_0] [i_0] [i_1] = (arr_13 [i_0] [i_1] [i_2] [i_6]);
                            var_25 = (min(var_25, 4113));
                        }
                        var_26 = ((8064 ? -32594 : -7710654675201925248));
                        arr_41 [i_0] = (((arr_25 [i_0] [i_0] [i_0] [i_0]) && (arr_25 [1] [i_2] [i_1] [i_0])));
                    }
                    arr_42 [i_0] [i_2] [i_2] [i_2] = ((((~((~(arr_27 [i_0] [i_1] [i_1] [i_2]))))) >> (((max(((((arr_30 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [17]) ? (arr_35 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : 127))), (~813750916833499866))) - 17632993156876051742))));
                }
            }
        }
    }
    var_27 = var_6;
    var_28 = ((var_17 ? var_14 : ((var_8 ? (~-7710654675201925270) : (~var_4)))));
    var_29 = 4125;
    #pragma endscop
}
