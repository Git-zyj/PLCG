/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 |= ((((max((arr_8 [i_0 - 3] [i_0] [i_0 - 3]), (((arr_6 [i_1] [i_2]) - (arr_4 [i_1] [i_2])))))) ? 126100789566373888 : (arr_0 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((arr_11 [i_0] [i_1] [i_0] [i_3]) ? ((((((arr_9 [i_0 - 2] [15] [i_1] [i_2] [i_3] [i_4 - 1]) ? (arr_0 [i_0]) : 126100789566373888))))) : ((max(0, 3788518153))))))));
                                var_14 = (min(var_14, ((max((max((arr_3 [i_0]), 0)), 126100789566373888)))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_2] = ((((max(0, (1 && -9623)))) || -48));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            {
                var_15 = (arr_8 [i_5] [i_5] [i_6]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [i_5] [i_5] [7] = (max(16384, ((~(230 || 21779)))));
                            var_16 += (max((max((arr_9 [i_5 + 1] [i_5] [i_6] [10] [i_7] [i_8]), 3978082088720229144)), (((5432 ? -9623 : 7015)))));
                            arr_27 [i_5] [i_6] [i_5] [i_8] = ((max((arr_23 [i_8]), (arr_22 [i_6] [i_6] [i_7] [i_7] [i_7 + 2] [i_7]))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
