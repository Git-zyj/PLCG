/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_20 = 1;
        var_21 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_22 = ((((max((arr_4 [i_1] [1]), var_10))) || ((!(arr_0 [i_1])))));
        arr_5 [i_1] = (min((arr_3 [i_1] [i_1]), (min((arr_1 [i_1] [i_1]), (0 * 0)))));
        arr_6 [i_1] = -29;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = (max((((arr_7 [i_2] [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_4 [i_2] [i_2]))), (max(-8, (arr_7 [i_2] [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 8;i_5 += 1)
                {
                    {
                        var_23 -= 0;
                        var_24 = (((arr_0 [i_5]) ? var_9 : (((((min(0, (arr_12 [5] [5]))) > 14))))));
                        var_25 = (max(((min((~3899855117), -6))), ((((max((arr_3 [i_2] [i_4]), 7))) ? ((var_12 ? -15 : 65)) : (((-(arr_1 [i_2] [i_2]))))))));
                        var_26 = (((arr_15 [i_2] [i_2] [i_4] [i_5 - 2] [i_2]) && ((max(0, (arr_15 [i_2] [i_3] [i_4] [i_5 - 2] [i_2]))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_27 = ((63 ? 179 : 7));
            var_28 *= 119;
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_29 = (min((arr_19 [i_6]), ((((arr_25 [i_8] [i_6]) && (arr_25 [i_6] [i_8]))))));
            var_30 = arr_22 [i_8] [i_6];
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 21;i_10 += 1)
                {
                    {
                        var_31 = max((((arr_18 [i_9 - 1]) >= (arr_18 [i_9 - 1]))), var_4);
                        var_32 = (max((min(46493, (arr_32 [i_10] [i_8] [i_10] [i_10 - 3]))), (arr_30 [i_10] [i_10] [i_10 + 1] [i_10 - 2] [i_10 + 1] [6])));
                        var_33 = var_8;
                        arr_34 [i_6] [i_8] [i_9] = (max(((((max(var_3, (arr_27 [i_8] [i_8] [i_9])))) ? (((!(arr_29 [i_6] [i_6] [i_9 - 1])))) : ((min((arr_18 [1]), (arr_18 [8])))))), (((!((7370368041439318679 || (arr_20 [i_6] [i_6] [i_6]))))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_37 [7] [7] [i_11] = (arr_17 [3]);
            var_34 = (((arr_26 [i_11]) ? var_10 : ((~(arr_32 [0] [i_11] [i_6] [i_11])))));
            var_35 = (((arr_23 [i_11] [i_11] [i_6]) ? (arr_23 [i_6] [i_6] [i_6]) : (arr_24 [i_6] [i_11] [i_11])));
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            arr_40 [i_6] = (arr_23 [i_6] [i_12] [i_12]);
            var_36 = ((-(arr_17 [9])));
            var_37 += ((-(((3021398354476589174 ? 7429 : 1)))));
            arr_41 [6] = var_17;
        }
        var_38 ^= (arr_27 [4] [i_6] [1]);
        arr_42 [i_6] = (arr_22 [i_6] [i_6]);
    }
    var_39 = var_7;
    #pragma endscop
}
