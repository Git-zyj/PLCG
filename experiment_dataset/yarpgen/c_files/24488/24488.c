/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_2] = (((~4777204992691929309) ? -6103121934540804264 : 3319185330));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = ((~(max(120, var_10))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_21 = ((-(((arr_4 [i_4]) ? var_3 : (arr_9 [i_1])))));
                            arr_14 [i_3] [14] [i_1] [i_3] |= (arr_3 [i_4]);
                        }
                        var_22 = var_8;
                    }
                }
            }
        }
    }
    var_23 = var_8;
    #pragma endscop
}
