/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = (min(var_18, var_4));
        var_19 = ((~(((arr_2 [i_0]) ? var_5 : var_17))));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_20 = (min(var_20, (var_15 && var_3)));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_21 = (((arr_13 [i_1] [0]) ? -var_16 : 1));
                        var_22 &= (var_7 >> (((arr_3 [i_2 - 1] [i_3 + 2] [20]) + 672013055)));
                        var_23 = (!(arr_5 [18]));
                        var_24 = (min(var_24, (-7864813574197958897 - 1688849860263936)));
                        arr_14 [i_3] [i_2] [i_2] = (((arr_1 [i_0] [i_0]) | (arr_2 [4])));
                    }
                }
            }
            var_25 ^= var_12;
            var_26 = ((var_11 >> (var_9 - 6049)));
        }
    }
    var_27 ^= var_0;

    /* vectorizable */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_28 = ((-(arr_12 [i_4])));
        arr_19 [i_4] = var_7;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_29 = var_3;
        var_30 = ((-(arr_3 [i_5] [i_5] [i_5])));
        var_31 = (((((-(arr_7 [i_5] [i_5])))) ? var_7 : (arr_9 [i_5])));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_32 = var_1;
        var_33 *= (((arr_5 [i_6]) ? (((max(var_3, 1)) * (!var_14))) : (((max((arr_4 [i_6] [i_6] [i_6]), (arr_4 [i_6] [i_6] [i_6])))))));
    }
    var_34 -= var_4;
    #pragma endscop
}
