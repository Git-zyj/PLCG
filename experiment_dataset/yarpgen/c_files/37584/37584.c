/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((2220949060450078438 != (((9223372036854775807 ? var_4 : 33719)))))) <= 122));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = var_14;

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_1 + 3] = -592595126;
                    var_21 = (min(var_21, var_6));
                    var_22 = min((((min(12496402778343306407, 4294967285)))), (min(((max(var_3, var_11))), 9)));
                }

                /* vectorizable */
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    arr_11 [i_3 + 2] = ((2097064092 ? 592595139 : 1));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_23 *= 18412382158466004566;
                        var_24 = (min(var_24, ((((arr_12 [i_0] [i_0 + 2] [i_3 + 1] [7] [i_4]) % -189416316)))));
                        var_25 &= ((-1 ? ((((arr_13 [i_3] [i_1] [i_0]) || (arr_12 [i_4] [9] [8] [i_0] [i_0])))) : (((-1676101998 + 2147483647) >> (arr_10 [i_0 + 3] [i_0] [i_0] [i_0 - 1])))));
                    }
                    arr_14 [i_0 + 3] = (!var_14);
                    var_26 ^= 18446744073709551589;
                }
                var_27 = (max(var_27, (arr_9 [i_0] [i_1] [i_1])));
            }
        }
    }
    var_28 = (min((min(var_9, var_5)), var_5));
    var_29 = var_6;
    #pragma endscop
}
