/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 22846;
    var_12 = min(var_6, var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [4] [14] [4] [14] |= (max(((min((arr_0 [i_1] [i_3]), (arr_0 [i_1] [i_0])))), ((((min(var_2, 255))) ? -27588 : -27592))));
                            var_13 = (max(((((min((arr_4 [i_1] [i_0]), 27587))) ? -27606 : (arr_7 [i_1]))), ((min(27587, (max(var_4, 27588)))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_11 [6] [i_0] [15] [i_4] = (((arr_9 [0] [i_1] [i_1] [i_1]) ? (arr_3 [i_4]) : var_2));
                    var_14 = (((arr_7 [i_0]) > (arr_5 [i_4] [i_4])));
                    var_15 = (min(var_15, (((-17894783427620901753 ? 49236 : 33554431)))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_16 = (((((-((min(27573, -27587)))))) % ((var_8 % ((27577 ? var_6 : 1889945209))))));
                    arr_15 [i_5] = (arr_1 [i_5]);
                    var_17 = (arr_3 [i_0]);

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_18 [i_1] [i_1] [i_5] [i_5] [11] = var_6;
                        arr_19 [i_5] = ((!((((arr_10 [i_1] [8]) ? (arr_12 [i_5]) : ((-27588 * (arr_9 [i_0] [4] [i_0] [10]))))))));
                        var_18 *= (((min(var_10, (var_0 % 27559))) % (((arr_1 [i_0]) * (arr_17 [i_0] [i_1] [8] [i_5] [i_6] [i_1])))));
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_19 = (max(var_19, (arr_20 [10] [i_1] [i_7] [14])));
                            arr_25 [i_5] [i_1] [i_5] [i_7] [i_1] = ((~(min((arr_2 [i_8 - 2] [i_8] [i_8 - 1]), (min(var_3, var_0))))));
                        }
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_5] [4] [i_9] |= ((((28306 * 27559) % var_2)));
                            var_20 = (max(var_20, ((min((min((arr_16 [i_1] [i_7 + 1] [i_1]), (arr_9 [1] [i_1] [i_7] [i_9]))), (arr_12 [6]))))));
                            var_21 = 165;
                            var_22 = (((~(arr_13 [2] [i_5] [i_5]))));
                            var_23 = 27573;
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_31 [i_5] = (min((arr_4 [i_0] [i_0]), (27 * 157)));
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_1] [i_5] [i_0] = ((!((((arr_9 [i_1] [i_5] [i_7 + 1] [i_7]) % -27609)))));
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_24 = (min(var_24, (((max((arr_26 [i_7 + 1] [4] [i_7 + 1]), ((var_5 ? -27587 : 32767)))) * ((((((min(27590, var_2)))) == -var_3)))))));
                            arr_37 [i_11] [i_5] [13] [i_7] [i_5] [i_5] [11] = 65510;
                            arr_38 [i_5] [i_1] [i_1] [i_5] [i_7 - 1] [i_11] = (max((((var_8 == ((((arr_3 [12]) > var_0)))))), (min(var_4, (arr_10 [i_5] [i_7 + 1])))));
                        }
                        var_25 = (min((min((-27560 % var_9), ((14427 ? var_0 : 11263389363347677606)))), (((38156 ? 27544 : -27599)))));
                        var_26 = ((!(((165 % (arr_9 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]))))));
                        arr_39 [i_5] [i_5] [i_5] [i_5] [i_7] [i_7] = ((((min(-27559, 26))) == (((((arr_36 [i_0] [i_0] [i_0] [i_5] [i_0]) > (arr_33 [i_1] [i_1] [i_1] [i_1] [i_1]))) ? ((1287 ? (arr_20 [i_5] [i_5] [i_0] [i_5]) : (arr_24 [i_0] [i_7] [i_1] [4] [i_5] [i_5]))) : (((arr_29 [i_0] [i_0] [i_5]) % (arr_0 [i_7] [i_7])))))));
                    }
                }
            }
        }
    }
    var_27 &= var_8;
    var_28 &= var_7;
    #pragma endscop
}
