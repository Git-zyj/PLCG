/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0 + 1]) && (((741547261 ? 445826075 : (arr_0 [i_0]))))));
        var_13 *= ((((((arr_2 [3]) ? var_6 : (arr_3 [i_0])))) ? (arr_3 [i_0 - 1]) : (((arr_1 [i_0]) ? (arr_1 [i_0 + 2]) : var_0))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = ((var_3 ? ((-((-(arr_5 [i_1]))))) : ((~((12 ? (arr_5 [i_1]) : var_3))))));
        var_15 = (max(var_15, ((((+-3553420021) ? ((((((arr_6 [i_1]) && var_3))) % var_10)) : (var_11 | var_9))))));

        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_16 = (arr_0 [i_2]);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_17 += var_11;
                var_18 = (max(var_18, var_1));
            }
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_19 = ((~(((((max((arr_4 [i_1] [i_2]), var_5))) == 12)))));
                    arr_16 [i_1] [i_2] [i_4] [i_4 + 1] [i_4] [i_5] = var_10;
                    var_20 = var_1;
                }
                var_21 = (max(((~(arr_10 [i_2 + 1] [i_4] [i_4 - 1]))), ((var_10 ^ (arr_10 [i_2 - 1] [i_2 - 1] [i_4 - 1])))));
                var_22 = ((((min(var_4, (arr_12 [2] [i_2 + 1])))) ? ((max(var_11, var_9))) : ((max((arr_7 [i_4 + 1] [i_4 - 1]), var_11)))));
                var_23 = (max(11, (((~((var_10 << (var_7 + 164113212))))))));
            }
            var_24 = ((~((4294967292 % (((max(1, 63555))))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_25 = (min(var_25, var_0));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_1] = (arr_4 [i_1] [i_2]);
                            arr_28 [i_1] [i_2] [i_6] [i_7] [i_8] = var_9;
                            var_26 = (~var_0);
                            arr_29 [i_1] [i_2] [i_6] [i_7] [i_8] = ((~(arr_8 [i_2 + 2])));
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_27 += ((((((max((-2147483647 - 1), 3553420035))) ? 3299590574770430955 : (arr_10 [1] [i_6] [i_6]))) / ((((0 || (arr_22 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))))));
                            var_28 = ((max((max((arr_33 [i_9] [i_9] [i_7] [i_6] [i_2] [i_1]), (arr_0 [i_1]))), ((max((arr_30 [i_1]), 27542))))));
                            arr_34 [1] [i_2 + 1] [i_6] [i_7] [i_9] = ((~((~((var_9 ? 3553420036 : var_3))))));
                        }
                    }
                }
            }
            arr_35 [i_1] [i_1] [i_2 + 1] = var_5;
        }
        for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_29 = (max(var_29, ((((((~(arr_19 [i_1] [i_10 + 1] [i_10])))) == 12954874644718868739)))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {
                        arr_42 [i_12] [i_10] [i_11] [i_11] [i_10] [i_1] = (max((((arr_17 [i_1] [i_10 - 1] [i_10 - 1] [i_1]) | (max(4294967292, (arr_25 [i_12] [i_11] [10] [10] [i_1]))))), ((((arr_32 [i_1]) ? (arr_18 [i_10] [i_10] [i_1]) : (arr_22 [i_1] [i_10 + 2] [i_10 + 2] [i_12]))))));

                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_30 = var_9;
                            var_31 = var_9;
                        }
                        for (int i_14 = 2; i_14 < 8;i_14 += 1)
                        {
                            var_32 = var_7;
                            var_33 = (max(var_33, (((((max((max(var_11, var_0)), 3553420035))) ? (min((arr_5 [i_1]), -839628204)) : -var_5)))));
                            arr_47 [i_10] [i_10] = (((6440425123550011769 != var_0) || (arr_10 [i_10] [i_10 + 1] [i_14 - 1])));
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 18;i_15 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 17;i_18 += 1)
                {
                    {

                        for (int i_19 = 1; i_19 < 18;i_19 += 1)
                        {
                            var_34 = var_5;
                            var_35 = ((((var_1 && (!var_10))) && 65535));
                            var_36 = ((((min(var_11, ((var_10 ? (arr_57 [i_15] [i_16] [i_16] [i_19]) : (arr_60 [i_15] [i_16] [i_17] [i_17] [i_18] [i_18] [i_19 - 1])))))) && ((((~var_5) ? var_10 : var_7)))));
                            var_37 += (((-(var_7 + var_8))));
                        }
                        arr_61 [i_15] = (arr_49 [i_15]);

                        for (int i_20 = 0; i_20 < 19;i_20 += 1)
                        {
                            arr_64 [i_15 - 1] [i_15] [i_17] = 0;
                            var_38 = max(((max(var_7, var_9))), ((((max(-1, 12954874644718868748))) ? 5491869428990682876 : 6453349867032239074)));
                        }
                        /* vectorizable */
                        for (int i_21 = 3; i_21 < 16;i_21 += 1)
                        {
                            var_39 = -var_7;
                            var_40 |= var_1;
                        }
                    }
                }
            }
        }
        var_41 = ((((max((arr_62 [i_15 - 1] [i_15] [i_15] [i_15 + 1] [i_15] [i_15] [i_15 + 1]), (arr_62 [i_15] [8] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1])))) % ((1 ? (arr_55 [i_15] [i_15] [i_15] [i_15]) : (min(var_3, (arr_55 [i_15] [0] [i_15] [i_15 + 1])))))));
        /* LoopNest 3 */
        for (int i_22 = 3; i_22 < 18;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 17;i_23 += 1)
            {
                for (int i_24 = 1; i_24 < 18;i_24 += 1)
                {
                    {
                        arr_75 [i_15] [i_22] [i_15] [i_23 - 1] [i_23 + 1] [14] = (min(((((arr_57 [i_15] [i_22 - 3] [i_23] [i_24]) | var_3))), -17));
                        var_42 &= 4;
                    }
                }
            }
        }
        var_43 |= (arr_59 [i_15] [i_15 + 1] [i_15] [i_15] [i_15] [i_15]);
        var_44 += ((!(arr_54 [i_15 + 1] [i_15] [i_15] [i_15 + 1])));
    }
    /* vectorizable */
    for (int i_25 = 1; i_25 < 18;i_25 += 1) /* same iter space */
    {
        var_45 = (arr_57 [i_25 - 1] [i_25] [i_25 + 1] [i_25]);
        var_46 = (arr_71 [i_25] [i_25] [i_25] [i_25 - 1]);
        var_47 = (((arr_66 [i_25 + 1] [i_25 + 1] [i_25] [i_25] [i_25]) ? (arr_66 [i_25] [i_25 + 1] [i_25] [i_25 + 1] [i_25]) : (arr_66 [i_25] [i_25 + 1] [7] [i_25] [i_25 + 1])));
        var_48 = (arr_52 [i_25] [7]);
    }
    var_49 = var_4;
    #pragma endscop
}
