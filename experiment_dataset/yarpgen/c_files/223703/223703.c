/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(2414674713, var_13))) ? ((224 ? 12468580519257902476 : ((224 ? 0 : 4477535471710907134)))) : 14431330567230608964));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = (((((152 ? (arr_9 [i_1] [i_1]) : 1880292564))) ? (arr_6 [i_0] [i_2]) : ((31 ? var_12 : (arr_8 [i_0] [i_2] [12] [i_0])))));
                        arr_11 [1] [i_1] [i_0] [i_3] = (((arr_0 [i_0]) ? ((((arr_3 [i_0] [18] [i_3]) + (arr_0 [i_0])))) : (~var_0)));

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            arr_14 [i_2] [i_1] [i_0] [i_1] [i_4 - 1] [i_3] [i_2] = (((arr_9 [i_1] [i_2]) + 1880292610));
                            var_16 = (arr_0 [i_0]);
                        }
                        arr_15 [i_0] [i_2] [i_1] [i_0] = (((arr_8 [i_0] [i_1] [i_1] [i_0]) ? (arr_5 [i_0]) : (arr_1 [i_0])));
                    }
                }
            }
        }
        var_17 = (((arr_5 [i_0]) ? (arr_3 [i_0] [8] [8]) : (arr_5 [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 7;i_5 += 1)
    {
        var_18 = (((~var_0) ? (arr_12 [1] [i_5] [i_5 - 2] [i_5 + 3] [i_5]) : var_0));
        var_19 = ((-(arr_3 [i_5] [i_5] [i_5])));
        var_20 = (((arr_4 [i_5 - 4]) ? ((-(arr_12 [i_5] [9] [i_5 - 2] [i_5] [i_5]))) : (arr_1 [i_5])));
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        var_21 = (((arr_7 [i_6 - 1] [1] [18] [8]) ? (arr_4 [8]) : ((~(arr_6 [i_6 + 1] [i_6 - 2])))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        var_22 = (((arr_12 [i_6 - 2] [i_6 - 2] [i_6] [i_6 + 1] [i_6 - 2]) ? (min((arr_7 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 + 1]), (arr_12 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 - 2]))) : (((arr_27 [i_6 - 2] [1] [i_6] [i_6 + 1]) * (arr_7 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 + 1])))));
                        var_23 = (((((((min((arr_5 [i_7]), (arr_28 [7] [i_8] [i_7] [i_6])))) ? (arr_13 [i_7] [i_7] [i_7]) : (arr_5 [i_7])))) ? (((max((arr_27 [i_6] [i_7] [i_8] [i_9]), ((max((arr_8 [i_6] [4] [i_7] [i_7]), (-127 - 1)))))))) : ((((3603602533 ? 17658479174754307307 : 948882387)) | (1804302250 ^ 3869857111)))));
                        var_24 = (arr_2 [20]);
                    }
                }
            }
        }
        var_25 = (max((min((((arr_1 [20]) ? (arr_30 [i_6 - 2] [1] [i_6 - 1] [2]) : (arr_23 [i_6] [i_6] [10]))), (arr_27 [i_6 - 2] [0] [0] [i_6 - 1]))), ((-(arr_0 [2])))));
        var_26 = (((((((arr_23 [0] [i_6] [8]) ? 12468580519257902460 : var_0)) * var_11)) * (((arr_21 [i_6 + 1]) * (((arr_0 [16]) * (arr_28 [i_6] [6] [10] [10])))))));
    }
    var_27 = ((~((12468580519257902460 * (min(-1084444836, 788264898955244338))))));
    #pragma endscop
}
