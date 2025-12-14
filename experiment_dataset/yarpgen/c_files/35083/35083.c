/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = ((570 * ((((arr_2 [i_1] [i_1]) != -570)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_4] [i_0] [i_0] [i_0] = (~var_9);
                                var_17 *= (~var_4);
                                var_18 = (!-571);
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = (!-564);
                var_19 = (~-570);
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
