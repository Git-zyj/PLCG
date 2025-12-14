/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 << (((max(var_9, (~var_17))) - 24006))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((var_15 ? var_18 : (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_7 [7] [i_1] = var_7;
            arr_8 [i_1] = ((((((-32767 - 1) < -2320))) ^ (arr_3 [i_0] [1])));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_12 [i_0] [i_2] = (min(2319, (arr_1 [i_0])));
            arr_13 [i_0] = ((-2320 ? (max(((~(arr_9 [i_2]))), (arr_6 [i_0] [i_0] [i_2]))) : var_10));
            var_21 = (max(var_21, (((var_6 ? ((max(-1402, var_9))) : (arr_6 [i_0] [i_2] [i_0]))))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_22 += (arr_10 [i_3]);

                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [12] [i_4] [i_5] |= (((-2320 + 2147483647) << (32760 - 32760)));
                        arr_21 [13] [13] [i_4] [i_5] = (arr_19 [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_6] = ((var_10 ? var_3 : ((-(max(2319, -4076981509928825773))))));
                        var_23 = ((~((max(var_6, (arr_1 [i_0]))))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_24 = (!-var_8);
                        var_25 = (((29927 ? 2320 : 0)) > ((-(arr_29 [i_0] [i_3] [i_3] [i_7]))));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_26 ^= (min(((var_19 * (arr_19 [i_0]))), (((arr_9 [i_0]) / (arr_19 [i_0])))));
                        arr_32 [i_0] = (((((~(arr_22 [i_0] [i_3] [i_4] [i_3])))) ? (((29927 <= (arr_22 [i_0] [13] [i_4] [i_4])))) : ((~(arr_22 [12] [i_3] [i_4] [i_8])))));
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] = (min(-1402, -2336));
                        var_27 = (max(var_27, (((((~((min(var_9, (arr_14 [i_3] [i_4] [i_3])))))) ^ ((min(-2319, -1))))))));

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_37 [i_3] [i_3] [1] = var_17;
                            var_28 = (max(29927, 0));
                            arr_38 [i_0] [i_3] [i_3] [1] [8] [i_4] [2] = (arr_28 [i_0] [i_3] [9] [9]);
                            arr_39 [i_0] [i_3] [7] [7] [i_9] = (max((((-29949 ? -2320 : 1023))), (min(var_12, (arr_9 [i_9])))));
                            var_29 = (min(var_29, (((var_0 == var_18) <= ((((arr_5 [i_0] [i_0]) != var_18)))))));
                        }
                    }
                }
            }
        }
        var_30 = (min(var_30, (((var_6 >> (-var_14 + 1561))))));
    }
    #pragma endscop
}
