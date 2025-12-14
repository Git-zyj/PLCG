/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = ((!var_0) >= 73);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [1] = ((+(((arr_2 [i_0]) ^ (arr_3 [i_0] [i_1] [5])))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = ((arr_3 [i_3] [0] [0]) < 1623531364);
                        var_16 = ((min((((var_6 < (arr_3 [i_1] [i_1] [i_1])))), 30245)));
                    }
                }
            }
            arr_10 [i_0] [i_0] [i_0] = ((((min(35291, 30271))) ? 1820953116 : ((113 << (96 - 83)))));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_17 = (max((min((arr_11 [i_0] [i_0]), (max(var_7, 65535)))), (((((var_11 ? (arr_9 [i_0] [i_0] [0] [i_4]) : var_6)) > var_7)))));
            var_18 += ((35291 + (((arr_1 [i_0] [i_4]) ? ((((arr_4 [i_0] [5] [i_4]) ? var_7 : var_1))) : ((35267 ? 4294967295 : 3832138308))))));
            var_19 = (-(((arr_0 [i_0] [i_4]) - var_3)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        var_20 += ((((((arr_11 [i_0] [i_5]) ? (arr_1 [5] [5]) : 104))) && (var_3 != 20002)));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_21 |= min((arr_14 [i_4] [i_4]), (min((var_6 != 35291), var_0)));
                            var_22 = (((((arr_6 [i_6 + 2] [i_6] [i_0]) - (1326308437 && 469762048))) / (max(((max(-37, (arr_11 [i_0] [i_0])))), -var_10))));
                            var_23 = arr_18 [i_0] [i_0] [i_5] [i_0] [i_0];
                            var_24 = (min(((min((arr_6 [i_6 - 1] [i_6 + 1] [i_0]), ((((arr_12 [i_0] [i_6 + 1] [i_0]) > (arr_17 [4] [i_6 + 2] [1] [6] [6]))))))), ((1590212351 ? 25463 : (min(6, 0))))));
                        }

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_25 = (min(var_25, -9169561311296417764));
                            var_26 = (101 || -1);
                            var_27 = var_11;
                            var_28 = var_1;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_29 = (-224863849 ? -32764 : -1);
            arr_25 [i_0] = ((arr_24 [i_0] [i_9]) & (arr_2 [i_0]));
            var_30 = ((3277115791 > (var_10 * 0)));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_31 = (((((109 + (-2147483647 - 1)))) & (arr_28 [i_0])));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_36 [i_0] [10] [i_0] [10] [i_12 - 1] [i_0] = 1;
                            var_32 |= (var_2 ? ((((((0 ? 1 : (arr_7 [i_0] [i_10] [i_10] [i_13])))) ? ((min(var_0, (arr_17 [i_0] [3] [3] [i_0] [i_0])))) : ((max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_5)))))) : (8442069968012562272 + 1));
                            arr_37 [i_11] [i_11] [i_11] [i_0] [10] = (24813 > 1);
                            var_33 += (~var_12);
                            var_34 -= (max((min((~-1), -1)), -100));
                        }
                    }
                }
                arr_38 [i_0] [i_0] [i_0] = 1;
            }
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        {
                            arr_47 [i_10] [i_14] [i_15] [i_0] = (((min(-1, ((0 ? 27 : var_0)))) != (arr_2 [i_0])));
                            var_35 ^= ((1 ? (arr_23 [8] [8] [i_15]) : (24813 > 99)));
                            var_36 = (min(var_36, ((((((((arr_23 [i_0] [i_10] [1]) ? var_5 : 35267)) + 2147483647)) >> (((arr_23 [1] [1] [1]) - 50279)))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    {
                        arr_54 [3] [3] [i_0] [5] = (((var_1 ? var_1 : -260403173)));
                        arr_55 [i_0] [i_0] [i_0] [i_17] [9] [i_0] = 0;
                        var_37 = (max(var_11, var_5));
                        var_38 = 1833;
                    }
                }
            }
        }
        var_39 += (!((((var_8 + 2147483647) >> (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) - 1904302279))))));
    }
    var_40 = var_9;
    #pragma endscop
}
