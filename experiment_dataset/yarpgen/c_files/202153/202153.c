/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (((((~((4294967295 ? 1 : 1))))) ? (max((0 / 1), (var_4 * 1))) : ((((min(4278910080, var_0))) ? var_5 : ((1 ? 768626642 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = ((((72 ? var_7 : 4964110671455901573)) != 1));
                arr_6 [i_0] [i_0] [i_0] = (0 && 7176509050433827120);
                arr_7 [i_0] [i_0] [i_1] = ((((2100844427 / ((0 ? 16057210 : -7176509050433827121)))) == (((((var_9 + var_5) && ((max(var_6, var_3)))))))));

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_13 |= ((1 ? 1 : -7176509050433827124));
                        var_14 = ((((((6418791162371669979 * 1) ? var_7 : (((1 ? 25921 : 1)))))) ? var_6 : ((((var_8 << (var_9 - 205))) * var_4))));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_17 [i_3] [i_3] [i_3 + 2] = 16057215;
                            var_15 = var_6;
                            var_16 = (var_3 ? ((var_4 ? (max(var_8, 6649)) : -22)) : (max(4278910111, 25921)));
                            arr_18 [i_0] [i_0] [i_0] [i_2 + 3] [i_0] [i_3] [i_2 + 3] = ((var_8 ? ((((var_2 ? 245 : var_1)) * (3145335459 || 768626642))) : (1 * 1)));
                            var_17 = ((((-12990307 ? 4294967266 : var_3)) - 1));
                        }
                        var_18 = (((18446744073709551615 < ((max(255, var_8))))));
                        var_19 = (((var_2 <= var_9) ? (((var_9 << (var_0 - 15154441980601140585)))) : ((0 ? var_3 : var_1))));
                    }
                    arr_19 [i_0] [5] [i_2] [i_2] = (((~4278910089) ? ((var_5 ? -2067526839 : var_8)) : var_2));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_24 [i_0] [12] [i_5] [i_5] = (((min((~var_0), 1)) >= 1));
                    arr_25 [i_0] [9] [i_1] [i_1] = (((((16057234 ? 1 : var_6))) ? (max(var_7, var_4)) : ((1 ? var_8 : 21))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_28 [i_0] [i_1 - 1] [i_6] = ((var_4 ? (var_6 ^ var_4) : var_2));
                    var_20 = var_4;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_36 [i_0] [i_1 - 1] [18] [i_8] [18] = ((var_2 && var_2) ? var_5 : (var_7 == var_7));
                                var_21 = ((41883 ? (((1968703727 ? -88186058 : 1968703727))) : ((var_9 ? 24 : var_0))));
                                arr_37 [i_0] [i_0] [i_7] [i_7] [i_9] = 209911980;
                                var_22 = (max(var_22, 28184));
                            }
                        }
                    }
                    var_23 = ((-var_1 + 2147483647) << (((var_9 ^ var_6) - 4321)));
                    var_24 = var_4;
                    arr_38 [i_0] [i_1] [9] = (((((var_3 ? -875327047 : var_3))) ? (var_1 != var_1) : ((var_5 ? var_3 : var_2))));
                }
            }
        }
    }
    #pragma endscop
}
