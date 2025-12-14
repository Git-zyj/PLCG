/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 *= var_6;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (!1666131761);
                                var_21 = (min(((((!32755) ? ((66 ? (arr_5 [8] [i_1] [5]) : (arr_10 [i_0] [13] [i_2] [i_2]))) : (var_8 || var_9)))), (((~1) ? ((((!(arr_9 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4]))))) : -8063994736566381954))));
                            }
                        }
                    }
                }
                var_22 = (max(((((arr_7 [i_1]) & (~var_18)))), (min((arr_12 [i_1] [i_0] [i_0] [i_1] [i_0] [13] [i_0]), 1))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                var_23 &= (max(((1 ? 1 : 1)), (arr_15 [i_5])));
                var_24 = (((((~((var_7 % (arr_17 [16])))))) ? (min(var_11, var_12)) : (((((min(0, 1))) ? -49442680 : ((min(189, 0))))))));
            }
        }
    }
    #pragma endscop
}
