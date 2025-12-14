/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~156) != ((~(1 != 5235)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_21 -= (-9188 * 39975);
        arr_3 [i_0] [i_0] = ((~(~0)));
        arr_4 [1] [i_0 + 1] = (~0);
        var_22 ^= (2 / -840224817817631725);
        var_23 = (~3626987612);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 = (((((2 & (~1)))) - (1 * 65535)));
        var_25 *= 3918576187313947632;

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = (43522 & 28274);
            arr_10 [i_1] [i_1] = ((!(((!18446744073709551615) || (!17788552967050827083)))));
            var_26 = 8126464;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_27 = (max(var_27, (((((28 || 1) / (107 >> 1)))))));
                            var_28 *= (((-1 * 0) - 1364834871880661065));
                        }
                    }
                }
            }
            var_29 = (max(var_29, 0));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_21 [i_1] = (~(~0));

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_30 = -1686572571;
                arr_24 [i_1] [i_1] [i_7] = (((~(1 * 43306))));
                arr_25 [i_1] [23] [i_7] [i_6] = (((1 + (33 & -1686572571))));
                arr_26 [i_1] [i_6] [i_7] |= ((1 || (~-1)));
                arr_27 [i_1] [i_6] [i_7] = (~-1792);
            }
        }
    }
    var_31 = var_14;
    #pragma endscop
}
