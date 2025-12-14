/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [6] = (((var_5 >= (var_6 - var_16))));
        var_17 *= (6552015160872808710 && -1);
        var_18 = (((min(var_6, 0)) & 63));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_19 = (((var_11 < -1) ? (var_7 % var_2) : (0 % 4769949906763982854)));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            arr_13 [i_2] [i_2 - 2] [5] [i_1] [4] [4] = 4604;
                            var_20 += ((1784 ? -1467198696 : var_13));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_17 [i_1] = 3;
                            var_21 = (((var_9 ^ 27) ? (var_15 & var_13) : ((65527 ? 9223372036854775807 : var_14))));
                            arr_18 [i_0] [0] [i_1] [i_1] [i_5] [i_3] [i_1] = (((0 - var_14) % ((13784763127364635226 ? 13 : 0))));
                            var_22 = max((((((var_16 ? -1697000565 : var_5))) == -1549722119935394795)), ((!(var_1 && var_15))));
                            arr_19 [i_1] [i_1] = 1697000565;
                        }
                        arr_20 [i_0 + 1] [i_1] [13] = (((((((max(9863, (-127 - 1)))) && ((max(21, 15839507506000327069)))))) >> ((((((((-127 - 1) / var_2))) ? -31 : 56056)) - 56056))));
                        var_23 = ((((var_0 ? var_6 : var_5))) ? ((min(226, 83))) : ((max(-75, var_16))));
                        var_24 = var_15;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_25 = (min(var_25, (var_0 > var_14)));
        var_26 = (max(var_26, (((var_5 ? (-8853 ^ var_11) : 60261)))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_27 *= var_7;
            var_28 = 15839507506000327075;
            arr_25 [i_7] [i_6] = ((-17248 ? -749909609 : (var_11 && var_5)));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        arr_28 [i_8] = 2211926639;
        arr_29 [i_8] = ((49614 << (-1 < -26571)));
        var_29 = ((-749909633 | (var_10 ^ 2211926628)));
    }
    var_30 = ((((!((max(175, 2211926639)))))));
    var_31 *= (min(var_16, (((!((max(399447427743097143, var_9))))))));
    var_32 = var_15;
    var_33 = ((((max(9223372036854775807, (var_13 + var_4)))) ? ((((7757 - var_8) <= var_9))) : (((var_8 >= (2607236567709224547 >= -5340))))));
    #pragma endscop
}
