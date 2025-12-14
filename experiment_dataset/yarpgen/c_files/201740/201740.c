/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 || ((((((18446744073709551610 ? 255 : (-2147483647 - 1)))) / (var_3 ^ var_2))))));
    var_15 = ((!(((((1 ? 1 : var_9))) || 0))));
    var_16 = ((1 << (25342 - 25312)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 ^= var_1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_2] [i_3] = ((((arr_7 [i_0] [i_1] [i_1] [i_2] [i_2]) ? (arr_7 [i_0] [i_0] [i_1] [i_2] [i_2]) : (arr_7 [i_0] [i_1] [i_2] [i_3] [i_2]))));
                        var_18 = (4611686018360279040 + 1);
                        var_19 = (max(var_19, ((max(1, 32747)))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] |= (~((((arr_2 [i_1] [i_3]) && (arr_12 [i_4] [i_2] [i_1] [8])))));
                            var_20 = -902818451;
                            var_21 *= (max(-15, var_4));
                            var_22 = (max(var_22, (((1 <= (arr_7 [i_0] [i_1] [i_2] [i_2] [i_3]))))));
                        }
                        arr_15 [i_0] [i_2] = (((-2147483647 - 1) & 2));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_23 = ((-(max(((var_1 & (arr_8 [8]))), ((0 ? 1 : 1976779401))))));
        arr_19 [i_5] [i_5] = (max((((var_7 ? (!1) : var_9))), ((74 | (((-(arr_0 [i_5] [i_5]))))))));
    }
    var_24 = var_2;
    #pragma endscop
}
