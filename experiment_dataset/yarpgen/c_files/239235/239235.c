/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 += ((((-(((arr_0 [i_0]) ? var_6 : (arr_1 [i_0]))))) << ((((((arr_1 [i_0]) ? -83570726 : -2147483639)) == (((!(arr_1 [i_0])))))))));
        arr_2 [i_0] = (((((1 ^ (arr_1 [i_0])))) | (max(var_4, var_5))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 += ((((max((arr_1 [i_1]), (arr_1 [i_1])))) ? 5132974191600290909 : ((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1]))))));
        var_16 = (+(((arr_5 [4]) ? (!var_0) : (max(-1405842393, var_5)))));
        arr_6 [10] = (((arr_0 [i_1]) ? var_2 : (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((((((arr_7 [i_2]) ? 2054277180 : 0))) * (((((-1211367478 ? 0 : var_4))) & 17428658643346466871))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, var_10));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, (~0)));
                                var_19 = (arr_7 [1]);
                                arr_20 [12] [i_3] [i_3 - 1] [i_5] [i_5] [0] |= -4031903817427901969;
                                var_20 &= (((!(-32767 - 1))) && (~255));
                                arr_21 [i_2] [i_2] [i_3] [i_4] [i_2] [i_2] = (((((~(-127 - 1)))) ? (((-2147483647 - 1) | var_11)) : var_5));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_21 *= ((((min(var_8, 240))) && 0));
                        var_22 |= ((((max(var_0, -4503598553628672))) ? (((-127 ? (min((arr_8 [i_2]), var_7)) : (~var_8)))) : (arr_22 [i_2] [i_2] [i_2] [i_2])));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_26 [i_3 - 1] [i_4] [11] [i_2] = (-32767 - 1);
                            var_23 = ((~((52936 ? 255 : 32))));
                            var_24 = (max(var_24, (arr_18 [i_2] [i_7] [i_2] [i_2])));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_25 *= ((17 % ((var_0 ? 4294967285 : ((var_10 ? 4294967279 : 32767))))));
                            var_26 = (min((((arr_16 [i_4] [15] [i_4] [i_7]) ^ (arr_16 [i_9] [i_9] [i_9] [8]))), 246));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_2] [i_7] [19] [i_2] = (!var_12);
                            arr_35 [i_2] [18] [i_2] [i_2] [i_2] = (max(5081869041713817676, (var_2 || var_3)));
                            arr_36 [i_2] [i_2] = 32760;
                        }
                    }
                    var_27 += (-127 - 1);
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        arr_39 [i_11] = (max(51, (arr_24 [i_11] [i_11 - 1] [i_11] [i_11 + 3] [i_11])));
        var_28 = var_5;
    }
    var_29 = (max(var_29, (((((min(var_9, 261333729))) ? (((var_4 == 34313) ? ((0 ? var_1 : var_13)) : ((min(238, -16133))))) : var_11)))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            {
                var_30 = ((-114 ? (-32767 - 1) : 30));
                var_31 = 1112418076;
            }
        }
    }
    var_32 = var_12;
    #pragma endscop
}
