/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (-((var_2 % (arr_4 [i_1] [i_1] [i_1]))));
            var_18 ^= (65 ? 13819316878738366415 : (arr_0 [i_0 - 1]));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_8 [7] [16] |= (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 - 1])));
            arr_9 [i_2] [i_2] = (arr_2 [i_2]);
            arr_10 [0] [0] = (((arr_6 [i_0 - 1] [i_0 - 1]) < var_12));
        }

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_19 *= ((var_8 ? (arr_2 [i_0 + 1]) : var_9));
            arr_14 [i_3] = (((~var_7) | (arr_2 [i_0 + 2])));
        }
        arr_15 [i_0] [i_0 + 1] = var_13;
    }
    var_20 |= (((((var_16 ? var_5 : var_11))) < ((18402937467858202003 ? (30532 && var_16) : var_16))));
    #pragma endscop
}
