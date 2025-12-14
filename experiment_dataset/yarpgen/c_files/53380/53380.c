/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = (min(var_13, ((((min(18446744073709551615, var_11)) <= ((((((arr_0 [i_0]) ? var_12 : 1)) < var_10))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 = ((!(arr_2 [i_0 - 1] [i_1])));
            arr_4 [10] [i_1] [i_1] = (-32744 || 1);
        }
        var_15 = (min(var_5, var_3));
    }
    var_16 -= ((((min(var_8, var_3))) && (((~(~32756))))));
    var_17 = var_12;
    var_18 = ((var_6 | ((0 ? 4294967279 : 3980910452879460710))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    var_19 = (min(var_19, var_11));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_18 [9] [i_3] [i_4 - 2] [i_5] [i_4] = (arr_10 [i_2] [0] [i_4] [i_5]);
                                var_20 = (255 + 1125899906842623);
                            }
                        }
                    }
                    var_21 = (min(var_21, ((min(0, ((min(var_3, (-9223372036854775807 - 1)))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_22 ^= (((!var_12) < var_10));
                                var_23 = (((!var_2) && (var_6 - var_0)));
                            }
                        }
                    }
                    var_24 = ((((~var_12) & (min(var_0, 31975)))));
                }
            }
        }
    }
    #pragma endscop
}
