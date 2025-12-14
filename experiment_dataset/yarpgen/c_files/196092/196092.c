/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~186);
        var_19 = (((-4 + 2147483647) << (((((arr_1 [i_0] [i_0]) & -1458903401)) - 706049))));
        var_20 = (min(var_20, 15));
        var_21 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = (((((-13 % ((-(arr_7 [i_1])))))) ? (--45871) : (max((arr_7 [i_1]), (arr_7 [i_1])))));
        arr_8 [16] = 4088;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {

                for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        var_23 = (((arr_9 [i_4] [i_2]) ? (((((arr_0 [i_3 + 3]) ? var_10 : var_12)) & -4088)) : ((max(-1971961927, (min(0, (arr_18 [11] [i_4]))))))));
                        var_24 = ((((max(var_4, var_12))) >= 18446744073709551615));
                        var_25 = (max(var_25, (4088 & var_11)));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_21 [i_6] [i_6] [i_6] [i_2] = var_5;
                        var_26 = (min(var_26, ((max(((max((arr_0 [i_3 + 3]), (arr_0 [i_3 + 2])))), -116573131)))));
                        var_27 = (max(var_27, 65535));
                        var_28 += ((~((~(max((arr_1 [i_2] [15]), -1575))))));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_29 = (max(6, (arr_2 [i_4 - 3])));
                        var_30 = (max((((((20 ? var_10 : var_15))) ? 14065597489741219597 : 1)), var_10));
                    }
                    arr_24 [i_2] = var_11;
                    var_31 = (var_2 > var_12);
                }
                for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_27 [i_3] [i_2] [0] [8] = (((~-22) ? ((max(199, (arr_20 [i_8 + 2] [i_2] [i_2])))) : ((min(0, 1574)))));
                    arr_28 [i_2] [i_2] = ((((!(arr_23 [i_3 + 3] [i_3 + 1]))) ? ((-(arr_23 [i_3 + 3] [i_3 + 1]))) : ((max(var_2, 28)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_32 = ((~((max(19657, 19634)))));
                                var_33 = (min(var_33, (((~((-38878 ? var_1 : 48)))))));
                            }
                        }
                    }
                    var_34 = ((-((max((arr_12 [i_8] [i_8] [i_3 + 2]), (arr_23 [i_8 + 4] [i_3 - 1]))))));
                }
                var_35 = (max((((arr_17 [6] [i_2] [i_3] [10] [i_2]) ? var_11 : var_17)), ((~(arr_17 [5] [i_2] [5] [i_3 + 2] [i_2])))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {

                            for (int i_13 = 0; i_13 < 1;i_13 += 1)
                            {
                                arr_44 [i_2] [i_2] [i_11] [i_2] [i_13] = ((((min((max(var_12, -13)), ((-(arr_16 [i_12] [i_12] [3] [i_12])))))) ? var_8 : (((((((arr_29 [i_13] [i_12] [i_11] [i_3] [i_2]) || var_2))) != ((max(126, 56221))))))));
                                arr_45 [i_3 - 1] [i_12] [i_13] [i_11] [i_13] &= (~var_16);
                            }
                            arr_46 [i_12] &= ((((min((arr_10 [i_12]), (arr_10 [i_12])))) ? (((arr_10 [i_12]) + (arr_10 [i_12]))) : ((49 / (arr_10 [i_12])))));
                            arr_47 [i_2] = (max(9314, 1));
                            arr_48 [i_11] [i_3 + 3] [i_11] [i_2] = var_15;
                            var_36 = (arr_32 [i_3 - 1] [i_2] [i_3] [i_3] [i_12] [i_3 - 1] [i_3 - 1]);
                        }
                    }
                }
                var_37 = -55968;
                var_38 = (max((!42), (((arr_17 [i_3] [i_3] [i_3] [i_3 + 2] [i_3]) ? (arr_17 [17] [i_3 - 1] [0] [i_3 + 2] [15]) : 0))));
            }
        }
    }
    #pragma endscop
}
