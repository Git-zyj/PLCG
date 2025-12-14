/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((var_1 * (((1681649374 & var_11) & 2500889003))));
    var_15 = (min(var_15, var_0));
    var_16 = (32750 | var_11);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_2] [i_0] [i_0] = (((-1794078279 > var_4) ? var_6 : var_2));
                        var_17 *= var_2;
                        var_18 *= (arr_10 [i_0] [i_1] [3] [i_3]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_17 [i_0] [i_1] [8] [i_1] [i_1] [i_4] = 67;
                            var_19 *= (arr_5 [i_4]);
                            arr_18 [i_2] [i_2] [i_0] [i_1] [i_1] [i_1] = ((-2269245766265583606 ? 1794078293 : ((976245012 ? 15146393076963117626 : 0))));
                            var_20 = (((arr_11 [5] [i_1] [i_2] [i_1]) < (var_6 - 3300350996746433989)));
                            var_21 = ((!(((1 ? 65524 : (arr_1 [i_4]))))));
                        }
                        var_22 = (min(var_22, -2413975109131919211));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [i_5] = (-4600698458641582853 + 976245012);
                    arr_24 [i_0] [i_5] = 4754136456169511298;
                    var_23 = (((((~57522614) + 2147483647)) << (((arr_5 [i_5]) % (arr_5 [i_6])))));
                }
            }
        }
        var_24 = var_4;
    }
    #pragma endscop
}
