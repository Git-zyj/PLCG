/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (((((var_0 ? 9420057683848037099 : var_3))) || var_0));
                                var_18 = (var_7 << (var_12 / var_6));
                                var_19 = (((((~(var_5 >= -793681470)))) || -3515));
                                var_20 ^= (!788717353896437074);
                            }
                        }
                    }
                    arr_10 [i_0] [14] [4] [7] = -1;
                    var_21 -= var_6;
                    var_22 = (min(var_22, ((((1 & 3796711561) ? var_0 : (var_8 ^ 4))))));
                }
            }
        }
        var_23 += ((2504853667 ? ((var_4 ? ((-793681470 ? var_10 : 1)) : ((-732 ? -1788649104 : var_0)))) : ((((!(18446744073709551611 && var_10)))))));
        arr_11 [i_0] &= ((var_9 ? var_2 : ((-(~1269816870)))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_24 += 10689987644770114566;
            var_25 += (2147483627 & var_7);
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_26 |= (-(var_3 == -732));
            arr_17 [i_6] = (var_5 < 2147483647);
            arr_18 [i_6] = ((1 >> (var_0 - 2521220068)));
        }
    }
    var_27 = 0;
    #pragma endscop
}
