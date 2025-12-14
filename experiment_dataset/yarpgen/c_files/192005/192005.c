/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (~28879);
                var_16 -= (min(18446744073709551615, 8192));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 *= (max((!var_6), (max(var_2, -6366490359331684370))));
                            var_18 = (min(var_18, ((max(((!(arr_4 [i_0] [i_0] [i_1]))), (!18446744073709551614))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_19 *= ((((min((arr_13 [i_0] [i_4] [i_0] [i_0]), 1))) + ((~(!179)))));
                                var_20 = (min(-var_5, ((~(arr_12 [i_0] [i_0] [i_4])))));
                                var_21 = max(7, (((-(arr_17 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                    var_22 = ((((max(2584063001, 0))) * (5 % 1)));
                }
            }
        }
    }
    var_23 = var_0;
    var_24 = ((var_2 > (((max(-3399793061015146197, 1)) >> (-var_10 - 16281861543632941114)))));
    #pragma endscop
}
