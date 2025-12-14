/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((max(245, -17)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [1] = ((-(~127)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((245 || (-127 - 1)));
                    var_18 = (min(var_18, (((-68 ? ((max(74, -112))) : (((arr_7 [i_2] [17] [i_1] [i_0]) ? (arr_4 [i_1]) : (arr_1 [i_1]))))))));
                    var_19 ^= (((((~-1162083959) >= -1162083959)) ? 0 : ((~(arr_0 [i_0] [i_2])))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        arr_11 [i_3] = (arr_9 [i_3 - 2]);

        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_19 [6] [i_4 - 1] [i_5] [i_3] [i_6] = (!82);
                        arr_20 [i_3] [i_3] [i_4 + 1] [10] [i_5] [i_6] &= (max((arr_14 [i_3] [10] [10]), 240));
                    }
                }
            }
            var_20 = (arr_15 [i_3] [i_4 + 1]);
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_21 += (max(9, (arr_18 [17] [10] [i_7])));

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                arr_25 [i_3] [i_7] [i_7] [i_8] = 2147483647;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_31 [i_3 - 3] [i_3] [i_3 - 3] [i_8] [i_9] [i_10] = ((((max(19, 183))) ? (((arr_30 [i_3] [i_7] [i_7] [i_7] [i_7]) ? (0 ^ var_13) : (~255))) : (((arr_14 [i_7] [i_3] [i_9]) & (arr_14 [i_9] [i_3] [i_3 + 1])))));
                            arr_32 [i_3 + 2] [i_3 - 3] [i_7] [i_8] [i_3] [i_9] [i_10 + 1] = (((arr_13 [i_3] [i_3]) < 2));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_38 [i_3 + 1] [i_3] [11] = ((256483870 <= (((arr_21 [i_3 + 1]) ? (arr_21 [i_3 - 3]) : (arr_21 [i_3 + 1])))));
                            var_22 += max((((((arr_23 [i_12 + 1]) ? 256483885 : var_10)))), (max(((var_1 ? var_0 : (arr_18 [i_7] [i_8] [i_11 + 1]))), ((max(var_13, 230))))));
                        }
                    }
                }
                var_23 = (~((256483911 ? 256483911 : (var_12 || 2147483647))));
            }
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                var_24 += (min((((((-98 ? (arr_21 [i_7]) : (arr_12 [i_3] [i_3] [i_13])))) ? 2147483647 : (arr_12 [i_3 - 3] [i_3 + 2] [i_3 + 2]))), var_5));
                arr_42 [i_3] = ((~(((arr_27 [i_3 + 1] [i_3 - 3] [i_3 - 2] [i_3 + 1] [i_3 + 2]) ^ var_15))));
            }
            arr_43 [i_3] [i_3] [i_7] = (max((~31744), (arr_24 [i_3 - 1] [i_7])));
        }
    }
    var_25 = var_0;
    #pragma endscop
}
