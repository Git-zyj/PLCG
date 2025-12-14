/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (~-1);
                var_18 *= 1;
            }
        }
    }
    var_19 = 101;
    var_20 ^= var_3;
    var_21 *= (min(3616378875, var_16));

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        arr_6 [i_2] &= (((((((!509913529) && (((arr_1 [i_2] [i_2]) && 9223372036854775804)))))) - (((!32767) - (arr_0 [i_2] [i_2])))));
        arr_7 [i_2 - 1] = -9223372036854775805;
        var_22 = (min(var_22, 56188));
        var_23 = (max(var_23, (((!(((1 ? (65528 - 9348) : (arr_1 [i_2] [i_2])))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        var_24 = (max(var_24, (((9223372036854775804 * (~var_15))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_19 [i_4] [i_4] [i_5] [i_4] = (((1 != 60925) ? (arr_17 [i_3] [i_3] [i_5] [i_6]) : -var_15));
                        var_25 = (((-32767 - 1) + 2080374784));
                        var_26 ^= (arr_15 [i_4 + 1] [i_4 - 1] [1]);
                        var_27 = (253 != 23);
                        var_28 = (min(var_28, (-9223372036854775784 & 18)));
                    }
                }
            }
        }
        arr_20 [i_3 - 2] = (7017032807346529687 && -9223372036854775785);
        arr_21 [1] &= arr_10 [1] [i_3] [20];
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_29 = (min(var_29, (((~(arr_25 [i_3 + 2] [1] [i_7 - 1]))))));
                        var_30 = (max(var_30, (arr_15 [1] [i_7 + 1] [i_3 + 2])));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_31 = (min(var_31, ((min((~9223372036854775807), (min((arr_18 [i_10] [i_10] [i_10] [1]), (arr_10 [i_10] [i_10] [i_10]))))))));
        var_32 |= ((!((max(153, (~var_14))))));
        var_33 = (-32767 - 1);
        arr_31 [i_10] = ((!(((((((arr_13 [5] [5] [i_10]) >= (arr_25 [i_10] [i_10] [i_10])))) << (((((arr_4 [i_10]) ? 244 : -30231)) + 30247)))))));
    }
    #pragma endscop
}
