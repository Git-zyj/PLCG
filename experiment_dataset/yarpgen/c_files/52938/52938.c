/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((((max(0, var_11))) >= ((min(20615, 1)))))), var_14));
    var_18 = (max((~var_7), ((min((~1), var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = 960;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] |= (4616627877816594031 & var_16);

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_19 &= (1 >= 1);
                                var_20 *= (-var_4 && 65527);
                                var_21 = (((~6638090148149573744) > 1));
                                var_22 = 1120434415;
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                arr_19 [6] [8] [i_2] [i_3] [i_5] [14] = 106;
                                var_23 = (((max(var_14, (1 < 1)))) ^ (var_15 + 1));
                            }
                            for (int i_6 = 1; i_6 < 16;i_6 += 1)
                            {
                                var_24 *= ((((min(1, ((55562387148593509 ? 4294967295 : 9))))) ? ((min(-21, 65527))) : ((1 + (1 < 13305717727633150120)))));
                                var_25 = (min(var_25, ((((((min((min(247, 2040)), ((max(var_5, 255))))))) <= (min(-3125953528490116775, var_2)))))));
                                var_26 = (max(var_26, ((min(var_16, 18446744073709551615)))));
                                var_27 = (min(var_27, (((-1744 ? (~4) : 80)))));
                                var_28 = (max(var_28, (((max(55562387148593529, (1 < var_10)))))));
                            }
                            for (int i_7 = 0; i_7 < 0;i_7 += 1)
                            {
                                var_29 = (max(var_29, ((max(((1 ? ((max(153, var_8))) : ((max(-47, 98))))), 17991)))));
                                var_30 = (9319 > 246);
                                var_31 -= ((~(-9323 <= var_12)));
                            }
                            arr_25 [6] [i_1 - 3] [6] [i_3] = (((~962607117311725449) % -2543066549099814897));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
