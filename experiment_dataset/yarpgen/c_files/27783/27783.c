/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    var_19 += arr_7 [i_2 + 2] [i_1] [i_0];

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_20 ^= (min((arr_3 [i_1] [i_0]), (((18446744073709551615 ? var_11 : ((48326 + (arr_0 [i_2 + 2]))))))));
                        arr_11 [i_3] [i_1] [i_1] [i_0] = (max((max((arr_6 [i_3] [i_3] [i_2] [i_2 - 1]), var_17)), (min((arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1]), var_17))));
                    }
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = -10132;
                        arr_16 [i_1] = 542937437;
                        var_21 = var_5;
                        var_22 -= ((249 ? ((((min(var_2, 10152))))) : ((31 ? (arr_5 [i_0] [4]) : 2007696754))));
                        arr_17 [22] [i_2 + 2] [i_1] [22] &= ((((-(min(-32746, 4012888823)))) ^ (min((arr_7 [i_2] [i_1] [i_0]), 2007696754))));
                    }
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_23 -= (var_9 % 2007696761);
                    var_24 ^= ((-115 ^ (!var_14)));
                    var_25 ^= (min(233, var_0));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] [i_1] [i_6] = (((min((arr_2 [i_1] [i_0]), (((arr_20 [i_1] [i_1] [i_1]) ? 3 : var_13))))) > (min((arr_12 [i_6] [i_1] [i_6]), (((arr_6 [i_0] [i_1] [i_0] [i_1]) ? var_14 : (arr_6 [i_0] [i_1] [i_1] [i_6]))))));
                    arr_23 [i_1] [i_1] [i_6] = ((-((min(var_5, (arr_2 [i_6] [i_6]))))));
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_26 = ((((465701229 >= (arr_7 [i_8] [i_7] [i_0]))) ? (1 | 115) : -112));
                                var_27 = 0;
                                arr_31 [i_9 + 1] [i_8] [i_7] [i_7] [i_1] [i_0] |= (arr_28 [i_0] [i_9 + 1] [i_7] [i_8] [i_9 - 1]);
                            }
                        }
                    }
                    arr_32 [i_7] [i_1] = (arr_29 [i_1]);
                }
                arr_33 [i_0] [i_1] [i_0] = (min((min(121930713, -22)), (arr_19 [i_0])));
                var_28 = -26516;
                arr_34 [i_1] = 32767;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                var_29 -= (!(!var_8));
                arr_41 [i_11] = (arr_2 [i_11] [i_11]);
                /* LoopNest 3 */
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                arr_48 [i_10 - 1] [i_11] [i_12 + 2] [i_11] [i_14] = (((min((((arr_7 [i_13] [i_13] [i_13]) ^ (arr_19 [i_10 - 2]))), (arr_28 [i_12 - 1] [i_11] [i_10 + 1] [i_14] [i_14])))) ? (((min((arr_47 [i_13] [i_11] [i_12 + 2] [i_11] [i_11]), var_5)))) : (arr_25 [i_11]));
                                var_30 = (((~(arr_8 [i_12 - 2] [i_10 - 1] [i_12] [i_12]))));
                                arr_49 [i_10 - 1] [i_11] [i_12 - 2] [i_13] [i_13] [i_13] [i_14] = (((min((~3), var_13)) ^ (arr_24 [i_10 + 1] [i_11] [i_14])));
                                var_31 = (arr_43 [i_14] [i_13] [i_12 - 1] [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = (((var_15 && (255 || -41))));
    var_33 = var_1;
    #pragma endscop
}
