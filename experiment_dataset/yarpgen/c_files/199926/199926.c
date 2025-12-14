/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((max(var_7, (arr_3 [i_0] [i_0 - 1] [i_0 - 1])))) || 1));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_14 [i_0] = (arr_12 [i_0] [i_1] [i_2] [i_0]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_17 |= (((arr_15 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]) != 2913021378913903197));
                            var_18 = (((arr_4 [i_0 + 1] [i_2 + 2]) % -455243990));
                        }
                    }
                    var_19 = ((402653184 ? 65535 : 2070464885));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_19 [18] [18] [i_0] [i_5] = (((~2056969429) != var_15));
                    arr_20 [i_0] [i_1] = (arr_0 [i_0]);
                    var_20 = (~var_7);
                }
                for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_1] [i_0] = (((-2913021378913903198 <= (((var_1 ? (arr_4 [i_0 - 1] [i_0 - 1]) : 2147483626))))));
                    var_21 = 151;
                    var_22 = (min(var_22, (((((((arr_9 [5] [i_1]) ? var_13 : -455243993)) != 1))))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_28 [i_0 + 1] [i_0 + 1] [i_0] = (max((((var_13 / var_2) <= 2913021378913903191)), (((arr_17 [i_0] [i_1] [i_0 - 1] [i_0 + 1]) >= (arr_17 [i_0] [i_0 - 1] [i_0 - 1] [1])))));
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((~(42700 % 20102)));
                    var_23 = ((((((33285996544 << (arr_16 [i_0 + 1] [i_0] [i_1] [i_1] [i_7] [i_7])))) ? (min(-2129136285, 402653170)) : (arr_13 [i_0]))));
                }
                arr_30 [i_0] [i_1] = var_8;
            }
        }
    }
    var_24 = var_14;
    var_25 = var_14;
    var_26 = var_11;
    #pragma endscop
}
