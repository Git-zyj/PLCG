/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (((min((min(-1509984777, 2147483647)), 2147483647)) >= (((2147483647 + -2147483643) ^ -2147483626))));

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_0] = 2147483640;
                    var_11 = ((((101 ? -2147483647 : -2147483643)) % (min(1, -2147483640))));
                }
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = ((min((-2147483640 <= -2850713533297918879), (64 - -6))) - (min(-1, 2147483643)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_12 = 1;
                                var_13 = ((7140709520193109798 << ((((-2147483626 - (min(2666926720032317020, -1)))) - 15779817351529750949))));
                            }
                        }
                    }
                    var_14 = ((-(((-8365901601868304811 + 9223372036854775807) >> (-7770249787328490927 < -7770249787328490927)))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    var_15 = 48638806;
                    var_16 = (max(var_16, -2147483643));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_17 *= ((0 ? -13 : (-2147483647 - 1)));
                                var_18 = 72;
                            }
                        }
                    }
                    var_19 = (max(var_19, (2147483647 - 2532612532884620910)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_20 = (((~18446744073709551615) >= (6 % 134)));
                            arr_36 [i_9] [i_10] [9] [i_12] = ((2032326369 / -7) > -18446744073709551615);
                        }
                    }
                }
                arr_37 [i_9] [i_9] = (((((min(-8681735090294444032, -1221596971498641148)) * -1)) - ((((-21 + 2147483647) >> (-4 + 15))))));
            }
        }
    }
    var_21 = ((-var_8 | (~1)));
    #pragma endscop
}
