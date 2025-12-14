/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max((148 != 148), (0 <= 148))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (min((arr_5 [i_0 + 1] [i_2 - 1] [i_3 + 1]), -10566));
                                var_19 = (var_8 * 1625944582516453664);
                                var_20 = (min(-10566, 1270612822));
                                arr_13 [i_2] [i_2] = (((arr_6 [i_0 + 2] [i_0 + 2] [i_4]) ^ -28));
                            }
                        }
                    }
                }
                var_21 = (((103 * 3576200466) >> (((((-3 + 2147483647) >> (((arr_11 [i_1 + 1] [i_1] [i_0 + 2] [i_1] [i_0]) - 503333367)))) - 2017))));
                arr_14 [i_0] = var_15;
                arr_15 [i_1] = (((((arr_11 [i_0] [i_1] [i_1 - 1] [i_1] [i_0]) ? 3555309315540015024 : (arr_11 [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 2]))) + -0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                arr_22 [i_5] = ((max((arr_6 [i_5 - 3] [i_5 + 1] [i_5 - 3]), (arr_6 [i_5 + 1] [i_5] [i_5 + 1]))));
                var_22 = ((((1223863529048556186 ? (arr_20 [i_5]) : (arr_16 [i_6]))) >= (min(0, 12930))));
                arr_23 [8] &= 2681091345619847081;
                arr_24 [i_5] [i_6] [i_5] = (max(((-(min(15514, 0)))), 3576200466));
                var_23 = ((~(max(4208573282872638674, 103))));
            }
        }
    }
    var_24 = ((min(7787, var_6)));
    #pragma endscop
}
