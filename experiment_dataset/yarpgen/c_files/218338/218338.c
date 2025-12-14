/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((1 ? 1 : 1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [0] &= 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = 1;
                            var_22 = (max(var_22, ((((1 || 18498) == ((-((7453 ? var_3 : var_1)))))))));
                            var_23 = -27127;
                        }
                    }
                }
                var_24 = (max(var_24, (((((99 << (27127 - 27124))) < ((~((max(-18498, 78))))))))));
                arr_11 [i_0] [i_0] = (min(var_17, ((((max((arr_8 [i_0] [i_0 + 1] [20] [20]), 38))) ? 1 : 15506))));
            }
        }
    }
    #pragma endscop
}
