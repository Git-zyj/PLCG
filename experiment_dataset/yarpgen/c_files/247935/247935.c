/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((1 != (((((32767 ? -32767 : 32764))) | (max(32758, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((-((min((arr_4 [i_1] [i_1]), 32767))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, 0));
                                var_18 = (((arr_6 [i_3] [i_2]) / (((-((32767 & (arr_8 [i_0]))))))));
                                var_19 = ((~((45059 << (-973635436 + 973635442)))));
                                var_20 = ((((((max(-3099692470992378005, 6873325950695089517))) ? (max(var_7, (arr_5 [i_0] [i_0]))) : 32767)) >= var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
