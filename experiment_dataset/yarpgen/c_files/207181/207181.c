/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((-2475437984 && ((max(((max(var_1, var_9))), 1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = var_8;
                            var_16 += (min((min((var_3 | var_10), ((min(-22498, var_12))))), var_1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_17 = ((var_5 * ((((var_0 == (((var_1 ? 11834 : var_9)))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] &= max(-93, -11817);
                            arr_17 [i_4] [i_5] = 923395561;
                            arr_18 [i_5] [i_4] [i_1] [i_0 + 1] = 22478;
                            arr_19 [i_1] [i_1] [i_1] [i_1] [6] [i_1] = -var_4;
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((((254 || (var_7 < 1))))) | ((min(var_5, 151)))));
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                arr_26 [7] [i_6] = 16384;
                arr_27 [i_7] = (((-448169450311014093 ? (((min(var_11, 124)))) : var_13)) <= ((((var_6 * 9223363240761753600) ? ((22498 ? -22479 : 151)) : 1))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_33 [i_6 + 1] [i_9] [i_9] [i_9] [i_8] [i_6] = (max((380768568946475725 ^ -8933045055004641107), (((((min(var_1, 16))) == 1)))));
                            var_19 = (min(var_19, ((((-8933045055004641107 + 2147483647) << ((((((min(-116, -28604))) + 28629)) - 25)))))));
                            var_20 *= ((((max((max(29741, var_6)), 1))) && ((min(-11821, (-505950429 + -22479))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
