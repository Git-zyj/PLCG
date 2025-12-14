/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_13;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (max(((16393472258480509639 ? var_7 : (min(18202885423009576985, 449351016)))), (((23 ? (arr_1 [i_0]) : var_6)))));
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0]) ? 10 : var_1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_0;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_16 += -29;
                        var_17 = (min(var_17, (!var_10)));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = (arr_8 [i_3] [i_3]);
                        arr_15 [i_4] [i_4] [i_4] [i_1] = 10;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_18 = arr_12 [i_5];
        var_19 = ((1 ? ((max(-29, (var_2 <= 37914)))) : -1));
        var_20 = (max(var_20, ((((((arr_16 [i_5] [12]) + 2147483647)) << ((((((!(arr_3 [i_5]))))) * (((arr_1 [i_5]) ? 13214 : var_10)))))))));
        arr_20 [1] |= (arr_13 [i_5] [i_5] [i_5] [i_5] [10]);
    }
    var_21 |= var_11;
    var_22 = (((max(-23, var_9)) + var_6));
    var_23 = var_1;
    #pragma endscop
}
