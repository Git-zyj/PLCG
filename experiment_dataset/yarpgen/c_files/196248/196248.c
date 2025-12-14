/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~((1 ? 4294967295 : var_7))))) ? var_2 : var_1));
    var_12 -= ((((var_8 ? ((var_8 ? var_4 : var_8)) : var_3)) < (((max(var_4, 0)) | (((var_4 ? 2199023255551 : var_0)))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_13 = (((max((arr_4 [i_0 + 1] [i_1]), (min((arr_6 [i_2] [i_2]), (arr_5 [i_1]))))) >= (max((arr_5 [i_0 + 1]), (arr_7 [i_0 + 1])))));
                        arr_11 [i_3] [i_2] [i_0] [i_0] = (arr_6 [i_0] [i_1]);
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] &= ((min(-62, (((arr_0 [i_0 - 1]) | (arr_8 [i_0] [i_0 - 1] [i_0 - 2] [12]))))) | (((!(arr_5 [i_0])))));
        arr_13 [i_0] = var_1;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_14 -= (min(32767, (((-((3784144413 | (arr_1 [i_4]))))))));
        var_15 = (((arr_8 [i_4] [i_4] [i_4] [i_4]) & (~var_10)));
        var_16 = (max(((((~var_9) <= (min((arr_1 [i_4]), var_0))))), (arr_15 [i_4] [i_4])));

        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            arr_19 [i_5] [i_5] = (max((arr_14 [i_5 + 1] [i_5 + 1]), (((arr_14 [i_5 + 1] [i_5 + 1]) ? (arr_14 [i_5 + 2] [i_5]) : (arr_14 [i_5 - 1] [i_5])))));
            var_17 = arr_16 [i_5];
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_29 [i_4] [7] [1] [i_4] [i_7] [i_8] = (max(-2251799813685248, 1007394747));
                        arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = (((((max((arr_1 [i_7]), (arr_22 [i_4] [i_7] [i_8])))) ? (arr_21 [i_4] [i_6] [i_7]) : (min(-25385, (arr_15 [i_7] [i_8]))))) / (min((((arr_14 [10] [i_6]) ? (arr_10 [i_4] [i_4]) : (arr_7 [i_6]))), var_2)));
                    }
                }
            }
            var_18 = (max(var_18, (arr_9 [i_4] [i_6])));
            arr_31 [i_4] [2] [i_6] = (~var_10);
        }
        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {
            var_19 -= ((53 == (min(-20, 8134))));
            var_20 = (max(((!(((-73 ? var_2 : (arr_7 [i_9])))))), ((!(arr_17 [i_4] [i_9] [i_9 + 2])))));
            var_21 = (max((arr_4 [i_4] [i_9]), (arr_26 [i_9 - 1] [i_9 + 1] [i_9 + 3] [i_9 + 1])));
        }
    }
    #pragma endscop
}
