/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = 0;
        var_12 *= 21;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = 13;
        var_14 += 21;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_15 = -1323744526;
            var_16 *= 18;
            arr_9 [i_1] [i_2] [i_2] = 2147483647;

            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                var_17 = 2016849302813069067;
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = 0;
                            var_18 = (max(var_18, 15968827275608014767));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_25 [i_1] [i_1] = 852294516;
            arr_26 [i_1] [i_1] [i_1] = 15968827275608014767;
            var_19 = (min(var_19, 0));
        }
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            var_20 = (max(var_20, 24));
            arr_30 [i_1] = 1;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    {
                        arr_38 [i_1] [5] [i_7] [i_1] [i_9] = 18446744073709551602;
                        arr_39 [i_1] [i_7] [i_1] [i_8] [0] = 16682318928131088021;
                        var_21 += -6200;
                        var_22 = (max(var_22, 18446744073709551612));
                        arr_40 [i_1] [i_1] [i_1] [i_1] = 281474976710655;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_44 [i_1] = 4294967291;
            arr_45 [i_1] = 4194303;
            var_23 *= 1;
        }
        var_24 &= 3064804628242233801;
        var_25 *= 2614470018;
    }
    for (int i_11 = 2; i_11 < 23;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 24;i_15 += 1)
                        {
                            {
                                var_26 *= 6;
                                var_27 += -3226684688538338031;
                                var_28 = (min(var_28, 13916452088675781595));
                            }
                        }
                    }
                    var_29 *= 12338006484544406370;
                    arr_63 [i_11] [i_12] [i_12] [i_11] = 13;
                    var_30 *= -3226684688538338032;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                {
                    arr_68 [i_16] [i_17] [i_16] [i_16] = -4194304;

                    /* vectorizable */
                    for (int i_18 = 2; i_18 < 21;i_18 += 1)
                    {
                        var_31 *= -67312870;
                        var_32 = (min(var_32, -3226684688538338031));
                        var_33 = (min(var_33, -1));
                    }
                    /* vectorizable */
                    for (int i_19 = 2; i_19 < 24;i_19 += 1)
                    {

                        for (int i_20 = 0; i_20 < 25;i_20 += 1)
                        {
                            var_34 = 10203825542929462720;
                            var_35 *= 1;
                            arr_77 [i_16] [14] [i_16] = -1;
                            var_36 = 18446744073709551615;
                            var_37 *= -1972017845;
                        }
                        arr_78 [i_11 - 2] [i_11 - 2] [12] [i_19] &= 1144410557;
                        var_38 += -1619514081;
                    }
                }
            }
        }
        var_39 = 2477916798101536834;
        var_40 = -1116533335452977208;
        var_41 = (max(var_41, -4194303));
    }
    for (int i_21 = 2; i_21 < 13;i_21 += 1)
    {
        arr_82 [i_21] = 1;
        arr_83 [i_21 - 2] [i_21] = -3226684688538338031;
    }
    var_42 = var_4;
    #pragma endscop
}
