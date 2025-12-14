/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max((max((-2147483647 - 1), 126)), var_4))) ? (((((max(0, (-2147483647 - 1)))) && (((var_0 ? 123 : -123)))))) : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [9] [i_1] [18] |= ((((max(var_4, 1))) | ((0 ? 6 : var_6))));
                    var_11 = ((2617273805 & (min((max(18465, var_0)), 1))));

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] [11] [11] [11] = var_6;
                        var_12 = (min(var_12, ((min((((((min(var_3, var_0))) ? ((min(var_4, 1))) : ((55609 ? 7007 : 1))))), ((var_7 ? ((var_1 ? 7007 : var_0)) : 97)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            arr_18 [0] [i_2] [i_2] [i_2 + 2] [i_2] &= ((-97 ? var_1 : -32626));
                            var_13 = ((1 ? var_9 : 0));
                            arr_19 [i_5] [i_5] = ((24 ? 1 : 9223372036854775807));
                            arr_20 [i_2] |= ((1 ? 8232 : -21682));
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_4] |= 32626;
                        var_14 ^= 3;

                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            var_15 = ((1 <= ((1 ? var_1 : var_1))));
                            arr_24 [i_6] [i_6] = (((((var_6 ? 1750811290 : 55237))) ? 6994 : 1));
                            arr_25 [i_6] [i_6] = 192182722;
                            var_16 -= (var_1 < 0);
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        var_17 = -63;
                        arr_28 [i_0] [i_0] [i_0] [i_0] = (8489 ? 13 : -4096);

                        for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            var_18 ^= (9 ? 0 : -2444);
                            var_19 *= 80;
                        }
                        for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_1] [11] [i_7] [8] = (((((8270806162175220980 ? var_3 : 26741))) ? 3565996970894842240 : var_5));
                            var_20 = 8067;
                        }
                    }
                    var_21 = ((((max(3978958605, (min(var_8, 2444))))) ? (min(311179533, 53)) : -2444));
                    arr_34 [i_0] [18] [1] [0] = (((((1 ? -63 : 2298003327353135345))) ? (max(6114285948588542176, 65534)) : ((((-32767 - 1) ? 3565996970894842247 : var_6)))));
                }
            }
        }
    }
    #pragma endscop
}
