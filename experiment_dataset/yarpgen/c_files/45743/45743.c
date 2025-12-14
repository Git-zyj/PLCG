/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = 2885566324;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (arr_12 [i_3] [i_3] [i_3] [i_3] [i_3]);
                                var_16 = (~var_9);
                                arr_13 [i_0] [i_0] [i_2 + 2] [i_3] [i_0] = (min((((((255 >> (164 - 139))) != 0))), (arr_11 [i_4 - 1] [i_4] [i_0] [i_4 + 3] [i_4 + 1])));
                            }
                        }
                    }
                }
                var_17 = (min(var_17, var_5));
                var_18 = (+(min(var_11, (max((arr_5 [i_0]), var_12)))));
            }
        }
    }
    var_19 = 78;
    #pragma endscop
}
