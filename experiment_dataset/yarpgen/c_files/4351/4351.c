/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (max(var_9, (max((!var_9), var_7))));
    var_20 = (((((min(var_13, var_13)) + 244))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = ((!((!(-32767 - 1)))));
        arr_3 [i_0] [i_0] = (min(((max(34359738367, (arr_0 [i_0])))), (((arr_1 [i_0]) ? (((max(-15, -19577)))) : var_8))));
        arr_4 [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (min(var_22, ((((max((min(20, (arr_5 [i_1] [11]))), var_9)) ^ var_16)))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_23 = (min(var_23, (((var_5 <= (-32767 - 1))))));
            arr_11 [i_2] = ((-(arr_9 [i_1] [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_24 = -981517757511656692;
            var_25 = (((((1 ? -2089188819 : -1001829205388769983))) ? (((arr_12 [13]) << (192 - 177))) : ((63 % (arr_9 [i_1] [i_3])))));
        }
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            var_26 &= 19589;
            var_27 = (((((((var_9 ? (arr_7 [i_1] [i_4 - 3]) : (arr_7 [i_1] [18]))) | (0 < var_6)))) ? (((max((!181086423066323466), (max((arr_6 [i_4 + 1]), -13128)))))) : (((arr_7 [i_1] [10]) / (arr_12 [i_4 + 1])))));
        }
        for (int i_5 = 3; i_5 < 24;i_5 += 1)
        {
            var_28 = (min((((!-6328006170898766097) % (max((arr_5 [14] [i_5]), 32764)))), (((!(arr_16 [i_5] [i_5 - 1]))))));
            var_29 = (max(var_29, (!386739471)));
            arr_18 [i_5] = ((2011493039 ? 12 : -2107678679));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_30 = (min(var_30, (((!(((4336764390050068257 ? (arr_17 [20]) : (arr_17 [16])))))))));
                            var_31 = (((1 | -3741509468573719185) & ((((-2147483647 - 1) ? (arr_24 [i_1] [i_5 - 2] [i_6 - 2] [i_7] [i_8 - 2]) : (arr_13 [i_5 + 1] [i_8 - 4]))))));
                        }
                    }
                }
            }
        }
        var_32 = (((arr_14 [i_1]) ? ((1 ? -115 : -1)) : ((((max(65080, var_1))) ? (455 / 3747017158551945905) : (((-(arr_17 [1]))))))));
        var_33 = ((((-((max(-122, (arr_22 [i_1] [14] [18] [i_1] [i_1] [i_1])))))) >> ((((((arr_13 [i_1] [3]) == 105))) / 191))));
    }
    #pragma endscop
}
