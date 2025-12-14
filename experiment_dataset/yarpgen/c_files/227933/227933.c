/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(((arr_2 [i_0]) ? (arr_2 [i_0]) : -31219))));
                arr_6 [i_0] [i_1] = (((((1381752857 - -19189) ? (((max(12082, (-32767 - 1))))) : (min(0, 12066)))) - (((19188 + (arr_4 [i_0] [i_1]))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_4] [2] [i_4] [i_3] [i_3] [i_3] [i_4] |= ((~((((var_7 ? (arr_17 [i_2] [i_3] [i_4] [i_5]) : 0))))));
                                arr_21 [i_2] [i_2] [i_5] [i_2] [i_6] [i_2] = var_8;
                                arr_22 [i_2] [11] [i_4] [i_5] = ((~(max(((var_4 ? var_8 : (arr_4 [i_5] [i_6]))), -1360911722))));
                                var_17 |= (((((~(arr_14 [i_4] [i_4])))) ? ((var_9 ? ((max((arr_8 [i_4]), (arr_7 [i_2 + 1])))) : ((-(arr_2 [i_3]))))) : (((!(((4223950007 ? (-32767 - 1) : -8616))))))));
                                arr_23 [i_2 - 1] [i_3 - 1] [i_5] [i_4] [i_5 - 3] [i_5] [i_6] = ((~(((arr_1 [i_3 - 3] [0]) ? (arr_1 [i_3 + 1] [i_2]) : (arr_7 [i_5 - 2])))));
                            }
                        }
                    }
                    arr_24 [i_2] [i_2] = ((!(((arr_9 [i_3 - 3]) || 12082))));
                    arr_25 [i_2] [i_2] [i_4] = ((26320 - ((max(var_11, -1124310864)))));
                }
            }
        }
        var_18 = ((35568 ? ((((((var_10 / (arr_7 [11])))) ? (max(var_8, -32748)) : ((max((arr_14 [i_2 - 1] [i_2]), (arr_7 [i_2 + 1]))))))) : 962466287));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_19 = (min(var_19, 3327300657));
        arr_28 [i_7] = max(1433197748, var_10);
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        arr_31 [i_8] = (32764 <= 1792);
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    {
                        var_20 = (min(((((min(18108, 30969))) + ((18115 ? 19198 : var_16)))), ((1984 ? 1980 : 8191))));
                        var_21 = (max(var_21, ((((((arr_38 [i_11 - 1] [i_9] [i_8 - 1] [i_8]) ? (arr_38 [i_11 + 1] [i_11 + 1] [i_8 + 2] [i_8]) : var_12)) | (((30870 ? (-32767 - 1) : 29956))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
