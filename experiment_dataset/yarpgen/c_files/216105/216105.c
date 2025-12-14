/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = (max(var_19, (arr_7 [i_0] [i_0])));

                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            var_20 = (arr_10 [i_4] [14] [i_1] [i_2] [i_3] [i_4]);
                            var_21 -= 73;
                        }
                        arr_14 [i_0] [1] [i_1] [i_2] [i_3] = (arr_7 [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_18 [i_0] [4] [i_2 - 1] [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_19 [i_2 - 2] [i_1] = 73;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2 - 2] = (arr_9 [i_1] [i_1] [i_2]);
                        var_22 = -73;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [2] [2] [2] [i_7] = arr_22 [i_7] [i_1] [6] [i_7];
                        arr_27 [i_1 + 4] = (arr_9 [i_0] [i_0] [i_0]);
                    }

                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        arr_30 [i_8] = 5844180896410675423;
                        var_23 = (max(var_23, (arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2])));
                    }
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        var_24 = (arr_17 [5] [i_1] [i_1 - 1] [i_1 + 1]);
                        arr_33 [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                        arr_34 [i_9] [i_1] [i_0] = 2434984237;
                        arr_35 [i_0] [i_0] = 5844180896410675421;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_38 [2] [12] [i_2 + 3] [6] [i_0] [i_10] &= 65535;
                        arr_39 [i_10] [i_1] = -108;
                        var_25 = (arr_2 [i_0] [i_0] [i_0]);
                        var_26 = (arr_31 [i_0] [i_1 - 1] [4] [4]);
                    }
                }
            }
        }
        var_27 = 3876668556;
        arr_40 [9] &= 17649736124141928825;
        var_28 ^= -1964027157;
    }
    var_29 &= var_6;

    for (int i_11 = 2; i_11 < 21;i_11 += 1)
    {
        arr_45 [i_11] = (arr_43 [i_11]);
        arr_46 [i_11] = (min((arr_43 [i_11]), (((max(10440868182942061338, (arr_43 [i_11])))))));
        var_30 = (arr_42 [1] [i_11]);
        var_31 &= (arr_42 [i_11] [i_11 - 1]);
    }
    for (int i_12 = 4; i_12 < 14;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                {
                    arr_53 [i_12 - 1] [i_12] [i_14] = 1;
                    arr_54 [i_12] = (arr_8 [6] [i_13] [6] [i_13 + 1]);
                    arr_55 [i_12] [i_12] = -1;
                }
            }
        }
        arr_56 [i_12] [i_12] = (arr_13 [i_12 - 4] [i_12 + 1] [i_12] [i_12] [i_12 - 4]);
    }
    #pragma endscop
}
