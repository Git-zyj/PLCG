/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    var_11 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_12 = ((21349 ? var_3 : ((var_2 << (((var_6 + 2061687256) - 19))))));
                        var_13 = var_7;

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] &= var_7;
                            var_14 = 21349;
                            var_15 -= (0 ? 21349 : 1);
                            var_16 = -1492113412;
                        }
                    }
                    arr_13 [i_1] [i_1] [i_1] [i_1] = (min((((44186 & 0) ? 21349 : 1)), (~var_3)));
                    var_17 = (max(var_17, ((min(((~(~1))), (~var_7))))));
                }
            }
        }
    }
    #pragma endscop
}
