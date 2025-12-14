/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = 18446744073709551615;
        var_20 = ((-(arr_0 [i_0 + 1] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_5 [i_1]) && (arr_5 [i_1])));
        var_21 = (((arr_4 [i_1]) <= (arr_5 [i_1])));
        var_22 = (arr_5 [i_1]);
        var_23 ^= 62841;
        var_24 = (min(var_24, ((((arr_5 [i_1]) << (((arr_5 [i_1]) - 36783)))))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        var_25 = var_9;
        var_26 = (((arr_8 [i_2 - 4]) - (arr_8 [i_2 - 4])));
        var_27 = (((((arr_9 [i_2]) << (((((-32767 - 1) + 32788)) - 20)))) << (((arr_9 [i_2 + 1]) - 1526716086))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 6;i_3 += 1)
    {
        var_28 = (((arr_2 [i_3 + 2]) << 20));
        arr_12 [i_3] = (arr_5 [i_3 + 3]);
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_17 [i_5] [i_5] [i_5] = arr_16 [i_4 - 3];
                var_29 += (((((arr_16 [i_4 + 1]) * (arr_16 [i_4 + 1]))) / (arr_16 [i_4 + 1])));
            }
        }
    }
    #pragma endscop
}
