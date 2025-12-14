/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 ^= -var_0;
                    arr_6 [i_2] [i_1] [i_2] = (max(-6709780784166333143, ((((arr_4 [i_0] [i_2] [i_2]) ? ((max(0, 1))) : ((~(arr_5 [i_2] [i_1]))))))));
                    arr_7 [i_0] [i_2] [i_2] = (1 ? 2849893896432227096 : -95);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_11 [i_3] = (min((((arr_10 [i_3]) ? 2087145231 : ((min((arr_9 [i_3]), (arr_9 [i_3])))))), 1));
        arr_12 [i_3] [i_3] = ((!(((-(max(var_0, (arr_9 [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_13 = (arr_17 [i_5 + 1] [5] [i_4] [i_6]);

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_21 [i_4] = (((12430309023486461208 + 16777215) ? (arr_1 [i_4]) : (((!(arr_16 [i_5 - 1]))))));
                        var_14 = (max(var_14, (((min((arr_15 [i_5 - 1] [i_7 - 1] [i_5 - 1]), (arr_15 [i_5 - 1] [i_7 - 1] [i_5 - 1])))))));
                    }
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        var_15 = (max(var_15, ((min((arr_19 [i_5] [i_5 + 1] [10] [10]), ((var_1 ? (arr_19 [9] [i_5 - 1] [i_6] [i_6]) : (arr_17 [i_4] [i_5 + 1] [0] [i_6]))))))));
                        arr_24 [i_4] = ((((max(-1, (arr_9 [i_4])))) ? (max(var_1, ((~(arr_0 [i_6] [i_8 + 1]))))) : (arr_19 [i_4] [i_4] [i_4] [i_4])));
                        var_16 ^= ((-((((!(arr_18 [i_4])))))));
                        arr_25 [i_4] [i_8] = ((((-(var_6 | var_9))) + ((~(arr_22 [i_4] [i_4] [i_4] [0])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        var_17 = (max(var_17, (((-(arr_4 [i_5] [i_9] [i_9 - 2]))))));
                        var_18 = (((arr_14 [i_9 - 2]) ? (arr_14 [i_6]) : (arr_14 [i_4])));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_19 = (((((1 & (arr_28 [i_5 - 1])))) ? (arr_28 [i_5 + 1]) : (((arr_28 [i_5 + 1]) - (arr_28 [i_5 + 1])))));
                        var_20 = ((((!(((-(arr_19 [i_10] [5] [1] [i_4])))))) ? (min((arr_16 [i_5 - 1]), ((min((arr_3 [19] [i_6] [i_10]), var_2))))) : (((((arr_5 [i_6] [i_10]) && (arr_29 [1] [5] [11] [i_4])))))));
                    }
                }
            }
        }
        arr_30 [i_4] [i_4] = arr_14 [i_4];
        arr_31 [i_4] = (arr_3 [i_4] [i_4] [i_4]);
        arr_32 [i_4] = arr_16 [i_4];
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_35 [i_11] = (max((max((arr_33 [i_11]), (arr_33 [i_11]))), (arr_33 [i_11])));
        var_21 ^= (((((arr_8 [i_11]) ? (arr_10 [i_11]) : (arr_34 [i_11] [i_11]))) ^ (((arr_34 [i_11] [i_11]) ? (arr_34 [i_11] [i_11]) : (arr_34 [17] [i_11])))));
        var_22 = (min(var_22, (((-((-(arr_1 [i_11]))))))));
        arr_36 [i_11] [i_11] = ((~(41857 * 23)));
    }
    var_23 += var_1;
    #pragma endscop
}
