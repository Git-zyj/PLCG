/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((!(arr_4 [i_0] [i_1]))));
                    var_14 = var_4;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_15 = ((!(((var_3 ? ((var_0 ? var_1 : 93)) : ((min(93, 255))))))));
                    var_16 = (min(252, (((!5491286694832146154) ? 85 : 2744125621342138930))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] = ((((2047 ? -4136488924783875981 : 0)) / (min((arr_8 [i_4 + 1] [i_4 + 1]), (arr_11 [i_4] [i_5] [i_7])))));
                                var_17 *= 190;
                            }
                        }
                    }
                    arr_22 [i_3] [i_4] [i_4] [i_5] = (((((!4136488924783875980) ? 123 : -4136488924783875981))) ? (arr_16 [i_3]) : (arr_9 [i_5] [i_4 - 1]));
                }
            }
        }
    }
    var_18 *= ((var_4 == ((68 ? -2028 : var_5))));
    #pragma endscop
}
