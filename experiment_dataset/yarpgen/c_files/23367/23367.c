/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 += var_9;
                                var_17 = (min(var_17, var_5));
                                var_18 = ((var_10 && ((!(((-3083330384395998869 ? 28014 : var_1)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_4] = 13;
                            }
                        }
                    }
                }
                arr_15 [i_0] = (+(((arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1 + 2] [21] [i_1] [i_0 + 1]) ? (max((arr_10 [i_0] [i_1] [i_0] [i_1]), var_9)) : (min((arr_5 [i_0]), var_2)))));
            }
        }
    }
    var_19 = (max(var_19, var_11));
    var_20 += 0;
    var_21 *= ((((((var_1 ? -8685915744142658126 : var_1)) == (!120))) ? ((((((max(var_14, var_14)))) < (~var_15)))) : (((!((max(var_0, 14))))))));
    #pragma endscop
}
