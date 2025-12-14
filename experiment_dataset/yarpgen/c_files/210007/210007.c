/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (((arr_2 [i_0]) & ((177 * (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_1] = (((arr_2 [i_0]) ? ((177 ? 177 : -12234)) : ((-(arr_0 [i_0])))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    var_15 += (((arr_0 [i_1]) / var_1));
                    var_16 = (arr_6 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_2]);
                    arr_12 [i_0] [i_0] [i_1] [i_3 - 1] [i_0] [i_3] = ((((((arr_0 [i_3 - 1]) + 2147483647)) >> (((arr_4 [i_3] [i_1]) - 32)))));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_17 = (min(var_17, ((((var_1 >= 1) ? (((-(arr_7 [12] [i_0] [i_2] [12])))) : (arr_9 [i_0] [i_1] [i_2] [i_4]))))));
                    arr_16 [i_0] [i_1] [1] [i_1] [i_2] [i_4] = (69 ^ 1);
                }
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    var_18 = ((var_2 == ((var_4 - (arr_2 [i_0])))));
                    arr_20 [i_1] [i_2] [i_5] = ((var_9 - (182 <= var_11)));
                    arr_21 [i_2] [i_1] [i_2] [i_2] = (0 / 49);
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        arr_28 [i_1] = 71;
                        var_19 = (arr_25 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7]);
                    }
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_2] [i_1] [i_8] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                        var_20 -= ((((var_6 | (arr_11 [i_6])))) == (arr_25 [i_0] [i_1] [i_1] [i_2] [i_0] [i_2]));
                        arr_32 [i_1] = (((arr_29 [i_8 - 1] [2] [2] [13] [i_1]) - (arr_6 [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8 + 1])));
                    }
                    var_21 = ((((((arr_11 [i_1]) ? (arr_11 [i_1]) : -1191796059))) ? (arr_1 [i_1]) : var_2));
                    arr_33 [i_0] [i_1] [i_1] [i_0] [i_0] &= 169;
                }
                var_22 += ((~(((arr_26 [i_2] [i_1] [10]) & (arr_7 [i_2] [i_0] [i_0] [i_0])))));

                for (int i_9 = 4; i_9 < 15;i_9 += 1)
                {
                    var_23 = (arr_14 [i_0] [1] [i_1] [i_9 - 2]);
                    var_24 = (79 - 178653921);
                }
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_25 -= (((8763 & 8763) && (arr_26 [i_0] [i_1] [i_10])));
                var_26 = (((((var_1 ? (arr_11 [i_1]) : (arr_23 [i_0] [i_0] [i_1] [1] [i_1])))) ? var_9 : ((1 ? 32767 : 3297265540))));
                var_27 -= ((~(arr_19 [i_0] [i_0] [i_1] [i_0])));
            }
            arr_38 [i_0] [i_1] = (arr_26 [i_1] [1] [i_0]);
        }
        arr_39 [i_0] [0] = (arr_11 [i_0]);
    }
    var_28 = (((1 + var_0) ^ (var_8 / 4294967295)));
    var_29 = var_6;
    #pragma endscop
}
