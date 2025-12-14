/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202263
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
                var_19 = (min((arr_2 [i_0] [i_0] [i_0]), (((1 >= (arr_4 [i_1] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] = var_5;

                            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                            {
                                arr_16 [i_1] = ((~(min(((-5447397212109320508 ^ (arr_4 [i_0] [i_1] [22]))), (arr_15 [i_0 - 1])))));
                                arr_17 [i_1] [i_3] [i_1] [i_1] [i_1] = ((((min(1536, 1))) ? (arr_1 [i_0 - 1]) : (12 - -11106)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0 - 1] [i_1] [i_2] [i_2] [1] = ((15336 ? (arr_14 [i_1] [i_1] [i_2]) : var_7));
                                var_20 = (arr_0 [i_0 + 1]);
                            }
                            var_21 = (max((arr_3 [i_1]), (min((arr_3 [i_1]), (arr_3 [i_1])))));
                            arr_21 [4] [4] &= (!(((-34 ? ((1 ? 1 : var_1)) : (var_14 >> 1)))));
                            var_22 = (((((((min(1, 1))) | var_4))) && (((((((arr_15 [i_0]) ^ var_9))) ? ((1 ? -115 : 1)) : (~var_13))))));
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    arr_24 [4] [i_1] [i_1] = ((((min((arr_5 [i_1] [i_1]), ((((arr_12 [13] [i_6] [i_1] [i_0 - 1]) * (arr_8 [i_0] [i_0]))))))) ? (((min(13681862270618587492, var_8)) - (((min(var_5, var_13)))))) : ((((((-19 ? var_6 : -78))) ? ((12 ? 35 : 1)) : (0 * var_7))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_23 = -1;
                        var_24 = (((var_7 + 2147483647) >> (((arr_1 [i_0 + 1]) - 74))));
                        var_25 ^= (-8337 ? -1 : 47857);
                    }
                    arr_29 [i_1] [i_1] [i_1] [i_1] = (~var_12);
                }
                arr_30 [i_0] [i_0] [i_1] = ((((((!8357) ? var_10 : 0))) ? (3543803256707225403 + var_12) : (((min((arr_9 [i_0 - 1] [i_0 - 1]), ((((arr_12 [8] [i_0] [i_1] [i_1]) < var_16)))))))));
            }
        }
    }
    var_26 = (min(((var_13 ? var_10 : var_2)), (((-var_0 && (~1))))));
    #pragma endscop
}
