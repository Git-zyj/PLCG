/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (var_8 > -1720419299);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((((-9223372036854775807 - 1) && 0)) ? (max((arr_0 [i_1 - 1] [i_2 + 1]), (arr_0 [i_1 - 1] [i_2 + 1]))) : (arr_0 [i_1 - 1] [i_2 + 1]))))));
                    var_16 += ((-(arr_4 [i_0] [i_1] [1])));
                    var_17 = ((+(max((arr_2 [i_1]), ((-97 ? var_6 : var_6))))));
                }
            }
        }
        arr_6 [i_0] = 38333;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_9 [8] [i_3] [i_3] = var_10;
            var_18 = (max(var_18, (arr_2 [i_3])));
            var_19 &= ((var_10 / (-127 - 1)));

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_20 |= ((-(arr_2 [i_3])));
                    var_21 -= (arr_12 [4] [i_4] [i_3] [i_0]);
                    arr_16 [i_5] [i_4] [i_0] = (3457042107 || 1);
                }

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_22 = (min(var_22, (((-5724092020938866622 ? 111 : 7699966688020658447)))));
                    arr_21 [i_6] [0] [i_0] [i_4] = ((var_8 ? (arr_17 [i_3]) : ((124 << (((-9846 + 9875) - 17))))));
                    var_23 = ((127 ? ((12622069312891923309 ? 4642361347882511377 : 1)) : (arr_19 [i_0] [i_3] [i_4] [i_6])));
                    var_24 = -124;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_25 ^= var_0;
                    var_26 = (1 <= -7476);
                    var_27 = (((arr_13 [i_0] [i_3] [i_3] [i_4] [i_4] [i_7]) ? (arr_13 [i_7] [i_7] [i_4] [i_4] [i_3] [i_0]) : (arr_15 [i_0] [i_3] [i_4] [i_7])));
                    var_28 = ((12622069312891923302 ? 5824674760817628321 : (((2117022667 ? var_4 : 35)))));
                }

                for (int i_8 = 4; i_8 < 8;i_8 += 1)
                {
                    arr_26 [i_0] [i_3] [i_4] [i_8] [i_3] [i_4] = ((arr_13 [i_0] [i_0] [i_3] [i_4] [i_4] [i_8]) ? var_3 : (arr_13 [i_8 - 2] [i_8 - 4] [i_4] [i_3] [i_0] [i_0]));
                    arr_27 [i_0] [i_0] [1] [i_0] = 125;
                    arr_28 [i_8] [i_4] [i_4] [i_3] [i_0] = ((72022409665839104 ? 4850438137747932795 : 19));
                }

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_29 = ((14289 ? (((arr_8 [i_9]) % 14992)) : (arr_23 [i_0] [9] [1] [i_9])));
                    arr_32 [i_9] [i_0] [i_3] [i_4] [i_9] [i_9] = ((((((arr_0 [i_0] [i_4]) ? 18446744073709551608 : (arr_3 [i_9] [i_4])))) ? (32767 >> 1) : var_8));
                    var_30 = (min(var_30, (arr_22 [i_9] [i_3])));
                }
            }
        }
        arr_33 [i_0] = 4294967290;
    }
    #pragma endscop
}
