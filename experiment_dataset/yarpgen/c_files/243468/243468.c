/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = (max(var_10, (((((max((arr_1 [i_0]), (arr_1 [1])))) == (((arr_1 [i_0]) ? var_5 : (arr_1 [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            var_11 = (((25 >= 1355960199) < (arr_1 [i_0])));
            var_12 = var_0;
            var_13 = ((~(((arr_2 [i_1]) >> 0))));
            var_14 ^= (arr_1 [i_1 - 2]);
            var_15 += (~-5121);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            var_16 = (((((arr_6 [i_2]) ? (arr_0 [i_0] [i_2]) : (arr_4 [i_0] [i_0]))) >= var_5));
            var_17 = (min(var_17, (arr_2 [i_2 - 2])));
            var_18 = (min(var_18, (arr_5 [23] [23])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_10 [i_0] [i_3] [i_3] = (arr_9 [i_0] [i_3]);
            var_19 = ((var_8 + 9223372036854775807) >> (((((arr_1 [i_0]) ^ (((75 >> (-432582641 + 432582668)))))) - 4003667208)));
            var_20 |= ((~(max((!432582640), 1607877199))));
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_21 = var_7;
        var_22 = (max(var_22, (((((-(arr_6 [i_4])))) ? ((-(max(0, 1928577230188649775)))) : ((((max((arr_7 [i_4] [i_4]), 22)))))))));
        var_23 = ((59698 ? (arr_12 [i_4]) : (arr_5 [i_4] [12])));
    }
    var_24 = (2687090096 ? ((((max(var_2, 8589934591))) ? ((var_8 ? -8589934592 : var_0)) : var_4)) : (((16383 ? 5838 : 29729))));
    var_25 = ((((var_5 ? (((var_3 ? var_2 : var_6))) : ((var_5 ? 0 : var_7)))) * (((((max(-8388957588312328511, var_1))) ? (max(var_6, var_2)) : 3392968286)))));
    #pragma endscop
}
