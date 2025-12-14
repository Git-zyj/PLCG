/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((~668346882) + 6598892514297663759));
                var_15 &= ((11847851559411887883 ? (~6598892514297663737) : ((((11847851559411887862 ? -6601482239572135528 : 11847851559411887856)) ^ (max(var_4, 6598892514297663744))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            {
                var_16 = ((-(min(((-(arr_7 [i_3]))), 383772601))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_17 = var_3;
                            var_18 = (min(6598892514297663744, 182337117));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_5 ? 58 : 10550));
    var_20 = 11847851559411887899;
    #pragma endscop
}
