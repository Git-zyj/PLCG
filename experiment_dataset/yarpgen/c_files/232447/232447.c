/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_16 = ((1212356894 ? 3082610413 : -2249422860106004650));
        var_17 ^= 1212356899;
        var_18 = (min(var_18, (((~(((((var_2 ? 49 : (arr_1 [i_0] [i_0])))) ? (((max(var_10, (arr_2 [i_0]))))) : (((arr_0 [22]) ? 1 : -2249422860106004650)))))))));
        arr_4 [i_0] = ((((max(((min(255, var_3))), (min(63, (arr_0 [i_0 - 2])))))) ? (max(((-97 ? 94 : 1)), 1)) : (((((-81 - (arr_3 [i_0])))) ? (max(-410197646, (arr_3 [i_0]))) : (max(var_4, 635284633))))));
    }
    var_19 = (max(var_19, ((max(((max(0, 0))), var_11)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            {
                var_20 = ((((var_2 ^ ((((arr_3 [i_1]) & -664953125)))))) ? ((((max((arr_7 [i_1]), (arr_7 [i_1]))) ? (max(1, 4188552205)) : -23145))) : var_0);

                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    var_21 *= var_4;
                    var_22 = (max(((-((~(arr_5 [i_1]))))), var_12));
                    arr_13 [i_3] [i_2] [i_2] [i_3] = var_2;
                    arr_14 [i_3] [i_3] [i_3] [11] = ((-1008249083 ? 27088 : 23137));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((1 ? 525795119 : 2305843009213693951))));
                                var_24 = (arr_16 [i_1] [i_2] [i_1]);
                                arr_23 [15] [i_2] [i_4] [i_4] [i_5] [i_6] [i_6] = min(var_0, ((max((arr_10 [i_2 - 2]), -15867))));
                                var_25 = (min(var_25, (((var_13 ? (max(var_13, var_7)) : (arr_11 [i_6]))))));
                                var_26 += ((((((arr_20 [i_2 + 4] [i_2] [i_2 + 4] [i_2 + 1] [i_5]) ? ((max(var_0, var_4))) : ((var_5 ? (arr_0 [i_1]) : 3189667258023338943))))) ? (((((var_14 ? var_13 : var_9)) < ((max(-1115657615, 1094531454)))))) : (((((4946477199567048037 ? var_7 : (arr_18 [i_5])))) ? 0 : (~14662509)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_27 *= ((((((arr_15 [i_1] [i_1] [i_4] [i_7]) ? var_4 : var_10))) ? (arr_15 [i_7 + 1] [i_7 + 1] [i_1] [i_2 - 2]) : (arr_27 [i_2] [i_2 - 2] [i_1])));
                            arr_28 [i_7] [i_7] [i_4] [i_2] [i_7] = (((var_13 ? 1869662569 : var_1)));
                            var_28 = (((arr_6 [i_7 + 1]) ? var_5 : 1));
                            var_29 = (max(var_29, (arr_21 [i_2] [1] [1])));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_31 [1] [i_2] [i_7] [i_2] [i_1] = ((-2217942797660002037 ? ((-49 ? 522213157 : -4812)) : -410065768));
                            arr_32 [i_7] [i_2 + 3] [i_7] [i_7] [i_2 + 2] [i_7 - 1] = (((((var_9 ? 221 : (arr_19 [i_4])))) ? -1 : (~-16127)));
                        }
                        var_30 = (arr_2 [i_4]);
                        var_31 = ((!(arr_30 [i_1] [i_4] [i_7 - 1] [i_7] [i_1])));
                        var_32 = ((arr_22 [i_2] [i_2 + 3] [i_2 - 2] [10] [i_7]) ? (arr_22 [i_2] [i_2] [i_2 - 1] [i_2] [i_4]) : (arr_22 [i_1] [i_1] [i_2 + 4] [i_2] [11]));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_33 *= (var_2 % var_2);
                        var_34 = (min(var_34, var_13));
                        arr_36 [i_1] [i_2] [i_4] [i_10] = (((arr_34 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) | -1));
                    }
                    arr_37 [i_1] [i_2] [i_4] = ((((max(2077645866, 0))) ? ((1054201722 ? 1 : 1879462860663234357)) : 34));
                    var_35 = (((7 ? 16128 : 1)));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_36 = ((-(arr_43 [i_12 + 1] [i_12] [i_12] [i_11] [i_11])));
                                var_37 ^= (arr_12 [i_1] [i_12 + 1]);
                                var_38 = (min(var_38, (5317 * 24)));
                                arr_47 [i_13] [i_2] [i_12] [i_12] [i_13] [i_12] [i_11] = (((arr_6 [i_12 + 1]) ? (arr_6 [i_12 + 1]) : (arr_9 [i_12 + 1])));
                            }
                        }
                    }
                    arr_48 [i_1] [1] [1] = ((!(((-20 ? (arr_10 [i_1]) : (arr_41 [i_1] [i_1] [i_11]))))));
                }
            }
        }
    }
    #pragma endscop
}
