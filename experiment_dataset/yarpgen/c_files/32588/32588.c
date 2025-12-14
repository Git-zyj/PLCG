/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (min((var_16 ^ 511), ((((511 / 127) >> (var_16 - 8113089194458151016))))));
        arr_3 [i_0] = 6;
        arr_4 [1] |= 245;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] &= ((!(((1 ^ 5553182915226254776) && ((((arr_5 [i_1]) ? (arr_5 [i_1]) : -16324)))))));
        var_19 = ((+(max((arr_6 [i_1] [i_1]), (arr_5 [i_1])))));
        arr_8 [i_1] = (!-104);
        arr_9 [i_1] = (((arr_5 [i_1]) <= (~-7268095435754573391)));
    }
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        var_20 = (max(var_20, 60579));
        arr_12 [i_2] = (((((((~60576) + 2147483647)) << ((((~(-32767 - 1))) - 32767)))) == (~32767)));
        var_21 = (min(2652576707801457214, (((-(max(0, var_11)))))));
        var_22 = (~(min(4960, ((60576 ? var_10 : 16)))));
        arr_13 [i_2] [i_2] = 8;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_23 ^= (((((arr_5 [i_3]) ^ (arr_5 [i_3]))) - -99));
        var_24 = (min(var_24, (((103 != (arr_14 [i_3]))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_25 = (min(var_25, ((max(((+((min((arr_19 [i_4 + 1] [12] [i_5]), 103))))), ((~((4 >> (29539 - 29514))))))))));

                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_26 = var_14;
                                arr_28 [i_5] [i_5] = ((511 >> (55705 - 55687)));
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_5] = arr_16 [i_4] [i_6 - 3];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_36 [i_5] [i_9] [i_6 + 1] [i_5] [i_5] = 103;
                                var_27 = 101;
                                arr_37 [i_5] [i_5] = (arr_33 [1] [i_4 + 1] [i_4 + 1] [i_5] [i_10 + 4] [i_10 + 4] [i_6 + 1]);
                            }
                        }
                    }
                    arr_38 [i_4] [i_4] [i_4 - 1] [i_5] = (i_5 % 2 == 0) ? ((~(min(((((arr_23 [i_5] [i_5]) >> (((arr_21 [i_4] [i_4] [i_5]) - 2667779080))))), var_1)))) : ((~(min(((((arr_23 [i_5] [i_5]) >> (((((arr_21 [i_4] [i_4] [i_5]) - 2667779080)) - 360110255))))), var_1))));
                    arr_39 [i_6] [4] [4] [i_4 - 3] &= (~3272082441572480197);
                    arr_40 [i_5] [i_5] [i_5] [i_5] = (min((min((4294967295 / 3826), (var_5 * 63))), -7160));
                }
                arr_41 [i_4] [i_5] [i_5] = ((-(arr_19 [i_4] [i_5] [i_4 - 2])));
                var_28 = (max(var_28, (((((arr_22 [i_4 - 2] [i_4 + 1] [i_4]) > (arr_25 [16] [16])))))));
                var_29 = var_15;
            }
        }
    }
    var_30 = ((((max(((1 ? 0 : 1)), 159))) ? (max((var_3 - var_6), ((125 ? var_0 : 2130706432)))) : 15174661632137071402));
    #pragma endscop
}
