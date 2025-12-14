/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_18 ^= 2147483634;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_19 = 4142752712;
                    var_20 = (((((max(196, -48)))) || (((((var_12 ? 196 : -9548)) << (!48))))));
                    var_21 = ((max(12909, (arr_2 [i_1 - 1] [i_1]))));
                    var_22 *= ((((max(((min(31792, 47))), (max(993760873, -11983))))) ? (((((18446744073709551615 ? 60 : 21412))) ? var_12 : ((max((arr_6 [i_1] [i_1]), (arr_4 [10])))))) : (-11983 + 24542)));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_23 = 4142752723;
                                var_24 &= ((+(((!((((arr_3 [i_5] [i_5] [i_5]) ? 48 : 38840))))))));
                            }
                        }
                    }
                    arr_18 [i_0] [7] [i_1] [i_1] = (var_15 > 7019424526206580195);
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_25 = ((+(min((21421 * var_6), (max(var_9, var_2))))));

                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        var_26 = var_2;

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_27 = (min(var_27, (!16178)));
                            arr_28 [10] [i_1] [i_1] [4] [i_8] = (arr_2 [i_7 + 4] [i_7 + 4]);
                            arr_29 [i_1] [i_1] [i_1] [i_6] [i_7] [i_8] [i_1] = (((arr_7 [i_7] [i_7] [i_7] [i_7 + 3]) - var_15));
                        }
                        var_28 = (!3843316689);
                        var_29 = ((((((arr_23 [i_1 - 1] [i_1 + 1] [6] [i_1 - 1]) + (arr_23 [i_0] [i_1 + 2] [i_1] [i_0])))) ? ((-43 / (arr_23 [i_1] [i_1 + 2] [i_7 - 2] [i_7 - 1]))) : (-78 / 142249991)));
                    }
                }
                var_30 = ((!((((arr_26 [i_1] [i_1] [i_1] [i_1 + 1]) ^ ((3301206421 ? -48 : var_13)))))));
            }
        }
    }
    #pragma endscop
}
