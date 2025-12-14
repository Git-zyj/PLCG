/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = var_4;
        var_17 = 39854;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 |= 16384;
            var_19 = (min(var_19, (48804 && 176)));
            var_20 = (((((-(arr_4 [i_0] [i_0] [i_0])))) ? (arr_3 [i_0] [i_0] [i_0]) : (((arr_0 [i_0]) & (arr_2 [1])))));
            var_21 = -1;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = (~1839208992);
            var_22 |= 255;
            arr_9 [i_0] = (74 % -8101);
            var_23 = (max(3054754571, (min(2455758314, 3132869322))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_0] [i_0] = (((((~18446744073709551615) ? (min(var_6, (arr_10 [i_0] [i_3] [i_3]))) : -1)) << (-8131 + 8170)));
            var_24 = (arr_3 [i_0] [i_0] [i_0]);
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            var_25 -= (arr_4 [15] [i_4] [i_4]);
            var_26 = 8179;
            arr_16 [i_0] |= ((-(arr_15 [i_0] [6] [6])));
            arr_17 [i_4] [i_4] = 1;
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_27 = (((arr_3 [i_5] [i_6] [i_5]) + ((var_0 / (arr_4 [i_5] [i_5] [i_5])))));
            var_28 = ((((var_10 ? (arr_7 [i_5] [i_6]) : 30))));
        }
        var_29 = var_7;
        var_30 *= ((((var_11 == (arr_0 [i_5])))));
    }
    var_31 -= 25678;
    #pragma endscop
}
