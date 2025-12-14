/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 ^= (!15257707113497409731);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((((!((min(-15, var_7)))))) <= (~var_12)));
                                var_19 = (min(var_19, ((min((((arr_10 [i_0 - 3] [i_1]) ? ((var_6 ? -4176333966018144994 : -7326606579681970697)) : ((((arr_8 [i_1] [i_1]) & (arr_3 [i_0 + 2] [19] [i_4])))))), ((max((max(var_15, -416071374)), (var_12 | 1)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 += (min(((min((var_15 > var_1), ((-91 ? 1687471809 : 4294967281))))), (~var_9)));
    #pragma endscop
}
