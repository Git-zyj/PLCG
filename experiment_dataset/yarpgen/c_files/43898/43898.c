/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_10, var_19));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_1] = ((!(arr_6 [i_1])));
            arr_8 [i_1] = (min(((-((-(arr_5 [i_0] [i_0]))))), ((~(max((arr_3 [1]), 0))))));
            arr_9 [i_0] [i_1] [i_1] = arr_2 [0];
            arr_10 [i_1] [i_1] = (max((arr_2 [i_0]), (min(((min((arr_2 [i_0]), (arr_2 [i_0])))), ((-(arr_6 [i_1])))))));
            var_21 = (min(var_21, (min((arr_6 [12]), (min(((~(arr_3 [i_0]))), (min((arr_3 [i_0]), (arr_1 [13])))))))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_17 [9] [i_2] [i_2] [i_3] = (arr_14 [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_22 [i_0] [7] [i_0] [i_0] [i_0] [i_2] [21] = (-(max((max((arr_11 [i_3] [i_4]), (arr_14 [i_2]))), ((min((arr_20 [i_0] [i_2] [i_2] [i_0]), (arr_1 [i_0])))))));
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [16] = (arr_19 [i_0] [i_0] [14] [i_4] [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            var_22 = (arr_29 [i_0] [i_0] [i_0] [i_3] [i_7] [i_7] [i_7]);
                            var_23 += (max(((-((-(arr_29 [i_0] [16] [i_0] [i_0] [i_0] [i_7] [i_7]))))), ((max((arr_16 [i_3] [i_3] [i_3]), (min((arr_27 [i_0] [i_2] [i_3] [i_6] [i_7]), (arr_2 [i_0]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_35 [i_2] [i_2] [i_3] [i_2] [i_9] [i_2] = (min((arr_5 [i_0] [i_8]), (arr_0 [i_0])));
                            arr_36 [13] [i_3] [i_9] [i_3] [i_2] = (max(((max(-80, -17))), (arr_28 [i_0] [i_2] [i_3] [i_8] [i_2])));
                            arr_37 [i_8 + 1] [i_2] [9] [i_8 - 3] [i_8] [7] = ((-(arr_34 [i_0] [i_2] [i_2] [i_0] [i_9] [i_0])));
                            var_24 = (arr_31 [i_2] [i_2] [4] [i_8 - 1]);
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
            {
                arr_40 [i_0] [i_2] = (arr_28 [i_0] [i_2] [i_2] [i_2] [i_2]);
                arr_41 [1] [i_2] [i_2] = (arr_3 [i_0]);
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {
                arr_44 [i_0] [i_2] [i_11] [i_2] = (+((~(min((arr_28 [i_0] [i_2] [i_11] [i_2] [i_2]), (arr_42 [14] [i_2] [i_2]))))));
                arr_45 [i_0] [i_2] [i_11] [i_0] = (arr_16 [i_2] [i_2] [i_2]);
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
            {
                arr_49 [i_2] [i_2] [i_0] [i_2] = 19;
                var_25 = (arr_1 [i_0]);
                arr_50 [i_2] = ((!(arr_26 [i_0] [i_0] [i_0] [i_2] [i_12] [i_12])));
            }
            var_26 = (min(var_26, (arr_3 [i_0])));
            var_27 += (arr_43 [i_2] [i_2] [20]);
        }
        var_28 = (max(-17898, -20392));
    }
    var_29 &= var_7;
    var_30 = (min(var_30, ((max((min(var_4, (max(var_13, var_11)))), var_8)))));
    var_31 = (min(var_3, (((max(var_0, var_3))))));
    #pragma endscop
}
