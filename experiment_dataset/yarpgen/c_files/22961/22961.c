/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 -= (min(((max(var_0, 1))), (114 / -115)));
                arr_4 [i_0] [i_1 - 1] [i_0] = (((((((var_6 > 16581010267227846596) < (~var_9))))) * (min(115, 1865733806481705021))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [2] [i_0] = (~0);
                                arr_12 [i_0] [i_1] [1] [1] = (((((max(1, 93)))) * (!8)));
                            }
                        }
                    }
                    arr_13 [i_2] [i_0] [11] = 1;
                    var_16 = (1 - 1);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_17 += (32768 || -115);
                    var_18 = (max(var_18, (~114)));
                    arr_17 [1] [i_0] = 0;
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
