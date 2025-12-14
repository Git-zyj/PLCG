/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (min((max((((arr_4 [i_0] [i_0]) ? 17 : 3730128222)), ((min((arr_3 [i_1] [i_1]), (arr_4 [i_0] [i_0])))))), ((-13 ? 1 : 3730128236))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = (min((((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_2] [i_2]) : 65535)), (((arr_2 [i_0] [i_1] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [i_0])))));
                    var_14 = (~-17);
                }
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    var_15 = (arr_2 [i_1] [i_1] [i_0]);
                    arr_12 [i_0] [8] [i_1] [i_1] |= (arr_11 [i_0] [i_0] [i_0] [i_1]);
                    arr_13 [i_0] [i_1] [i_3] [i_0] = ((~(max((arr_9 [i_0] [i_3 + 1] [i_3]), (arr_9 [i_3] [i_3 - 1] [i_3])))));
                    arr_14 [i_0] [i_0] [4] [i_0] = ((-((((min((arr_2 [7] [i_0] [i_0]), (arr_0 [i_0])))) ? (arr_11 [i_3 + 3] [i_3 - 1] [i_3 + 3] [i_0]) : (arr_7 [i_3 + 3])))));
                    arr_15 [i_0] [i_1] [i_0] = (min(564839041, ((min(((min(-23, 31))), (arr_4 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_16 = ((113 ? var_10 : 3730128220));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                arr_22 [i_4] [i_4] = -536870912;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            var_17 += -6714218014541026797;

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_18 = (arr_1 [i_4] [i_4]);
                                var_19 = (arr_10 [i_4] [i_4]);
                                var_20 = (arr_29 [i_7 - 1] [i_7 - 1]);
                            }
                            for (int i_9 = 1; i_9 < 1;i_9 += 1)
                            {
                                var_21 *= (arr_16 [i_9 - 1]);
                                arr_32 [i_4] = arr_28 [i_4] [7] [i_6];
                                arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (arr_21 [i_4] [i_4]);
                                var_22 = (arr_20 [i_9 - 1] [i_7 + 3] [i_6 + 1]);
                            }
                            var_23 += ((((min((arr_2 [i_4] [i_7 + 2] [i_7 + 2]), (arr_2 [6] [i_7 + 1] [i_7 + 1])))) ? 2080374784 : (arr_31 [i_6 + 1] [8] [i_6 - 1] [i_6 + 1] [i_6 - 1])));
                            var_24 = ((~((~(arr_23 [i_7 + 2] [i_7 + 2] [i_6] [8])))));
                        }
                    }
                }
                var_25 = (max((max(9223372036854775807, 4294967295)), (((-1 ? (arr_25 [i_5] [i_5] [i_5] [i_4]) : 3730128224)))));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                arr_43 [i_4] [i_5] [i_10] |= (((arr_25 [i_4] [i_4] [i_10] [2]) ? ((-1 ? (max((arr_2 [i_4] [i_5] [i_10]), (arr_11 [i_4] [i_4] [i_4] [i_10]))) : (((min((arr_10 [i_4] [i_4]), 43348)))))) : ((max(((3297021721845506383 ? 6 : 3730128222)), 43348)))));
                                var_26 = ((3730128222 / (((((min((-9223372036854775807 - 1), -17))) ? 1 : ((~(arr_17 [i_4] [i_4]))))))));
                                arr_44 [i_4] [i_4] [i_10] [i_11] [i_12] = ((arr_7 [i_4]) ? (max(9223372036854775807, ((min(35730, (arr_23 [i_4] [i_4] [i_4] [i_4])))))) : (arr_36 [i_12]));
                            }
                        }
                    }
                }
                arr_45 [i_5] [i_4] = ((((!(arr_35 [i_4] [i_4] [i_4] [i_4])))) > (arr_35 [i_4] [i_4] [i_4] [i_5]));
            }
        }
    }
    var_27 &= var_5;
    #pragma endscop
}
