/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_17 = var_3;

            for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_0] [19] [i_0] = ((~(var_15 != var_12)));
                var_18 = (min(var_18, ((((arr_2 [i_0] [i_0]) | 0)))));
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                arr_12 [i_1] |= (1 ^ 1);
                arr_13 [i_0] [16] [i_0] = (((((511 ? (arr_2 [12] [i_0]) : var_2))) ? var_8 : -2));
            }
            arr_14 [11] [i_0] [i_0] = 0;
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            arr_17 [18] [21] [i_4] = ((((max((max(var_14, 4138776149)), 1385445660))) ? (arr_2 [22] [22]) : (arr_5 [i_0] [i_0] [i_0])));
            var_19 = (52007 ? (arr_3 [i_4] [i_4]) : ((max(-887578924, 4294966785))));
            var_20 = var_4;
            var_21 = ((4294966784 ? 13529 : 2933110944236946540));
        }
        var_22 = (max(var_22, (((((((var_6 ? 1 : (-32767 - 1))))) ? ((-(arr_4 [i_0] [i_0] [i_0]))) : ((((((~(arr_7 [18] [17] [i_0] [i_0])))) <= (arr_11 [i_0] [22] [i_0])))))))));
        var_23 = (((arr_7 [i_0] [1] [i_0] [i_0]) ? (~var_12) : (-127 - 1)));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_24 = (min(var_24, var_4));
        var_25 = ((+((((arr_8 [2] [23] [2] [i_5]) <= (0 > 218))))));
        var_26 = (13529 ? ((((max(var_0, var_3))) ? (((arr_10 [i_5] [7] [14]) % (arr_21 [11] [i_5]))) : ((max(var_14, var_8))))) : -887578924);
        arr_22 [2] [i_5] = ((((var_4 ? (arr_2 [i_5] [i_5]) : var_16)) % ((((((~(arr_2 [12] [3])))) ? 887578924 : (4294966784 <= 84))))));
        arr_23 [i_5] = (((((0 ? var_15 : (arr_19 [i_5] [i_5])))) ? (((-(arr_19 [i_5] [i_5])))) : (18446744073709551615 - 1610612736)));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_27 = (max(var_27, ((((((55 ? (arr_7 [i_6] [i_6] [i_6] [i_6]) : var_6))) ? (((((var_12 ? (arr_18 [i_6] [9]) : (arr_1 [8]))) & (arr_2 [i_6] [i_6])))) : (((var_11 > var_14) ? (arr_0 [i_6] [i_6]) : ((~(arr_8 [i_6] [i_6] [i_6] [i_6]))))))))));
        var_28 *= 1294706217592892343;
    }
    for (int i_7 = 3; i_7 < 15;i_7 += 1)
    {
        var_29 = 1;
        var_30 = (((arr_1 [i_7 - 1]) ^ ((((((arr_11 [1] [i_7 - 3] [i_7 + 2]) ? 2147483647 : 23))) ? (arr_25 [i_7 + 1] [i_7]) : 4294966776))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                {
                    arr_32 [i_7] [i_9] [i_8] [i_9] = (((29 % 71) ? (((arr_4 [i_9 + 2] [i_9 + 2] [i_9 + 2]) ? 887578923 : ((16376 ? (arr_3 [0] [19]) : var_7)))) : (((((4294967295 ? var_2 : (arr_3 [i_8] [i_8])))) ? ((-24220 ? 887578924 : var_3)) : (arr_15 [i_9] [i_7 - 2])))));

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_37 [i_8] [i_9] [i_10] = (((arr_3 [i_10] [i_8]) ? ((var_2 ? 4294966785 : (arr_29 [i_9 + 3] [15] [i_9 + 3]))) : ((~(arr_11 [i_9 + 2] [0] [0])))));
                        arr_38 [9] [i_9] [12] [9] = (arr_31 [11] [11] [i_9] [i_10]);
                    }
                }
            }
        }
    }
    var_31 = (var_4 + var_0);
    #pragma endscop
}
