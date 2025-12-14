/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_10 = (((arr_3 [i_0]) + (((var_5 ? 223555322 : var_5)))));
        var_11 = (max((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2]))), (max((arr_3 [i_0 - 1]), ((((arr_3 [i_0]) ? var_4 : (arr_2 [i_0]))))))));
        var_12 = (min((((min(var_3, 18446744073709551613)))), (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_13 = (max(var_13, ((((32 + (arr_6 [i_1] [i_1] [i_2])))))));
            var_14 = (((min((arr_4 [i_2 + 1]), (((arr_5 [i_1]) ? var_7 : (arr_7 [i_1] [i_1]))))) - (((arr_7 [i_1] [2]) ? ((var_5 ? var_3 : (arr_6 [i_1] [i_1] [i_1]))) : (40609 && 4294967295)))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_15 &= (max(63719278006382469, (((((34324 ? 2027978242 : -23068))) ? ((5743971151988345739 ? -89 : 18446744073709551599)) : (((max(15, -8))))))));
            var_16 = (((((arr_10 [i_1] [i_3]) ? 61440 : (((arr_7 [i_1] [18]) ^ (arr_10 [i_1] [i_3])))))) ? ((max((((arr_4 [16]) ? -110 : (arr_9 [i_3] [i_3]))), var_6))) : (arr_10 [i_1] [i_3]));
            var_17 += var_2;
            var_18 = (((((var_9 ? 2147483647 : (arr_9 [i_3] [i_3]))) / -110)));
        }
        arr_11 [i_1] [i_1] &= (((arr_5 [i_1]) ? ((var_1 ? (((min((arr_6 [i_1] [i_1] [i_1]), 20)))) : 4190208)) : (((max(var_6, (arr_9 [14] [i_1])))))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_19 += (!var_8);
        var_20 = arr_4 [i_4];
        arr_14 [i_4] [i_4] = (max(0, 1));

        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_19 [i_4] = (arr_5 [i_5]);
            arr_20 [i_4] = ((((arr_9 [i_4] [i_5]) ? 16 : (((arr_7 [i_4] [i_5]) ? 31210 : 0)))));
        }
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            arr_23 [i_4] = ((-(((arr_13 [i_4]) ? 0 : (max(var_1, (arr_10 [i_4] [i_6 + 1])))))));
            arr_24 [i_4] [i_4] [i_4] = 2047;
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_33 [i_4] [i_4] [i_8] [i_9 - 1] [i_4] [i_10] [i_10] = var_1;
                            arr_34 [0] [i_4] [i_8] [i_9] [i_10] = (arr_25 [i_4] [3]);
                            var_21 = (arr_25 [13] [i_9 + 1]);
                        }
                    }
                }
                var_22 -= (max(((max((arr_29 [i_4] [i_7] [i_7] [i_8] [i_8]), 14))), 511));
            }
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                var_23 ^= var_0;
                arr_38 [7] [i_4] [7] = (65195 / -2147483647);
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                arr_41 [i_4] [i_7] [i_12] = -2147483641;

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_45 [i_4] = var_4;
                    var_24 = var_8;
                    var_25 += ((0 ? (((32130 ? 288225978105200640 : -32129))) : 207061533720038386));
                    var_26 ^= (arr_39 [i_12] [i_12]);
                }
                var_27 = ((((max(93, (arr_15 [i_12] [i_12] [i_4])))) ? (max((arr_25 [i_4] [i_12]), (arr_25 [i_4] [i_7]))) : (((((min(-32129, var_2))) ? (((arr_7 [i_4] [i_4]) ? (arr_27 [i_4]) : 62626)) : (((max(38, var_4)))))))));
            }
            var_28 = ((arr_35 [i_4] [i_4] [i_4]) ? 124 : -64);
            arr_46 [i_4] [i_4] [i_4] = (arr_15 [i_4] [i_4] [i_4]);
        }
    }
    var_29 = var_3;
    #pragma endscop
}
