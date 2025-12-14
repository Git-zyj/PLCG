/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 12;i_4 += 1)
                            {
                                var_23 = ((0 ? var_6 : 40));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_2] [14] = var_14;
                            }

                            for (int i_5 = 1; i_5 < 15;i_5 += 1)
                            {
                                var_24 = ((((974754210408006846 ? (arr_15 [i_0] [i_0] [i_2] [i_1] [i_5 + 1]) : var_16)) <= -49));
                                var_25 = (min(var_25, ((((~var_2) ? (((arr_8 [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 3]) + (arr_8 [i_1 + 2] [i_1 - 3] [i_1 - 3] [i_1]))) : ((-(arr_8 [i_1 + 2] [i_1 - 3] [i_1] [i_1]))))))));
                            }
                        }
                    }
                }
                var_26 = (max(var_26, ((((-127 - 1) % (arr_14 [i_1] [i_1 - 4] [i_1 - 4] [i_1 - 1] [i_0] [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
