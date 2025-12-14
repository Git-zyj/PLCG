/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = var_7;
    var_21 = var_17;

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_22 = min((((min(var_8, 279633384)) & -720269150)), var_15);
                                var_23 = (min((((~((var_7 << (var_15 - 196743525836964311)))))), -14111522896938174484));
                            }
                        }
                    }
                    var_24 = ((!((max(-391975760, var_18)))));
                    var_25 |= ((+((((3463868432910494523 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_2]) : var_6)) << (-3593507697343197191 + 3593507697343197212)))));
                }
            }
        }

        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            arr_14 [i_5] [i_5] [i_0] = (max((!-2280237217726213784), 0));
            arr_15 [i_0] [i_5] = (2280237217726213789 ? var_1 : (min(-1638106695, (arr_5 [i_0 + 3] [i_0]))));
            var_26 = (max(((max(var_16, 59347))), ((((max(var_6, 1638106708))) + ((var_17 ? var_10 : var_0))))));
            var_27 = (min((((66 * (arr_12 [i_0] [i_5])))), (max(((min(415733046, (arr_6 [i_0] [i_0] [i_0] [i_0])))), -3850388203950850380))));
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_28 = (((-3593507697343197201 / var_11) | (~-1892913925)));
        var_29 = ((var_4 ? 3 : (var_11 >= var_4)));
        var_30 = -3593507697343197201;
    }
    #pragma endscop
}
