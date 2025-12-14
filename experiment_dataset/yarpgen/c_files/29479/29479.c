/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (1914967333 <= 6);
                    var_12 = ((!(((-var_11 * (max(var_8, 13907633617411079639)))))));
                    arr_9 [i_0] [i_1 - 1] [i_2] [i_0] = ((((((max((arr_1 [i_1]), var_5)) >> (((arr_3 [i_0] [i_2] [i_2]) + 1851862374))))) ? (~var_0) : (arr_3 [i_0] [i_1 - 3] [i_2])));
                }
            }
        }
    }
    var_13 = (max(var_13, (((!(+-1914967359))))));
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 15;i_4 += 1)
        {
            {
                var_15 += (((-((2424356810768426806 ? var_10 : (arr_7 [i_3] [i_4] [i_3] [i_4 + 1]))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_16 = (arr_15 [i_5] [i_5]);
                            var_17 = (((arr_11 [i_3]) << (var_6 - 249510775)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
