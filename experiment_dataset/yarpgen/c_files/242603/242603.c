/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_13 += ((((max((max(0, -43)), (236 == var_9)))) == (((arr_3 [i_1 + 3] [i_1 - 2]) + (arr_3 [i_1 - 1] [i_1 + 1])))));
            var_14 = (((max(var_2, (arr_1 [i_0] [i_1]))) | (var_7 && var_3)));
            var_15 = (min(var_15, ((max(2398219440008153282, -5075066849971694681)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_2] [i_1] [i_2] = min((((arr_9 [i_3] [i_2] [i_2] [i_1] [i_0]) ? (arr_9 [i_0] [i_1 - 2] [i_2] [5] [i_3]) : (max(39, (arr_3 [i_0] [i_1]))))), 0);
                        var_16 = (min((arr_1 [i_1] [i_1 + 1]), -79820870));
                        var_17 |= (max(((+(((arr_8 [i_1]) ? var_4 : var_12)))), 234));
                    }
                }
            }
        }
        var_18 = max(var_1, ((((~24) & ((125 >> (var_9 - 502219475)))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_19 -= 125;
        arr_15 [i_4] = arr_13 [i_4];
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_24 [i_7] [i_6] [i_7] [i_8] = ((((((var_6 > (arr_19 [i_5] [i_5] [i_7])))) + 15)));
                        arr_25 [i_5] [i_7] [i_7] [i_8] [12] [i_5] = (((arr_23 [i_5] [i_6] [i_7] [17] [i_8]) == ((max((max(var_4, (arr_18 [i_8] [i_5]))), (max(var_5, -123)))))));
                        var_20 = 19;
                    }
                    arr_26 [i_7] [i_7] [i_5] = (((((max((arr_20 [21]), -52)))) && var_2));
                }
            }
        }
        arr_27 [i_5] = ((-(((!(((~(arr_18 [i_5] [3])))))))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            var_21 ^= ((min(3658, 805)));
                            var_22 = (max(var_22, (!var_4)));
                            var_23 -= (max((max(-8, var_0)), (min((min(var_9, (arr_33 [i_5]))), (max((arr_31 [i_12] [i_12] [i_12] [12]), var_12))))));
                        }
                        arr_38 [i_9] [i_9] [i_9] [i_10] [i_10] = (max((arr_23 [i_5] [i_9] [i_9] [i_10] [9]), (((min(854010566, (arr_30 [i_5] [i_9 + 2] [6] [i_11]))) | ((((arr_23 [i_5] [i_5] [i_10] [10] [i_11]) > (arr_21 [i_9]))))))));
                        var_24 *= (((arr_30 [i_10] [i_10] [i_9 + 1] [i_9 + 2]) > (arr_36 [i_9 - 1] [i_9])));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_25 &= (max((((var_5 ? var_9 : var_2))), (arr_37 [i_13] [i_13] [i_13] [1] [i_13] [i_13] [i_13])));
        arr_43 [22] = (((arr_32 [i_13] [i_13] [i_13] [i_13]) - (arr_32 [i_13] [i_13] [11] [0])));
    }
    var_26 = var_11;
    var_27 = (((max((~var_0), (min(9223372036854775807, 2147483647)))) > (((min(var_1, -1)) & (~var_3)))));
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            {
                arr_51 [i_15] [i_14] [i_14] = ((((max(24, (!230)))) ? (arr_28 [17] [17]) : (arr_44 [i_15])));
                var_28 = (max(var_28, (((((max(0, 52))) ? (((-1 != var_1) ? (arr_28 [i_14] [6]) : -var_12)) : (max(((123 - (arr_37 [i_14] [i_14] [16] [i_15] [16] [16] [i_15]))), ((~(arr_33 [i_14]))))))))));
                var_29 = (max(var_29, -1060818869));
            }
        }
    }
    #pragma endscop
}
