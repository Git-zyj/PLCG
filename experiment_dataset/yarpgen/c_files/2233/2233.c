/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(~var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (((((min(var_5, var_6)))) ? -1247657053 : -65535));
                                var_18 ^= (((!55296) ? ((-1 ? 255 : (-7418445342190316379 / -7418445342190316379))) : 1023));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -8841;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_23 [i_7] [i_7] = ((((min((((arr_6 [i_1] [i_1] [i_0]) ? var_10 : (arr_11 [i_1] [i_5] [i_6 + 1] [i_7]))), ((((arr_16 [i_6 - 2] [i_5] [i_1] [i_0]) <= 31)))))) ? ((((var_2 > ((min(33225, 199))))))) : (7418445342190316386 - 31)));
                                var_19 *= (6036023525456831259 + 18446744073709551603);
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_20 = var_12;
                    var_21 = ((((~((11 * (arr_11 [i_8] [i_1] [i_1] [i_0]))))) << (((((min((arr_7 [i_0] [i_1] [i_0] [i_0]), var_9))) == 4136606892745689630)))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_35 [i_10] [i_10] = ((1 ? (~7418445342190316379) : (arr_0 [i_1])));
                                var_22 ^= 76;
                                arr_36 [i_0] [i_10] = 254;
                            }
                        }
                    }
                    var_23 = ((-(((arr_31 [i_0] [i_0]) << (var_12 - 18078587119307043625)))));
                }
            }
        }
    }
    #pragma endscop
}
