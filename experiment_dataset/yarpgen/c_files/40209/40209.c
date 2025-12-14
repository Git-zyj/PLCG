/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(8848599295512819354, -377316407));
        var_18 = ((!((max(var_1, -121)))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                var_19 = (max(((min(var_3, (!var_3)))), (max(((max(var_0, var_15))), ((602278829 ? var_13 : var_14))))));
                var_20 ^= var_9;
            }
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                arr_11 [i_0] [i_1 - 1] [i_1 - 1] = ((var_2 ? (min(var_1, (min((arr_5 [i_0]), -602278841)))) : var_1));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_21 = ((((min(var_6, var_6))) * var_11));
                            var_22 = ((-((~((max(var_11, var_7)))))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_23 = (min(var_23, -17));
                    var_24 = (((((min((arr_17 [i_1 - 1] [i_1 - 1]), (arr_17 [i_1 - 1] [i_1 - 1]))))) - (-602278847 * var_12)));
                    var_25 = ((~((~(8848599295512819340 - 17)))));
                    var_26 = (max(((min((var_4 > var_10), 13358))), (((arr_13 [i_1 - 1] [i_1 - 1]) ? (max(9598144778196732262, var_14)) : (min(var_6, (arr_14 [i_0] [i_1 - 1] [i_6] [i_1 - 1] [i_6])))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_27 = var_6;
                    var_28 = var_7;
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    var_29 ^= ((+((var_12 ? (var_7 ^ var_15) : (!var_3)))));
                    var_30 = (((var_0 / -602278834) | (max(var_13, var_15))));
                    var_31 = (min(var_31, (((((~((max(var_9, var_7))))) | (arr_16 [i_0] [i_8] [i_3 - 1] [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_3 - 1]))))));
                }
                var_32 = 98;
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_33 = max((!var_15), (((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) % var_13)));
                arr_28 [i_9] [i_1] [13] [i_0] |= var_0;
                var_34 &= (max((((!(arr_13 [i_1] [i_1])))), 19100));
            }
            arr_29 [i_0] [i_1] [i_1 - 1] = var_7;
            var_35 = 10146401154640781984;
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                {
                    var_36 |= ((18446744073709551609 <= ((max(602278873, (max(var_0, (arr_4 [i_0] [i_10] [i_11]))))))));
                    var_37 = (((((var_14 ? ((-(arr_34 [i_0] [i_0] [i_10] [i_11 + 2]))) : (((min(var_9, 115))))))) / (((arr_3 [i_0] [i_10] [i_11 - 1]) ? (arr_3 [i_11] [i_11 + 1] [i_11]) : (arr_3 [i_0] [i_0] [i_11])))));
                    arr_36 [i_11] = (min(((-(-5532 + 105))), (max((22977 ^ var_5), -115))));
                    var_38 = (max(((((((var_14 >= (arr_23 [i_0] [1] [i_10] [i_11 + 2]))))) / (~var_13))), var_5));
                }
            }
        }
        var_39 -= var_13;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        arr_39 [i_12] = (((((9741122868863834824 ? -16533 : var_14))) ^ (var_11 ^ 11622422765928747386)));
        var_40 &= var_15;

        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            arr_42 [i_12] [i_13 - 1] = var_5;
            var_41 = ((135 ? 6033327614061177639 : (arr_5 [i_13 - 2])));
            var_42 = ((~(arr_38 [i_13 + 1])));
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            arr_45 [i_12] = -5537;
            arr_46 [i_12] [i_12] [10] = var_14;
        }
    }
    #pragma endscop
}
