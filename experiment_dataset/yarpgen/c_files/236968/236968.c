/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~var_8);
        var_18 = (min(var_18, (min(((var_5 ? (arr_0 [i_0] [1]) : ((268435455 ? var_7 : (arr_1 [i_0]))))), (((((~(arr_1 [i_0]))) << ((((min((arr_0 [6] [12]), var_13))) - 12507)))))))));
        var_19 = ((var_9 || ((((arr_1 [i_0]) - (arr_0 [i_0] [i_0]))))));
        arr_3 [12] = ((((((var_1 ? (-32767 - 1) : (-32767 - 1)))) ? var_0 : ((((arr_1 [i_0]) >> (((arr_0 [i_0] [i_0]) - 12489))))))) ^ (arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 -= arr_5 [i_1];
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 += (arr_12 [9] [i_4 - 1] [i_4 + 2] [9]);
                        var_22 = (max(var_22, ((((255 ? var_14 : var_17))))));
                        var_23 = (min(var_23, (((arr_4 [i_4] [i_4 + 2]) ? (arr_9 [i_4 - 2] [16] [16]) : (arr_9 [i_4 - 1] [i_4] [4])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {

                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        var_24 = var_7;
                        arr_21 [i_1] [i_5] [7] [2] |= ((~((var_8 ? 267 : var_2))));

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_25 = (((((~(arr_11 [i_8 + 1] [9] [i_8])))) ? ((((-32 + 2147483647) >> (var_15 + 12776)))) : ((var_15 - (arr_15 [i_1] [12] [i_1])))));
                            arr_24 [i_8] = arr_11 [i_1] [i_1] [i_1];
                            var_26 = (min(var_26, (((62 ? var_12 : ((((arr_16 [15] [i_5] [i_5]) | var_14))))))));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_27 = (arr_26 [7] [i_5 - 2] [i_5] [i_6] [i_7 + 4] [i_9] [i_9]);
                            arr_28 [i_1] [i_5] [i_1] [7] [i_5] [i_1] [i_1] = ((((187 ? (arr_18 [i_5] [i_5]) : (arr_15 [17] [i_5] [i_5 - 1]))) >> ((((24 ? (arr_27 [i_5 - 1] [i_5 - 1]) : (arr_19 [i_7] [i_7]))) + 1156605075566131440))));
                            var_28 = ((((-2147483647 - 1) ^ (arr_17 [i_1] [i_1] [12] [i_1]))));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_31 [3] [1] [16] [16] [13] = (((arr_20 [i_10] [8] [i_7 + 2] [i_1] [13] [11]) ? (arr_20 [i_10] [i_7] [i_7 + 2] [i_6] [i_1] [i_1]) : (arr_20 [i_10] [7] [i_7 + 2] [i_7] [i_6] [i_1])));
                            var_29 *= (((arr_17 [i_7 - 1] [16] [i_7] [i_7 + 4]) ? var_9 : (arr_17 [11] [i_7] [i_7 + 4] [i_7 + 4])));
                            arr_32 [0] [i_7] [i_7] [i_6] [i_5 - 1] [i_5] [i_1] = 0;
                        }
                    }
                    var_30 = ((var_0 ? (arr_10 [2] [i_1] [i_1]) : ((var_11 & (arr_6 [i_6] [i_5])))));
                    arr_33 [i_5] [11] [i_5] [i_1] = 18446744073709551360;
                    var_31 *= (((((var_10 > (arr_22 [i_1] [i_1])))) > ((((arr_29 [i_5] [i_5] [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_5]) > (arr_12 [i_1] [i_5 - 2] [i_5 - 2] [i_6]))))));
                }
            }
        }
        var_32 = ((-(var_9 > var_17)));
    }
    var_33 = ((((min((var_17 <= var_2), (min(var_15, var_8))))) ? var_12 : (((((min(9223372036854775807, var_2)) >= (var_8 >= var_14)))))));
    #pragma endscop
}
