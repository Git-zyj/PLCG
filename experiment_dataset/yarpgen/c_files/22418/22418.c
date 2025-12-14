/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (~1);
    var_11 = (!var_3);
    var_12 += ((((max((max(var_0, var_9)), var_0))) ? ((1 % (28500 + 1))) : ((1 ? var_7 : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((-((((arr_2 [i_1]) <= 21968)))));

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_14 = (min(var_14, ((max(var_4, (~1))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [i_0] [i_0] = 1;
                        var_15 = (((arr_8 [i_2] [i_0] [i_3] [i_2] [i_3]) ? var_3 : (arr_9 [i_3 - 2] [i_3 - 2] [i_2] [i_3 - 2])));
                        arr_11 [3] [i_2] [i_1] [i_2] [i_0] = ((-5672542891580767389 ? (arr_2 [i_3 - 1]) : 137));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_14 [6] [i_2] [10] [i_2] [i_2] [i_1] &= (max(1099511627775, 1));
                        arr_15 [i_0] [i_2] [9] [i_4] = ((!((max(var_0, (arr_2 [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_16 = ((2701092680 >> (21963 - 21953)));

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_17 *= (--1670688946);
                            arr_23 [i_0] [i_6] [i_2] [i_2] [i_6] [i_1] = (((arr_13 [i_2] [i_6] [i_6] [i_6]) / (arr_13 [i_2] [5] [i_2] [i_5])));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_18 = (((!(arr_16 [i_0] [i_0] [i_0]))));
                            var_19 *= (((((5672542891580767374 ? 2701092680 : (arr_19 [i_0] [i_1] [i_1])))) % (arr_2 [i_2 + 2])));
                            var_20 -= (arr_7 [i_7] [i_7] [i_7]);
                        }
                        var_21 += -var_7;
                    }
                    for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        var_22 = ((63 / (((max(140737488355327, var_3))))));
                        var_23 *= max(((1 ? 11522924400354104739 : (((max(1, var_5)))))), (max((192 ^ var_7), (11522924400354104746 | var_2))));
                        var_24 = (min(var_24, ((max((((arr_12 [i_0] [i_1] [i_2] [i_2 + 3] [i_1]) + 21966)), (arr_12 [i_0] [i_8] [i_0] [i_2 - 1] [i_1]))))));
                    }
                    var_25 = (min(var_25, 16296012938750768079));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_32 [i_9] [7] [i_1] [i_1] = (((arr_27 [0] [0] [i_1] [i_9]) / (((1 ? (arr_5 [i_1] [i_1]) : (var_8 % 76))))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_36 [i_0] [i_1] [i_9] [i_10] [i_10] |= 8323072;
                        arr_37 [i_0] [i_0] [6] [i_9] [i_10] = -61816;
                    }
                    var_26 = ((((((3023979247 ? 2701092689 : var_4)) > var_6)) ? (max((~var_5), (arr_21 [i_1]))) : (((((arr_27 [i_9] [i_0] [i_9] [i_0]) / 188))))));
                    arr_38 [i_0] [i_1] [i_9] |= ((!(((-5152359903550718227 ? (arr_2 [i_1]) : 254)))));
                }
                var_27 = (((-(arr_30 [i_0]))));
            }
        }
    }
    #pragma endscop
}
