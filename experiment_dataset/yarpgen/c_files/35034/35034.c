/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_12 <= var_8) <= var_13))) & var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (60363 != 1850097511);
                arr_4 [15] &= min((max(3637184775990377010, 16269250188512423221)), ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_2))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    var_19 = (min((!16320), (((110 ? var_15 : 14129)))));
                    var_20 = (((min((arr_10 [i_2] [i_3]), ((min((arr_10 [i_3] [i_4]), var_2))))) - var_11));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_4 - 2] [i_5] = ((4554496440018650344 ? (((arr_10 [i_2] [i_5]) ? (arr_5 [i_4] [i_2]) : (arr_6 [4] [i_3]))) : -6045295760940387793));
                        arr_16 [i_2] [i_2] [0] [0] = ((136 + ((1 ? 18446744073709551615 : (arr_14 [i_2] [i_3] [i_4] [i_4])))));
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_2] = arr_10 [i_4] [i_4];

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_21 = ((-(arr_6 [4] [i_3])));
                            var_22 = var_3;
                            var_23 = ((-(((arr_23 [i_4 - 1] [i_3] [i_2]) ? ((max(var_14, var_6))) : (arr_7 [i_2] [i_2] [i_2])))));
                            var_24 = (((((!(((-(arr_7 [i_3] [i_3] [i_3])))))))) / (min((((arr_8 [9] [20] [4]) ? 1 : (arr_6 [i_7] [i_2]))), ((min((arr_14 [i_2] [i_3] [i_2] [i_6]), var_9))))));
                            var_25 &= ((((max(((((arr_9 [i_3]) == 2444869782))), (2631930618314494963 / var_8)))) ? (((-(min(-6045295760940387806, 6045295760940387793))))) : (((((arr_9 [i_7]) ? var_7 : 2249600790429696)) * (arr_23 [i_2] [i_3] [i_7])))));
                        }

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_26 -= var_14;
                            var_27 = 2631930618314494963;
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            arr_31 [i_2] [i_3] [i_9] [i_2] [i_9] = -13535;
                            var_28 = (max(var_28, (((16033 ? var_6 : (arr_19 [i_3] [i_4] [i_4 - 2] [i_4 + 1] [i_4 - 1] [10]))))));
                            var_29 = (arr_24 [i_9 - 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]);
                            var_30 += (((arr_12 [i_6 - 1] [i_4] [2]) >> (((arr_28 [i_2] [i_3] [i_3] [i_6 + 1] [i_6 + 1]) - 10744672238215219960))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_31 = (min(((min((!9223372036854775807), (min(var_16, var_15))))), ((-(arr_24 [i_2] [i_2] [i_2] [i_3] [15] [15])))));
                        var_32 = (max(((((arr_17 [i_2] [i_2] [i_2]) + 38))), (((!(18446744073709551615 || var_14))))));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_38 [i_2] [i_3] [i_4] [i_11] = (!((!(((6045295760940387787 ? (arr_8 [i_2] [i_3] [i_11]) : 0))))));
                        arr_39 [i_3] = (((arr_18 [i_11]) > -var_14));
                        var_33 = (!2143289344);
                    }
                }
            }
        }
    }
    #pragma endscop
}
