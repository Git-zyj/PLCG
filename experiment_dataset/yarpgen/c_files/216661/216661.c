/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!-var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 *= 7;
                            var_15 = ((~(min((arr_7 [i_3]), var_7))));
                            var_16 |= (65529 != var_2);
                        }
                    }
                }
                var_17 = 4643;
            }
        }
    }
    var_18 = (((var_8 | var_5) ? ((max(var_7, 10749759418573138039))) : ((max(var_4, ((var_2 ? var_10 : 0)))))));
    #pragma endscop
}
