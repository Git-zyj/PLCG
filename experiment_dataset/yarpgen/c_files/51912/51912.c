/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, 127));
        var_17 = ((1468229694 | ((min(1, 1151690774)))));
        arr_4 [i_0] &= arr_2 [i_0];
        var_18 = var_8;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = 7713293702806282654;
        var_20 &= (var_6 < var_1);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_21 = (((-18410 % 2826737602) ^ (var_10 * var_4)));
                        var_22 &= var_10;
                    }
                }
            }
        }
        arr_15 [i_1] = ((var_4 ^ ((~(arr_6 [i_1])))));
    }
    for (int i_5 = 3; i_5 < 7;i_5 += 1)
    {
        arr_18 [i_5] |= var_2;
        var_23 ^= (0 + (min(132, 1151690774)));
    }
    var_24 = 2026626864;

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_25 += ((((var_12 ^ (arr_22 [3] [i_6]))) < ((min(var_12, (arr_7 [i_6]))))));
        var_26 += ((((((!(var_2 >= var_5))))) >= (min(18446744073709551615, 2826737602))));
        var_27 = (((arr_13 [12] [i_6]) >= (((((max(var_1, var_9))) ? var_13 : var_10)))));
    }
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        var_28 += (((((arr_7 [i_7 - 2]) % var_6)) % var_13));
        arr_25 [8] = ((~(((((~(arr_7 [i_7 - 2])))) - var_8))));
    }
    var_29 &= (min(var_12, -24766));
    var_30 = ((var_6 + 2147483647) << ((((var_5 ? (~var_8) : var_2)) - 1124001104)));
    #pragma endscop
}
