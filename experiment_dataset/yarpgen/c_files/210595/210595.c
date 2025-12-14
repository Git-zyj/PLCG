/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((-(var_10 / 35972))), var_9));
    var_15 *= var_5;
    var_16 = ((!(((-(!134217216))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 *= (min(((var_5 ? (!var_3) : (min(1, 1778752650499832769)))), (((39 ? (arr_2 [i_0] [i_1]) : (min((arr_3 [i_0]), 2147483640)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((-(((!var_12) | var_11)))))));
                            var_19 = (i_0 % 2 == 0) ? ((min(1778752650499832767, (((var_6 << (((arr_1 [i_0]) - 1379674529)))))))) : ((min(1778752650499832767, (((var_6 << (((((((arr_1 [i_0]) - 1379674529)) + 1090545407)) - 24))))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_20 = (max(var_20, var_10));
                                var_21 = (min(var_21, var_0));
                            }
                            var_22 = (var_3 / 1778752650499832769);
                        }
                    }
                }
                var_23 = (min((min(14300440064205872744, 4160750080)), (arr_4 [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
