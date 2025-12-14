/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = ((((((((var_6 ? var_6 : var_8))) ? var_4 : var_7))) ? var_4 : var_0));
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_8;
        var_13 = var_8;
        arr_3 [i_0] [i_0] = (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
        var_14 = (max(var_14, ((17563 ? 0 : 1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                var_15 += 3130782569505269113;
                arr_13 [i_3] [i_3] [i_2] [i_3] = ((6370028055719219189 ? 47949 : 16230528644508287173));
                var_16 = (min(var_16, (((var_9 ? var_3 : var_9)))));
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_17 |= (arr_8 [i_2]);
                arr_18 [i_4] [1] [i_1] = 5811443389844015663;
            }
            arr_19 [i_1] = ((17563 ? (arr_8 [i_2]) : 51319));
            arr_20 [10] [i_1] [13] = (arr_12 [i_1] [i_1] [i_1] [i_1]);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_18 = (max(var_18, var_2));
                    var_19 ^= (arr_23 [i_1] [i_5] [i_6]);

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [9] [i_5] [i_6] [i_7] [i_7] = (arr_17 [i_1] [2] [10]);
                        var_20 = (arr_9 [i_1] [i_1]);
                        var_21 = (arr_7 [i_1] [i_5]);
                        var_22 ^= ((47949 ? 31 : 47973));
                        arr_28 [i_5] [5] [i_6] [5] = var_0;
                    }
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_23 = (((1873 ? var_1 : 17563)));
                            arr_34 [i_1] [i_5] [i_6] [i_8] [i_1] &= (620194682 ? 35 : 17561);
                            var_24 = 6641591609823284800;
                            var_25 -= var_5;
                        }
                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            var_26 -= ((18446744073709551596 ? var_6 : (arr_0 [i_10 - 2])));
                            var_27 |= var_6;
                        }
                        var_28 = (max(var_28, (arr_35 [4] [i_1] [i_8 + 1] [i_8 + 1] [i_5] [i_1] [i_5])));
                        var_29 ^= arr_10 [i_5] [i_8 + 1] [i_8 + 1] [i_1];
                        var_30 ^= (((arr_31 [i_1] [i_5]) ? (arr_31 [i_1] [i_1]) : (arr_31 [i_6] [i_1])));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_31 = var_3;
                        arr_41 [i_1] [i_5] [i_1] [i_1] [i_1] [6] = ((var_9 ? var_2 : var_4));
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        var_32 = ((var_6 ? (arr_23 [9] [i_6] [8]) : var_9));
                        var_33 ^= (arr_24 [i_1]);
                    }
                    arr_44 [5] [i_5] [i_6] [i_6] = (arr_40 [i_1] [i_1] [i_5] [i_1]);
                }
            }
        }
        arr_45 [i_1] = 853534177;
        var_34 *= (arr_31 [i_1] [i_1]);
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    {
                        var_35 ^= 17586;
                        arr_56 [3] [i_15] [i_15] [i_13] [i_13] = (max((((min(var_8, var_4)))), (((arr_49 [i_13]) ? 18446744073709551611 : (max(-1893220883, 15315961504204282502))))));
                        var_36 *= (((((((min((arr_7 [1] [i_14]), var_2))) ? (max(0, 17563)) : ((min(2421202863, (arr_17 [10] [10] [i_16]))))))) ? (arr_23 [i_13] [i_14] [i_15]) : var_8));
                    }
                }
            }
        }
        var_37 ^= arr_16 [i_13] [12] [6] [6];
        arr_57 [i_13] |= -14549;
    }
    #pragma endscop
}
