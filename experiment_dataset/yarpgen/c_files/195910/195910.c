/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [1] = (!13087643930901121184);
        arr_3 [i_0] = (~var_4);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((19402 + (arr_7 [7] [7])))) - ((((min((arr_4 [i_1]), 62914560))) ? (3388189401785431012 + var_4) : 1))));
        arr_9 [i_1] = (min((((var_16 + var_12) ? ((162 ? (arr_6 [i_1 + 1] [i_1]) : var_2)) : (arr_6 [i_1 + 2] [i_1 + 2]))), 1363323942));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = (min(var_17, ((min((((((57 - (arr_6 [i_1] [i_2]))) - var_4))), (((arr_5 [i_1 + 3] [i_1 + 3]) ? 4232052730 : -720405339797079303)))))));
            var_18 += min((arr_4 [i_2]), (min((arr_12 [i_1] [3] [i_1 + 1]), 60)));
            var_19 |= 79;
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_20 = ((~(min(62914560, ((((arr_16 [1] [i_3] [i_3]) / 57)))))));
                        var_21 = (min((arr_5 [i_1 + 1] [i_1 + 3]), (((arr_5 [i_1 + 1] [i_1 + 2]) % (arr_5 [i_1 + 3] [i_1 + 2])))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_22 = (arr_21 [i_1 + 3]);
            var_23 = ((((((arr_11 [i_1] [i_1 + 3] [i_1]) ? (arr_14 [i_1 + 3] [i_1 + 2]) : -var_8))) * 281474976448512));
        }
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_24 = 1;
                        var_25 = (((((min(62, (arr_16 [i_1] [4] [i_7]))) + 2147483647)) >> (arr_15 [i_1] [i_6] [i_1] [i_8])));
                        var_26 = (max(var_26, ((min(160, (min(((7 ? 281474976448512 : 32211)), 361204005)))))));
                    }
                }
            }
            var_27 = (min(var_27, var_9));
        }
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        var_28 += arr_14 [i_9] [i_9 + 2];
        var_29 |= (~15945);
        arr_33 [i_9] = ((((min((arr_19 [i_9] [12] [i_9] [2]), (min((arr_16 [i_9] [i_9] [1]), 15945))))) ? 89 : 62));
    }
    var_30 = ((~(min(var_3, (var_11 & 57)))));
    #pragma endscop
}
