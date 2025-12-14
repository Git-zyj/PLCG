/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max((max(var_6, 3888890677)), -var_10))) ? (((~var_11) ? var_6 : var_2)) : (-74 % 4294967283));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = ((((((max(var_4, var_0)) - var_8))) ? ((96 | (min(-97, 4503599627366400)))) : (((((arr_1 [i_1]) >= 406076618))))));
                arr_6 [i_0] [i_0] = ((-(74 > 4294967282)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_17 = ((!((max(((12 ? 3888890663 : (arr_9 [i_3]))), 36660)))));
                    arr_15 [i_2 - 1] [i_2] [i_2] &= min((max((((var_12 > (arr_0 [i_4])))), (((var_10 + 2147483647) >> (10994784272226186224 - 10994784272226186199))))), 116);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_6] [i_3] [i_4] [i_3] [i_3] [i_2] = (arr_0 [i_2]);
                                var_18 = (var_9 < ((~(arr_0 [i_2]))));
                                var_19 = (min(-1, -74));
                                var_20 = (max((18446744073709551615 ^ 13661), 116));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_21 = 98;
                        arr_24 [i_3] [i_3] [i_4] [i_4] = ((((max(9223372036854775801, (arr_17 [i_2] [i_2 - 2] [i_2] [i_2])))) ? (arr_7 [i_2]) : (((arr_7 [i_2]) ? (arr_0 [15]) : 2542613988))));
                    }
                }
            }
        }
    }
    var_22 = 12;
    #pragma endscop
}
