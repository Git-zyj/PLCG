/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [0] &= ((~(((1 & var_8) ? (arr_0 [i_0 + 2] [i_0]) : (((arr_1 [9]) ? var_8 : 1517465600))))));
        arr_3 [i_0] = (arr_0 [i_0] [i_0 + 2]);

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_12 = ((((arr_5 [i_0] [4]) > (((arr_0 [i_0 + 2] [i_0 + 2]) & 2777501696)))));
            var_13 = ((-(arr_6 [i_0] [i_1] [i_0])));

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_14 = (min(var_14, (((((2777501695 - 1956876219598174803) ? var_9 : 1))))));
                var_15 = (((((((-79 ? -11092 : 48)) + 71))) ? ((((((arr_6 [i_0] [i_1] [i_2]) ? (arr_5 [i_0] [i_0]) : (arr_7 [i_1] [i_1] [i_1] [i_1])))) ? (((1517465600 >> (var_9 + 21674)))) : (var_3 ^ var_11))) : (((min(0, (arr_4 [i_0] [i_2 + 1])))))));
            }
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_11 [i_0] = ((65535 ? (((2777501696 ? (~var_9) : var_4))) : (~var_3)));
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_16 += ((!(arr_6 [i_3] [i_5 + 1] [i_6])));
                            arr_22 [8] [i_3 + 2] [i_4 + 4] [i_5] [i_5] = ((!((min((max(var_7, 3423740223)), (arr_7 [i_0 + 1] [i_3 + 2] [i_3 + 2] [i_0 + 1]))))));
                            var_17 = (((((arr_20 [i_5] [i_6] [i_5] [i_5] [i_5] [i_5 - 1] [5]) ? var_9 : (arr_4 [i_0 - 1] [i_3 + 1]))) != (arr_8 [i_0] [i_3] [i_3] [i_6])));
                            var_18 = -4440070341792067498;
                            var_19 = 220;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                var_20 = var_7;
                var_21 |= (((arr_24 [i_7] [i_7]) ? 79 : var_10));
            }
            arr_29 [9] [i_7] = (((((var_5 ? var_1 : (arr_25 [i_0] [i_7])))) ? -var_0 : -79));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_22 = (min(var_10, (208 & 2777501696)));
            var_23 = min(((max((arr_30 [i_9]), (((arr_27 [i_0] [i_9] [i_0 + 2]) ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) : 54989))))), (((((var_0 + (arr_28 [i_0] [i_0])))) ? var_0 : (arr_12 [i_0]))));

            /* vectorizable */
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                var_24 = (min(var_24, (arr_28 [i_10] [8])));
                var_25 ^= (arr_25 [i_9] [i_10]);
                var_26 = (max(var_26, 1517465590));
                arr_35 [i_9] |= (((~(arr_15 [i_0] [i_9] [i_10]))));
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_27 -= var_5;
                arr_40 [i_0] [9] [i_11] = var_6;
                arr_41 [i_0] [i_0] [i_0] = (min((((arr_16 [i_0] [i_9] [i_11] [12] [i_0]) && 32)), ((var_11 && ((max(3080941902, 2777501695)))))));
            }
            var_28 = ((!(((var_2 << (arr_1 [i_0]))))));
        }
    }
    var_29 = ((var_0 ? ((1517465600 ? ((3285862513 ? var_9 : var_1)) : 78)) : (((((-72 | 206) + 2147483647)) << ((((min(var_4, 214))) - 214))))));
    #pragma endscop
}
