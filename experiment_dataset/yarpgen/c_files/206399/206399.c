/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 && ((((((var_3 ? var_2 : var_9))) ? var_2 : (min(var_6, var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = ((~((38566 ? var_2 : var_2))));
                var_14 = ((-(31 ^ 0)));
                var_15 = ((((min(-32, var_1)) != (((var_2 ? var_6 : var_6))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_16 = (min(var_16, (((var_10 ? (var_7 ^ var_0) : ((min(var_0, var_9))))))));
                    var_17 *= (((-87 ? var_4 : var_5)));
                    var_18 *= 9721;
                    arr_8 [i_0] [1] [i_2] [i_2] = ((((((((var_2 ? var_1 : var_9))) ? ((14168331908910415671 ? -1526174877 : var_4)) : var_5))) ? ((max(-31, -1))) : -1));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_19 = ((((((var_11 / var_0) ? var_6 : var_10))) ? (((((1 ? 18 : var_5))) ? var_1 : var_6)) : var_9));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_20 = (((((14168331908910415671 ? var_6 : var_6))) ? ((var_8 ? (-2147483647 - 1) : var_9)) : ((var_1 ? var_0 : var_2))));
                                arr_18 [i_3] [i_1] [6] [i_4] [i_4] = 1;
                                var_21 -= (((var_9 < var_6) ? ((((max(var_7, var_2))) ? (((min(var_3, 21126)))) : (max(var_11, 14168331908910415671)))) : ((((~var_3) ? var_3 : ((var_7 ? -1 : -15443)))))));
                            }
                        }
                    }
                    var_22 -= (min(((max(var_7, var_7))), ((var_7 ? ((22449 ? var_5 : var_8)) : ((max(var_10, var_3)))))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    var_23 = (((var_7 | 0) ? 25 : ((var_10 ? 64321 : 1222))));
                    var_24 = (((19350 == var_7) && (((var_1 ? -1935963329 : 238)))));
                    arr_21 [10] [i_6] [i_1] [i_6] = 1200860690;
                }
            }
        }
    }
    var_25 = (max(var_25, (((~(-var_5 <= var_11))))));
    #pragma endscop
}
