/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4292870144;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = 73;
        var_14 *= 50;

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] = 60;
            var_15 &= 73;
            var_16 = 13284749814620325711;
            var_17 = 2204407393;
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, -37));
                    arr_13 [i_3] = -61;
                    arr_14 [i_0] = -28;

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        arr_18 [i_0] = 1587100005;
                        arr_19 [i_0] [i_0] = -75;

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_19 = 73;
                            arr_22 [i_0] [i_0] [i_0] [i_0] [2] = 4;
                        }
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_20 = (max(var_20, 43));
                        var_21 = 111;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_22 &= (-127 - 1);
        var_23 = (-127 - 1);

        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_24 &= 13944491227044616574;
            arr_31 [i_7] [i_7] = 8778723253060423173;
            var_25 = (max(var_25, 1587100005));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 3; i_10 < 16;i_10 += 1)
            {
                var_26 = 74;
                arr_37 [i_7] [i_9] [i_10] [i_10] = 2992524670608068268;
                arr_38 [i_7] [i_9] [i_9] &= 2687532561503627974;
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    {
                        var_27 = 5305017211032012113;
                        var_28 = 3282651974;
                    }
                }
            }
            arr_45 [i_7] [i_7] [i_7] = 73;
            var_29 = (max(var_29, 5171194878944718409));
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_50 [i_7] [i_13] = 4294967295;
            var_30 = -43;
        }
        arr_51 [i_7] [i_7] = -90;
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 23;i_14 += 1)
    {
        arr_56 [i_14] &= 107;
        arr_57 [i_14 - 1] [i_14] = 2707867291;
        arr_58 [i_14] = -75;
        arr_59 [i_14] [i_14] = 2529285100;
    }
    var_31 ^= 69;
    #pragma endscop
}
