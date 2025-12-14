/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((var_2 * 2) ? var_3 : var_8)))));
    var_14 = (((((!63) + (max(-8645038935135766371, var_5)))) + (((((max(2, 6077162471023952324))) ? (max(var_6, var_2)) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [10] [10] = var_7;
                                arr_14 [2] [i_2] [i_1] [i_0] = var_2;
                            }
                        }
                    }
                    var_15 = var_2;
                }
            }
        }
    }
    var_16 *= (min(-8645038935135766371, var_7));
    #pragma endscop
}
