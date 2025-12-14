/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = (0 + (-32767 - 1));
                            var_14 = (4192408538409145347 << 30);
                            var_15 = ((((min((min(176, (-32767 - 1))), (var_9 != var_5)))) ? ((22989 ? 32762 : -1641077963)) : ((((max(-6638204103274579722, 32767)) < (arr_8 [i_0] [i_0] [i_2] [i_2]))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 = arr_0 [i_0] [i_1];
                                var_17 = 4192408538409145347;
                            }
                        }
                    }
                    arr_20 [9] [4] [7] [i_0] = -27333;
                }
                var_18 = ((!(((5616236672872352923 ? 2147483647 : (-2147483647 - 1))))));
                var_19 = (!-var_0);
                var_20 = (arr_1 [i_0]);
            }
        }
    }
    var_21 = (min(var_4, var_1));
    #pragma endscop
}
