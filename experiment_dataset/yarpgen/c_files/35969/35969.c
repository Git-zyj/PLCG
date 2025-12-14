/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (max(var_18, var_18));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_21 = ((var_18 ? 3 : ((37002 ? 4088857285480077870 : (arr_4 [i_0] [i_2] [i_2])))));
                    arr_10 [i_0] [6] [i_0] [i_1] = (arr_3 [i_0]);
                    var_22 = var_14;
                    var_23 = var_19;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_24 = min(-1716090150, 28534);
                    var_25 = (min(var_25, (((((max(20647, 188))) > (var_10 <= var_16))))));
                }
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    arr_15 [i_4] [i_0] [i_0] [i_0 + 1] = 188;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_26 = (arr_8 [5] [i_1] [i_5]);
                                arr_21 [i_0 - 1] [9] [9] [i_0] [11] = ((4294967283 ? 4294967283 : 188));
                            }
                        }
                    }
                    var_27 += ((min(-1563062691, 2792392703)));
                    arr_22 [i_0] [i_1] [i_4 + 2] [i_4] = ((-(min((max(var_11, var_4)), (arr_4 [i_0] [i_1] [i_4 - 1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_28 = ((((((arr_2 [i_7 + 3]) / var_15))) / (((arr_8 [i_0] [i_0 + 2] [i_4 + 3]) ? var_7 : (arr_8 [3] [i_0 + 2] [i_4 + 1])))));
                                var_29 *= ((-(arr_17 [i_8 - 2] [i_0 - 1] [i_4 + 3] [i_7 + 2])));
                                var_30 ^= (((((max(var_16, var_19)) << (((arr_18 [i_0 - 2] [4]) - 3305836167)))) ^ (((((((-2147483647 - 1) ? (arr_17 [i_0] [i_0] [i_0] [i_0 - 2]) : (arr_7 [i_0])))) ? (var_10 + var_3) : (arr_13 [8]))))));
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    var_31 = max((arr_16 [i_0 + 2]), (arr_13 [i_0]));
                    var_32 = var_5;
                    var_33 += ((((((arr_4 [i_9 + 1] [i_9 + 3] [i_9 + 1]) || (arr_4 [i_9 + 1] [3] [i_9 + 2])))) << (((1907606195 - 1477445798) - 430160397))));
                }
                arr_31 [i_0] [i_0] [2] = ((((arr_6 [i_0 - 1]) ? (arr_6 [i_0 + 2]) : var_15)));

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_34 = 251;
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_35 = (max(var_35, (((4356318647596257631 ? 65527 : ((((max(409458731, 458752))) ? ((196 ? var_1 : var_1)) : 54733)))))));
                                arr_39 [i_0] [i_10] [10] [i_12] = (((min((arr_35 [i_11 + 1] [1] [i_0] [i_11 + 3]), (arr_35 [i_11 + 2] [i_11] [i_0] [i_11 - 1])))) ? (max(var_7, (arr_35 [i_11 - 2] [i_11] [i_0] [i_11 + 3]))) : 16867008827447022753);
                                var_36 += (((4294967295 ? 31 : 0)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 8;i_14 += 1)
                        {
                            {
                                var_37 |= ((182 < (max(4640092531929101444, 18))));
                                var_38 = (min(var_38, (min((arr_2 [1]), var_0))));
                            }
                        }
                    }
                    arr_47 [i_0] [i_1] [i_0] = 37018;
                }
                var_39 = (max(var_39, (((((var_4 ? (arr_43 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2] [2] [i_0 - 1]) : (arr_43 [i_0 + 1] [i_0] [3] [i_0] [i_0] [i_0 - 1])))) ? ((min((arr_43 [i_0 - 1] [1] [1] [1] [i_0] [i_0 + 2]), (arr_43 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 2])))) : ((max((arr_43 [i_0 - 1] [11] [11] [i_0] [i_0] [i_0 - 1]), (arr_43 [i_0 - 1] [4] [4] [i_0 + 2] [3] [i_0 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
