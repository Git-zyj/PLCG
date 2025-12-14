/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = var_10;
    var_17 = ((((!((min(var_1, var_7)))))));
    var_18 = (((((((min(var_1, var_2))) ? (~var_7) : var_5))) ? (((max(var_9, 1)))) : (((var_13 > ((var_13 ? var_9 : -24)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 |= (((arr_10 [i_3 - 2] [i_3 - 3] [i_3 - 3]) << (55 - 43)));
                                var_21 = var_9;
                                var_22 = 1;
                            }
                        }
                    }
                    var_23 += (arr_14 [i_0] [i_0]);
                    var_24 = 1;
                }
            }
        }
    }
    #pragma endscop
}
