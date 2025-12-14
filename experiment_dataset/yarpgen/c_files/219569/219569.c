/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((max((-32767 - 1), -var_10)) << (var_11 - 1525)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = ((~(((!((min(var_9, 32767))))))));
        var_13 -= (arr_1 [i_0 + 1]);
        var_14 += (min(((((-32755 && 0) != 3238012870))), var_10));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_15 = (max(var_15, (((0 % (~var_11))))));
                        var_16 = ((2732491995 * ((var_7 ? var_10 : var_7))));
                        var_17 = (max(var_17, (arr_11 [23] [23])));
                    }
                }
            }
        }
        var_18 = (((((~(arr_8 [i_1])))) ? (-11502 % 2142769209) : (((-1 + 9223372036854775807) << (250 - 250)))));
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_19 = (arr_17 [i_5] [15] [11]);
                                var_20 = 1;
                            }
                        }
                    }
                    var_21 += (((~(min((arr_12 [4] [i_6]), var_5)))));
                    var_22 = ((var_0 == (max(219, -24))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_23 ^= ((var_6 ^ ((((((max(0, -5499369875419357903))) || 0))))));
                                arr_30 [i_5] [i_10] [i_7] [i_5] [i_5] [i_5] = (((-127 - 1) ? 19080 : 536868864));
                            }
                        }
                    }
                    arr_31 [i_5] [i_6] [i_5] [i_5] = 4283939469;
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_24 = (max(var_24, ((((min((max(var_6, 1033)), (((var_7 ? var_10 : var_4))))) % var_6)))));
        var_25 = (max(var_25, (((((((min(1073741568, var_2))) - ((50540 ? 0 : (arr_22 [4] [4]))))) | ((((((max((arr_13 [12]), 1654892489))) || (arr_27 [0] [i_12] [i_12]))))))))));
        var_26 = (min(var_26, (((~((var_2 ? (arr_6 [i_12] [i_12] [i_12]) : (arr_4 [i_12] [i_12]))))))));
    }
    for (int i_13 = 3; i_13 < 17;i_13 += 1)
    {
        var_27 = (max((((max(0, 2503370525)) % var_10)), ((((max(65529, 2230981811)) != 16147)))));
        arr_36 [i_13] = ((~((((arr_17 [i_13] [i_13 - 1] [i_13]) != var_5)))));
        var_28 = (max((((((-32767 - 1) ? 1 : (arr_17 [i_13] [8] [i_13]))) >> (((76 % 148) - 72)))), var_1));
    }
    var_29 = (max(var_29, ((max(((var_6 * (var_5 * 0))), -var_5)))));
    #pragma endscop
}
