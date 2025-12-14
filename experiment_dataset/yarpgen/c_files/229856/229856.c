/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = ((-(min(242873737, 3))));
                                arr_12 [i_2] [i_0] [i_0] = ((-109 ? -1485111686 : (-127 - 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_18 [i_6 + 1] [i_0] [i_2] [i_1] [i_0] [i_0] = ((((((24972 != 2041299426) % (255 + 0)))) && (!var_9)));
                                arr_19 [i_6 + 2] [i_0] [i_2] [i_2] [i_0] [i_0] = ((var_3 + ((((max(1, var_13))) ? ((max((arr_3 [i_2]), (arr_10 [i_0] [i_1] [i_2] [i_5 + 2] [i_6 - 1])))) : var_2))));
                                var_16 = 1687164052;
                                var_17 = ((((-109 ? var_6 : var_10)) % ((((((-853843713 ? 13 : (arr_13 [i_0] [i_1] [i_0] [i_1])))) ? (max(var_11, 31)) : (!-242873737))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_18 = ((var_1 ^ (((var_7 + 2224458205299725963) ? (var_11 ^ 1171616212) : 62580))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_7] = 2129;
                        var_19 = (((arr_2 [i_0]) == 242873754));
                        arr_25 [i_0] [i_1] [i_7] [i_8] [i_8] = ((385486149 ? (arr_16 [i_8] [i_8] [i_7] [i_1] [i_0]) : (1 % -557554409)));
                        var_20 = ((-747250310 ? var_3 : (arr_17 [i_0] [i_1] [i_1] [i_1] [i_0])));
                    }
                    var_21 = ((-((((max(-1, (arr_23 [i_7] [i_7] [i_1] [i_0] [i_0])))) + ((~(arr_22 [i_7] [i_1] [i_0])))))));
                    var_22 = (max(((~(arr_7 [i_1]))), ((min(15938, 107)))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_1] [i_0] = (arr_7 [i_0]);

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_23 = (min((max((max(1542060812, var_10)), (29 + -1866082173))), (((0 ^ (~-31816))))));

                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_24 = (-107 / 4294967295);
                            var_25 = (((max((((3508279791 ? var_7 : (arr_15 [i_10] [i_1] [i_9] [i_10] [i_11] [i_0])))), -14)) | ((((arr_15 [i_0] [i_11] [i_10] [i_9] [i_1] [i_0]) ? ((107 ? 4294967295 : var_2)) : (((19 ? (arr_1 [i_0]) : var_1))))))));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_26 = 2046143747;
                            var_27 = var_11;
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            arr_45 [i_0] [i_1] [i_9] [i_9] [i_0] [i_0] [i_0] = (((((127 % ((((arr_28 [i_0] [i_9]) <= 6325243392372433919)))))) ? ((((min(21, 89))) ^ 1475211547)) : 1));
                            var_28 = var_10;
                            var_29 = (min(((1028245086537800940 | (arr_4 [i_0] [i_1] [i_9]))), (((var_8 && (arr_4 [i_0] [i_9] [i_10]))))));
                        }
                    }
                    arr_46 [i_0] = (max(26, -49));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_30 = ((1 && ((((arr_41 [i_0] [i_1] [i_0]) ? (-2147483647 - 1) : 51)))));
                    arr_49 [i_14] [i_0] [i_0] [i_0] = (!1801506329);
                }
                arr_50 [i_0] = max((arr_14 [i_0] [i_0] [i_1] [i_1]), (min(var_8, var_2)));
                var_31 = (max((max((((arr_33 [i_0] [i_1] [i_1] [i_0] [i_0]) & (arr_16 [i_0] [i_1] [i_0] [i_0] [i_1]))), var_1)), 65535));
            }
        }
    }
    var_32 = ((((((var_12 && var_0) ? (29625 / var_12) : var_5))) && var_0));
    var_33 = (~var_2);
    #pragma endscop
}
