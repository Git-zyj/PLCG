/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min(((-16980 ? var_3 : var_6)), var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (arr_1 [i_0]);

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_18 = ((((((((arr_5 [i_0] [10] [i_1 + 1] [17]) >> 1))) ? ((var_3 ? 1 : (arr_1 [i_1]))) : ((min((arr_2 [i_2]), var_0))))) >> (((min(var_13, ((var_1 ? var_12 : (arr_0 [5]))))) - 10437366078609805478))));
                    arr_7 [i_0] = (min(((((var_9 >= (arr_0 [i_0]))) ? (arr_0 [i_0]) : (((arr_1 [i_2]) ? 1 : 1)))), (((!(((var_8 ? var_7 : (arr_1 [i_2 - 2])))))))));
                    arr_8 [i_0] [i_0] [i_2 + 2] [i_0] = ((((((((-1 ^ (arr_2 [0])))) ? (((39 ? 1 : var_0))) : (arr_4 [i_1 - 1] [i_1 - 1])))) ? (min(((var_7 ? var_10 : var_7)), ((min((arr_0 [i_1]), (arr_0 [i_0])))))) : (min(((var_1 ? 63 : 0)), (-81797135 ^ 1)))));
                    var_19 = (min(var_19, ((((((var_1 ? 227 : var_14)))) | (((min(var_2, var_0)) ^ 255))))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_20 = ((var_4 ? ((((333054037 ? 1 : var_15)))) : (min((arr_9 [i_3]), ((0 ? 10073645673476940247 : (arr_12 [i_0] [i_1] [i_3])))))));
                    arr_13 [i_0] [1] [i_3] = (min(((!((min(var_11, 7147366810695781657))))), (arr_12 [i_0] [i_1 - 1] [i_3])));

                    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_19 [i_4] [i_5] [i_4] [i_4] [i_4 - 1] = 1;
                            var_21 = (((min((arr_0 [i_0]), (arr_15 [i_5] [i_4] [i_3] [i_0] [i_0]))) >= (min((arr_15 [6] [i_1] [i_1] [7] [i_5]), var_7))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_1 - 1] [20] [19] [i_1 - 1] [i_6] = ((!(arr_11 [i_1 + 1] [i_1] [i_4 - 1])));
                            var_22 = ((var_6 | (arr_11 [i_0] [i_1 - 1] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_23 = ((((min((arr_15 [i_3] [i_3] [i_3] [i_3] [i_3]), (!var_15)))) || ((min(((min(-39, -107))), 128)))));
                            var_24 = (min(var_24, var_11));
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = (((((((min(-117, var_0))) ? var_10 : var_13))) ? (((((28 ? var_8 : var_1))) - (min(var_2, var_15)))) : 49500));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_25 -= (-(-127 - 1));
                            var_26 = (-2147483647 - 1);
                            arr_31 [i_0] [7] = (((-79 ? var_7 : 11299377263013769960)));
                            var_27 = (min(var_27, (arr_24 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1])));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, ((((min((120 || var_4), (var_11 / var_15)))) | (1 * var_12)))));
                            var_29 = ((var_2 << (((min(25775, var_11)) - 25768))));
                            var_30 = ((((min((~var_3), ((var_5 ? var_5 : (arr_10 [0] [16] [16] [i_4])))))) ? var_6 : 17592152489984));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            var_31 &= ((var_12 ? (arr_24 [i_0] [i_0] [i_0] [i_0]) : var_9));
                            var_32 = 30;
                            arr_40 [22] [i_1] [i_1] [i_1] [i_1] = (((arr_25 [i_1 - 1] [i_1 + 1]) | (arr_25 [i_1 - 1] [i_1 + 1])));
                            var_33 = (max(var_33, (((((var_12 ? var_2 : var_12))) ? var_11 : var_8))));
                            var_34 = ((var_5 % ((25 ? var_12 : var_9))));
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            arr_43 [17] [i_1] [i_1] = var_15;
                            arr_44 [i_0] = -25;
                            var_35 = ((((min(13651006063341639451, var_2)) == (((var_5 ? (-2147483647 - 1) : (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    }
                    for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        var_36 = (min(var_36, (((min(var_10, (arr_12 [i_0] [i_1] [i_1])))))));
                        var_37 |= ((((10569896372652081031 ? 0 : (min(0, var_12)))) - (((var_3 & 15) ? var_12 : 18446744073709551615))));
                        arr_47 [i_0] [i_12] = var_15;
                    }
                    for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        arr_50 [1] [1] [i_3] [i_3] = ((((((!var_4) ? (((2665073144785976159 ? 19 : (arr_18 [i_0] [i_1 - 1] [i_3] [i_3] [i_13 - 1])))) : (min(6208414319019853872, 121))))) / (arr_3 [i_3] [i_1])));
                        arr_51 [i_13] = (min(var_11, ((((var_0 ? var_4 : 3507)) + ((((arr_48 [i_3] [i_0] [i_0]) ? var_10 : -3)))))));
                        var_38 ^= ((min((arr_20 [i_0] [i_1 - 1] [i_3] [7] [5]), (arr_20 [i_0] [i_1] [1] [i_3] [i_0]))));
                    }
                    for (int i_14 = 2; i_14 < 21;i_14 += 1) /* same iter space */
                    {

                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            var_39 = (max(var_39, ((min(-111, ((var_13 ? 3 : var_6)))))));
                            arr_56 [i_15] [i_3] [i_1] [i_0] = ((((((24576 ? 19 : 3408794982)))) ? (((1 ? (((arr_52 [i_14]) ? var_9 : 27)) : var_9))) : (min(((var_3 >> (var_5 - 5733767090989329264))), ((var_0 ? (arr_26 [i_15] [i_15] [i_15] [i_15] [i_15] [8]) : 58))))));
                            var_40 = var_10;
                        }
                        for (int i_16 = 1; i_16 < 21;i_16 += 1) /* same iter space */
                        {
                            var_41 = (max(var_41, (arr_11 [i_3] [i_3] [21])));
                            var_42 = (min(var_42, ((min((((((var_12 ? (arr_41 [i_16 + 1] [0] [i_0] [21] [5] [0] [i_0]) : var_5))) & (min(17704061674252247795, 0)))), ((min((arr_37 [i_16 - 1]), (arr_33 [i_0] [i_1] [20] [i_0] [i_16])))))))));
                            var_43 = var_6;
                        }
                        for (int i_17 = 1; i_17 < 21;i_17 += 1) /* same iter space */
                        {
                            var_44 |= var_7;
                            var_45 = var_11;
                        }
                        arr_63 [19] = ((min((arr_10 [i_0] [i_0] [i_0] [i_0]), (min((arr_15 [i_0] [i_0] [1] [i_0] [i_0]), var_15)))) ^ ((((-9223372036854775807 - 1) ? (arr_59 [i_14] [i_14 + 1] [i_14 - 2] [i_14 - 2] [i_14 + 1]) : ((min(0, var_1)))))));
                    }
                }
                arr_64 [i_0] [i_0] = (((((65535 ? (min((arr_14 [i_0] [i_0] [i_1]), (arr_45 [i_0] [i_0] [i_0] [i_0]))) : var_4))) ? var_3 : ((0 ? var_2 : var_12))));
            }
        }
    }
    var_46 |= (min(((-738367398720208191 ? ((var_11 ? 24598 : 18446744073709551615)) : var_5)), var_15));
    #pragma endscop
}
