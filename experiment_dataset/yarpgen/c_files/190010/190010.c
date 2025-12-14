/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (max(var_12, -1215964408));
        var_13 |= (arr_1 [0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = -var_0;
        arr_4 [i_1] = (max((min(18446744073709551604, 253)), (((11 ? (arr_3 [i_1] [i_1]) : (arr_2 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (arr_6 [i_2] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_15 = (min(var_15, (((~(18446744073709551583 >> 1))))));
                    var_16 = 227;
                    var_17 ^= 12;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (((!44) >> ((((~(arr_10 [i_2]))) + 49734))));
                                arr_19 [i_2] [13] [13] [i_5] [2] = var_5;
                                var_19 ^= (arr_9 [i_4] [i_4]);
                                arr_20 [i_3] [i_3] [i_3] [i_2] [i_2] [i_3] = ((var_9 ? 18446744073709551598 : ((min((arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 1]), (max(227, var_7)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        arr_24 [i_7] = -4001160326308960276;
        var_20 = (((1850083864179688400 ? 11 : -1513920293)));
    }
    var_21 ^= ((!((((max(-1, 12830711334411688718)) << (var_2 - 8624765317089944195))))));
    var_22 = (min(var_22, 12830711334411688702));
    #pragma endscop
}
