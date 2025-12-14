/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_16 = (arr_1 [i_0]);
                    var_17 = (min(var_17, -7891780492393385551));
                    arr_6 [i_1] &= (arr_4 [8] [i_2] [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 = var_10;
                        var_19 = (max(1, (arr_0 [i_1] [i_3])));
                        var_20 &= ((58 ? 84 : 114));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_11 [i_0] [12] [i_0 + 1] [i_1 - 3] [i_0] [i_0] = var_2;
                        arr_12 [i_0] [i_0] = (!9);

                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_21 = (min(var_21, 45505));
                            arr_16 [i_0 + 1] [i_0] [i_2 + 1] [i_2] [i_0 + 1] [i_5 + 1] = (((((161 ? 160 : 1590622040))) || (((225 ? 76 : 1396948799735321113)))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_22 ^= ((235 / (((arr_14 [i_0] [i_1]) + 563393545))));
                            arr_19 [i_0] [i_0] [i_2] [i_6] = (!3407951199);
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_24 [i_7] [i_0] [i_0] = (((arr_4 [i_0 + 1] [5] [6] [i_7 + 2]) ? (arr_3 [i_4] [17] [3]) : (arr_3 [10] [11] [11])));
                            var_23 = ((~(20054 ^ 1)));
                            arr_25 [i_2] [i_0] [6] = (~1766645248);
                        }
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [i_0] [i_1] [i_2 - 1] [i_2] [i_8] [i_8] &= max(33491, var_2);
                        arr_30 [i_0] [i_0] [17] [2] [0] [i_8] = ((~((((arr_17 [i_1 - 2]) > 226)))));
                        arr_31 [16] [i_8] [i_0] [14] [14] = ((((((-(arr_0 [i_1] [i_1 + 2]))) > ((max((arr_1 [i_0]), (arr_28 [i_1 - 3] [i_0])))))) ? (arr_22 [i_2 - 1] [i_1 - 2] [i_1] [i_0 + 1] [i_0 + 1]) : 1));
                    }
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    var_24 ^= (((arr_34 [i_0 + 1] [i_0]) ? var_3 : 213));
                    arr_35 [i_1] [i_1] &= -var_3;

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_39 [12] [12] [i_1 + 3] [i_0] [i_10] = 1;

                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            var_25 += ((26 ? 22242 : -28779));
                            arr_43 [i_0] [18] [5] [i_0] [4] = -3289158848;
                            arr_44 [i_0] [i_10] [9] = ((~(var_13 <= var_10)));
                            var_26 = (~var_0);
                            arr_45 [13] [i_10] [i_0] [i_1 - 1] [i_0] = (76 != var_10);
                        }
                    }
                    var_27 = (max(var_27, var_12));
                    var_28 = (min(var_28, (arr_1 [i_1])));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_54 [i_0] [i_0] = ((var_9 << (((min(53, (~-76))) - 42))));
                            var_29 = ((((0 ? 887016109 : 29641)) * (arr_40 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_1 - 2] [i_1 + 1])));
                            var_30 = var_7;
                            var_31 = (max(1, -8));
                            arr_55 [i_0] [i_0] [i_0] [12] = ((0 ? var_5 : -65));
                        }
                    }
                }
                var_32 = (!31);
            }
        }
    }
    var_33 = (min(2728308083637021812, 11554));
    #pragma endscop
}
