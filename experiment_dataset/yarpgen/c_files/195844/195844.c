/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 -= (arr_5 [i_2]);
                    var_16 = ((-(max((arr_3 [i_1] [i_2]), (((var_7 ? (arr_6 [i_2]) : -11)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_17 = (min(var_12, ((((arr_13 [i_3] [i_5] [i_4] [i_3]) || ((max(93, (arr_12 [i_3] [i_3 + 2] [i_3])))))))));
                    var_18 ^= -var_13;

                    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_19 = arr_12 [i_5] [i_4] [i_3 - 2];
                        var_20 = ((~((var_2 | (arr_13 [i_6 + 2] [i_5] [i_6 + 2] [i_6])))));
                        var_21 = -1531;
                        var_22 = (((arr_5 [i_5]) ? (((arr_3 [i_3] [i_5]) + (var_0 + 1531))) : var_2));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_23 = ((~(arr_3 [i_3 + 1] [i_3 + 1])));
                        var_24 = 1701736020186128578;
                        var_25 &= var_11;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_26 = arr_5 [i_5];
                            var_27 ^= ((~(arr_6 [i_3 + 1])));
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_28 = ((!(arr_4 [i_5] [i_3 + 3] [i_5] [i_4])));
                            var_29 = (arr_20 [i_8] [i_5] [i_3 - 2]);
                            var_30 = (min(var_30, (arr_9 [i_4] [i_10])));
                            var_31 ^= var_2;
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_32 = (var_0 ? (arr_9 [i_3 + 3] [i_4]) : (arr_29 [7] [i_3] [i_3] [i_5] [i_3 + 3] [i_3 + 3]));
                            var_33 = (((arr_19 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3] [i_3] [i_3 + 1]) ? (arr_23 [i_5] [11] [i_4] [i_5] [i_8] [11]) : (arr_2 [i_5])));
                            var_34 = ((((arr_15 [i_3] [i_4] [i_5]) ? var_4 : 1)));
                        }
                        var_35 = (arr_12 [i_3 + 3] [i_3 + 3] [i_3 + 3]);
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_36 = (min(var_36, (arr_14 [i_12 + 1] [6] [6] [i_3 - 2])));
                            var_37 = (max(var_37, ((((arr_4 [i_3] [6] [i_3 - 1] [i_12]) ? (arr_14 [i_4] [i_4] [4] [i_13]) : var_0)))));
                        }
                        var_38 = ((3149326391 || ((((arr_4 [i_3] [i_3 - 1] [i_5] [i_3]) / var_6)))));
                        var_39 -= (~5752086361269289539);
                    }
                    var_40 = (arr_18 [i_3] [i_4] [i_5] [i_5]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            {
                var_41 = ((((max(((min(var_8, -1524))), var_10))) ? var_14 : (min(var_8, (((arr_5 [i_15]) + (arr_5 [i_14])))))));
                var_42 = (-var_1 | 1);
                var_43 = var_1;
            }
        }
    }
    #pragma endscop
}
