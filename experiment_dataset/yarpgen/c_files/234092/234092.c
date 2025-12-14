/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 255;
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 -= (--1);
                var_17 = (((max(1, -32758))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = min(132, 28);
                                var_19 += -1;
                                arr_13 [1] [1] [14] [i_2] [i_4] = (max((~1), -17180));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 -= var_11;
    var_21 += var_4;
    #pragma endscop
}
