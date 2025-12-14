/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 += (arr_0 [i_0]);
        var_16 = (min(var_16, (((~(arr_1 [i_0 + 1]))))));
        arr_2 [i_0] [0] = (((((-(arr_0 [1])))) ? 77 : (arr_1 [i_0 - 2])));
        var_17 = (max(var_17, (--3734026729)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_18 += (max(2400185370, -2400185370));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 = (((2400185379 ? var_8 : (arr_7 [i_1] [i_1]))));
            arr_9 [i_2] [i_2] = ((((max(((max((arr_7 [i_1] [i_2]), (arr_4 [i_1])))), (~1894781933)))) ? ((((((arr_3 [7] [7]) | (arr_3 [i_1] [i_1]))) << (var_12 - 2821203217)))) : 1894781926));
            arr_10 [i_2] [i_1] [i_2] = ((((((2139095040 ? 2155872243 : 2155872256)) % (arr_4 [i_1]))) - (var_5 <= 15)));
            var_20 = (min(var_20, ((max((((-(arr_3 [i_2] [i_1])))), (arr_8 [i_1] [i_1] [i_2]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_21 = (max(var_21, -15));

            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                var_22 += (15 & -25590);
                var_23 = (max(var_23, (((-(arr_15 [i_3]))))));
            }
            var_24 ^= 65528;
            var_25 = (arr_15 [19]);
            var_26 += 4294967295;
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_27 = ((-(((arr_15 [i_5]) * (arr_12 [i_5] [i_5])))));

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_28 = -1894781926;
                            var_29 = 535801252;
                            var_30 = (min(var_30, 3759166044));
                            var_31 = (min(var_31, ((((~2139095040) == (arr_24 [i_5] [i_7] [i_7]))))));
                            var_32 = (min(var_32, (((-(max(1051673902, 56565)))))));
                        }
                    }
                }
                var_33 = ((18446744073709551597 > ((((-80 + 2147483647) >> (32624 - 32610))))));
            }

            for (int i_10 = 4; i_10 < 17;i_10 += 1) /* same iter space */
            {
                var_34 = (((((((~(-9223372036854775807 - 1)))) && -32648)) ? ((-var_10 ^ ((((arr_32 [i_5] [i_6]) >= var_0))))) : ((~((((arr_18 [i_5] [i_6]) || var_13)))))));
                var_35 = (max(var_35, ((((((((var_0 && var_13) < (arr_15 [i_5]))))) & 14337007526890592055)))));
            }
            /* vectorizable */
            for (int i_11 = 4; i_11 < 17;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_36 = (((arr_40 [i_5] [5] [12] [i_5] [i_6] [3] [i_13]) < (arr_26 [i_6] [i_6] [i_6] [i_6])));
                            var_37 = (-64 - -1);
                            var_38 ^= ((-12 >= (((arr_26 [14] [i_11 - 3] [i_12] [i_13]) >> (2016 - 2001)))));
                        }
                    }
                }
                var_39 = (((arr_32 [i_11 + 2] [i_6]) & (arr_38 [i_6])));
            }
            for (int i_14 = 4; i_14 < 17;i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        {
                            var_40 = (13 & 4294967295);
                            var_41 += -14;
                        }
                    }
                }
                var_42 &= 1413056248;
                var_43 = (min(var_43, var_7));
            }
            for (int i_17 = 4; i_17 < 17;i_17 += 1) /* same iter space */
            {
                var_44 = (min(var_44, ((max((min((arr_13 [i_17 - 3] [5]), (arr_13 [i_17 + 1] [i_17 + 1]))), (((!(arr_13 [i_17 - 1] [i_17 + 3])))))))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 19;i_19 += 1)
                    {
                        {
                            var_45 = (((712720481161403748 + -9090497000886096034) || (((-80 - (713 && var_13))))));
                            var_46 = (((max(-5826232935971907384, (arr_30 [i_19] [15] [i_18] [i_5] [i_5] [i_5] [i_5]))) - 0));
                        }
                    }
                }
                arr_59 [i_6] [0] = ((((max((arr_39 [i_17] [i_17 - 2] [i_17] [i_17] [i_6] [i_17 - 2] [3]), (arr_39 [i_17] [i_17 + 2] [i_17 + 2] [i_17] [i_6] [i_17] [i_17])))) ? ((max((arr_39 [i_17] [i_17 - 1] [i_17] [i_17] [i_6] [i_17] [9]), (arr_39 [i_17 + 1] [i_17 + 3] [i_17] [i_17 + 3] [i_6] [i_17] [6])))) : (((arr_39 [i_17] [i_17 - 2] [i_17] [i_17] [i_6] [i_17] [i_17 + 1]) + var_14))));
            }
        }
        var_47 = var_0;
    }
    var_48 = (min(var_48, -1));
    #pragma endscop
}
