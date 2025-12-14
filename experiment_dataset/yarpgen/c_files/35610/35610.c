/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -1591041573;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 += var_1;
                var_17 -= (max(((-73 - (arr_3 [i_0 + 1] [i_0 - 2]))), ((min((arr_3 [i_0 + 2] [i_0 - 2]), (arr_1 [i_0 + 2]))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] &= (((arr_7 [i_0] [i_1] [i_2] [i_1]) ? (arr_8 [i_1]) : ((1 >> (var_8 - 4158809184)))));
                    var_18 = 10;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_19 = (arr_10 [i_3 + 1] [i_0 - 1]);

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_20 *= (((((7948728555213524502 ? (arr_14 [i_0] [i_0] [14]) : var_9))) || (arr_10 [16] [3])));
                        var_21 *= ((!(arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2])));
                        arr_15 [i_0 + 1] [i_1] [i_0 + 1] [5] = (!-27);

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_22 = arr_2 [i_0];
                            var_23 = (max(var_23, (arr_14 [i_0] [i_0 - 1] [i_4])));
                            var_24 -= 1;
                        }
                    }
                    arr_18 [i_0] [i_0 - 2] [i_1] [i_3] = var_12;
                }
            }
        }
    }
    var_25 = (~var_12);
    var_26 = var_10;
    #pragma endscop
}
