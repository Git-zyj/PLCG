/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 5917881412847689217;
    var_13 |= var_6;
    var_14 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_15 = ((-((0 ? 9071147543637356089 : var_5))));
        arr_2 [i_0] [i_0] = 4294967295;
        arr_3 [i_0] = (-((0 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [13]))));
        var_16 = (min(var_16, (arr_0 [i_0 - 1] [i_0 - 1])));
        var_17 = (arr_1 [i_0 + 1] [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_18 [i_1] [i_1] [i_2] [i_4] [i_4] [i_4] [i_1 - 1] = (1 & (min((((var_5 / (arr_12 [i_5] [i_3] [i_2] [i_1])))), (max(65535, (arr_6 [i_1] [i_1]))))));
                            var_18 = -212047490;
                            arr_19 [i_1 - 1] [i_2] [i_3] [i_4] = 1;
                            arr_20 [i_1] [2] [i_3] [i_2] [i_5] [i_2] [i_2] = (arr_13 [i_1] [i_2] [i_3] [i_4] [i_5] [i_1]);
                            arr_21 [i_2] [i_4] [i_4] [i_3] [i_2] [i_2] [i_2] = 76;
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_19 = (arr_9 [i_2]);
                            var_20 = (arr_12 [i_1] [i_2] [i_3] [i_4]);
                            var_21 ^= arr_7 [i_1] [i_2] [i_3];
                            arr_24 [i_2] [i_3] [i_2] [i_2] = -7060;
                            var_22 = (max(var_22, ((max(65511, 15246613720084176453)))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_23 = ((((min(var_5, 2147483643))) ? var_3 : (((!(arr_26 [i_1 - 1] [i_2] [i_3] [i_2] [i_7]))))));
                            arr_28 [i_2] [i_2] = (((arr_27 [i_4 - 1] [i_2] [i_1] [i_2] [13]) << (((max(9223372036854775807, -95)) - 9223372036854775790))));
                            var_24 = (max(var_24, (((~((min((arr_26 [i_3] [i_3] [i_1] [i_3] [i_1]), (arr_13 [i_4 + 2] [i_4] [i_4] [i_4 + 1] [i_1 - 1] [i_1])))))))));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_25 = ((2147483621 ? 245 : 1));
                            var_26 = 2147483621;
                        }

                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            var_27 = (!65531);
                            arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [7] = (arr_15 [i_2] [i_1 - 1] [i_1]);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_36 [i_2] [i_3] [i_2] [i_2] = 72;
                            arr_37 [i_1] [i_1] [12] [i_2] [i_1] = (((arr_8 [i_4 - 1] [i_1 - 1]) <= var_10));
                            arr_38 [i_2] [i_2] [i_2] = ((-((var_6 << (458415027 - 458415005)))));
                            arr_39 [i_2] [i_2] [14] [14] [i_10] [i_1] [i_1] = var_8;
                        }
                    }
                }
            }
        }
        var_28 = ((var_0 ? ((~(arr_22 [i_1]))) : (!-257127432)));
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_48 [i_1] [i_11] [i_12] [i_13] = (arr_7 [i_13] [i_11 + 2] [i_1]);
                        var_29 = (((((var_8 & (~0)))) ? (~510) : ((~(max(4362051355782454977, (arr_31 [i_12] [i_12])))))));
                        var_30 = (max(var_30, 0));
                    }
                    var_31 = (max(var_31, ((min((max(-790, 1)), (1 != -20283686123721840))))));
                    arr_49 [i_1 - 1] = var_1;
                    var_32 = (max(var_32, (arr_41 [6] [i_11])));
                }
            }
        }
    }
    var_33 = max(var_9, (var_0 <= var_4));
    #pragma endscop
}
