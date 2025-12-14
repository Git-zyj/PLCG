/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((779798671820526430 && (((779798671820526430 ? (arr_3 [i_0 - 1] [i_2]) : ((var_11 ? 4294967295 : 1)))))));
                    arr_8 [0] [i_1] [i_1] = ((min(var_8, (arr_4 [i_0 - 1]))));
                    arr_9 [1] [i_1] [i_2] = (((arr_6 [i_0 - 1] [7] [i_0 - 1]) & (((47050 ^ 262143) ? (((arr_1 [i_0 + 1]) ? 3622354464 : var_15)) : 262143))));
                    arr_10 [6] = ((-(((((~(arr_3 [1] [10])))) ? 65520 : ((49800 ? (arr_4 [0]) : 1))))));
                    arr_11 [i_0 + 1] [i_0 + 1] [6] = 3491966626;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_14 [i_3] = (arr_12 [6]);
        arr_15 [0] [i_3] = 43836;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (-268173312 && var_3);
        arr_20 [22] [i_4] = (((arr_18 [i_4]) - (arr_16 [22])));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_25 [i_4] [i_4] [7] = 43836;
            arr_26 [i_4] = (((arr_22 [i_5] [i_5] [i_5]) ? (arr_21 [22] [i_4] [i_5]) : ((~(arr_21 [i_5] [i_5] [i_5])))));
            arr_27 [i_4] [8] [4] = (arr_21 [i_4] [i_4] [10]);
            arr_28 [16] [16] = ((!(arr_24 [i_4] [i_4] [i_5])));
            arr_29 [16] = ((~(arr_22 [17] [i_5] [i_4])));
        }
    }
    var_17 = 2223977541;
    var_18 = ((~1785086963) ? var_1 : (((var_10 ^ 262143) ? (min(95668542, 4294705146)) : 3161959602)));
    #pragma endscop
}
