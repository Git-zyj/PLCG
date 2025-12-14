/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_6;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_16 = (min(var_16, (((var_11 || (arr_5 [1]))))));
            var_17 = (0 >> 1);
        }
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_10 [17] = ((1 ? 0 : 2147483624));
        var_18 = (min(var_18, (((~(min((arr_8 [i_2 - 1] [i_2 - 1]), (arr_9 [i_2 - 1] [i_2 - 1]))))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_19 &= (max(var_13, (arr_11 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                {
                    var_20 ^= 1;

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_21 = (((arr_13 [i_3] [i_3]) ? (max(var_5, 83)) : 1));
                        var_22 ^= (max(1, 1));
                    }
                    arr_22 [7] [i_4] [7] = var_15;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_23 ^= 9223372036854775801;
        var_24 *= ((1 ? (((~(arr_23 [i_7])))) : (min(var_2, 1))));
    }
    var_25 = (var_15 | var_15);
    var_26 += var_0;
    #pragma endscop
}
