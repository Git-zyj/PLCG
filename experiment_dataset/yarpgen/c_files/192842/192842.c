/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (((arr_5 [i_0] [i_0 - 1] [i_0]) << (var_8 - 45371)));
                    arr_7 [i_0] [i_1] [i_1] = var_10;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                arr_13 [i_4] = ((((min((arr_11 [i_3]), var_0))) ^ 11699));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_16 -= var_4;
                            var_17 -= (((((var_5 ? var_3 : ((max((arr_15 [i_3] [i_4] [i_5] [i_6]), (arr_17 [i_3] [i_3] [i_3] [12] [i_3] [i_3]))))))) ? (arr_10 [i_6] [i_3] [i_5]) : 11699));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_18 = arr_9 [i_3];
                                arr_27 [i_9] [i_9] [i_8] [i_9] [i_9] = max(((-(arr_24 [i_8] [i_8 + 1] [i_8] [i_9] [i_9]))), -11709);
                                arr_28 [5] [i_4] [i_8] [i_8] [i_4] = 14336;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
