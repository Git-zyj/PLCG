/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((+(max(((var_12 ? (arr_2 [i_1] [9] [14]) : 1)), ((max(var_1, 1)))))));
                var_15 = ((~(~var_12)));

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_0] = (arr_2 [13] [i_1] [i_2]);
                    arr_7 [13] [i_1] [i_2] = (((((5961347901523633790 ? -42 : -133868556))) ? ((~(arr_1 [i_0 + 3]))) : var_4));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_16 = (arr_3 [0] [20]);
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_17 = (((arr_13 [i_3] [i_3] [i_3]) > ((((((var_0 ? (arr_4 [i_1]) : var_12))) ? (arr_1 [i_0 - 1]) : (((arr_4 [i_0]) | var_5)))))));
                                arr_16 [i_0] [5] [9] [i_3] [i_3] [i_3] [i_0] = var_12;
                                var_18 = (max(var_18, ((max((((((max((arr_15 [i_0] [i_0 + 1] [i_0 + 3] [i_0] [i_0] [i_0 + 3]), var_10))) ? (max(1115396593, (arr_14 [i_0] [i_1] [2] [i_1] [i_0]))) : ((((arr_1 [i_0]) << (((arr_15 [i_0 - 2] [11] [i_3] [i_4 - 1] [11] [i_5]) - 52)))))))), (arr_3 [i_5] [1]))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_1] [i_3] = (((!(arr_13 [i_3] [i_0] [i_0 - 2]))) ? (((((arr_3 [i_1] [i_3]) ? (arr_3 [i_0 - 1] [i_3]) : var_9)) / var_0)) : (133868555 && 5500242422395991717));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_24 [3] [3] [i_3] [i_6] [i_7] = (((min(((var_12 ? var_6 : (arr_1 [i_1]))), (var_12 || var_3))) * ((509457399 ? -133868556 : 71))));
                                var_19 = (min((max(1609391342037634796, -4239543960960560410)), (((!(arr_4 [i_0 + 3]))))));
                            }
                        }
                    }
                    var_20 ^= (((((((arr_13 [18] [i_1] [i_0 + 3]) != (arr_13 [1] [i_1] [i_0 - 2]))))) * (min(var_12, var_3))));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, ((!(((var_12 ? (arr_8 [i_8] [12] [6]) : (arr_10 [19] [6] [16] [i_1]))))))));
                    var_22 += (((arr_11 [i_8] [i_1] [i_0 - 3]) >> (var_6 - 50723)));
                    var_23 = ((4333177178116744626 ? (((!(arr_19 [20] [i_1])))) : (max(var_4, 4294967280))));

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_24 = (min(var_24, var_2));
                            var_25 *= ((((((arr_11 [i_8] [i_8] [i_8]) ? (arr_18 [14]) : (((arr_11 [6] [i_1] [i_1]) ? (arr_10 [i_10 - 1] [2] [i_1] [i_0]) : (arr_1 [i_8])))))) ? var_1 : (min((arr_14 [i_0] [i_8] [i_10 - 1] [i_0 + 2] [i_10 - 1]), var_8))));
                        }
                        for (int i_11 = 4; i_11 < 20;i_11 += 1)
                        {
                            var_26 *= (arr_33 [i_11] [14] [i_11 - 2] [i_11] [i_11] [i_11 - 1]);
                            arr_39 [i_9] [i_1] [3] [i_9] [i_0] = (!var_1);
                            arr_40 [i_0] [i_11] [i_0 - 2] [i_0 + 3] [i_0 + 3] &= (max(((~(arr_33 [i_11] [i_9] [i_1] [i_0 - 1] [i_0] [i_11]))), ((var_2 << (-133868556 + 133868574)))));
                            arr_41 [1] [i_9] [i_0] [i_9] [i_0] = ((!((min((arr_32 [i_0 - 3] [1] [i_8] [i_9] [12]), (arr_34 [i_8] [i_0]))))));
                            var_27 = (!var_6);
                        }
                        arr_42 [8] [8] [i_8] [16] &= (max((((max(4294967295, 1609391342037634796)) * (((max(130, 1)))))), 1609391342037634796));
                    }
                }
            }
        }
    }
    var_28 = -14359;
    var_29 = var_8;
    var_30 |= var_2;
    #pragma endscop
}
