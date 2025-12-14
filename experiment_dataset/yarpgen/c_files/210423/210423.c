/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_20 = (arr_2 [i_0] [i_1]);
                    arr_7 [i_0] [i_1] [i_2] |= (!-1153023203);
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, (((max((arr_0 [i_3]), 2147483647))))));
                    var_22 *= (arr_5 [i_0] [i_0] [i_0]);
                    arr_10 [i_3] [i_3] [i_1] [i_3] = (((max((((-(arr_4 [i_3] [i_0])))), -16277722775294026234)) << (((!(arr_3 [i_0 - 1] [i_1 + 1] [i_1]))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_23 = (min(var_23, (arr_1 [i_1 + 1] [i_0 + 1])));
                            var_24 -= ((!(arr_4 [i_3] [i_1 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_19 [i_3] [i_4] [i_3] [i_0] [i_6] [i_3] [i_3] = (arr_4 [i_0 + 1] [i_0 + 1]);
                            var_25 = (arr_11 [i_0 + 1] [i_1 + 1]);
                        }
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            var_26 = ((!(arr_4 [i_0 - 1] [i_3])));
                            arr_22 [i_0] [i_1] [i_3] [i_4] [i_3] = ((!(arr_21 [i_0] [i_0] [i_4] [i_1] [i_0] [i_3])));
                        }
                        var_27 += (arr_0 [i_3]);

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_28 = ((-(arr_8 [i_0] [i_3] [i_3] [i_4])));
                            arr_26 [i_1] [i_3] [i_4] [i_8] = ((~(arr_21 [i_0 - 1] [i_1] [i_3] [i_8] [i_8] [i_3])));
                        }
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 7;i_10 += 1)
                        {
                            arr_34 [i_10] [i_9] [i_3] [i_1] [i_0] = (-(max(140, 11523270758036447790)));
                            var_29 ^= (arr_32 [i_0] [4] [i_9]);
                            arr_35 [i_3] = ((-(((arr_16 [i_0] [i_3] [i_3] [i_9] [i_0] [i_0] [i_0]) - (arr_25 [i_1] [i_1] [i_10 + 2] [i_10] [i_10] [i_10] [i_3])))));
                        }
                        for (int i_11 = 2; i_11 < 8;i_11 += 1)
                        {
                            arr_38 [i_0] [i_1] [i_3] [i_9] [i_9] [i_11] [i_11] = -37613;
                            arr_39 [0] [i_1] [i_9] [i_11] [i_9] [i_0] [i_9] |= (--31606);
                            var_30 = (min(var_30, ((((max(19520, 1435699522210778835)) == -1737)))));
                        }

                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            var_31 = (((arr_42 [i_3] [i_1 + 1] [i_12 - 1]) == (arr_42 [i_3] [i_1 + 1] [i_12 - 1])));
                            arr_43 [i_3] [i_9] [i_3] [i_1] [i_1] [i_3] = 15173;
                            var_32 = (max(var_32, ((max(4081856801829021795, ((4081856801829021807 % ((max((arr_3 [i_3] [i_1] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                            var_33 = 2147483639;
                        }
                        arr_44 [i_0] [i_3] [i_3] [i_9] = ((!(arr_40 [i_9] [i_3] [i_9] [i_3] [i_3] [i_0 + 1])));
                        arr_45 [i_0] [i_0] [i_3] [i_0] = -127;
                    }
                    var_34 = (arr_36 [i_0] [i_0] [i_0] [i_3] [i_3]);
                }
                var_35 = 149;
            }
        }
    }
    #pragma endscop
}
