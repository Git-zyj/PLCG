/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((((((var_4 ? var_5 : 13234312689486288914))) ? var_0 : ((((-1 + 2147483647) >> (-5690719275508829690 + 5690719275508829703))))))) ? ((((min(13234312689486288914, 1835624236))) ? ((var_9 ? -708204032 : var_2)) : 37911)) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0] [12] = min(((min(1, -16990))), (((((var_8 / (arr_5 [i_0 - 1] [i_0] [i_0])))) ? (((min(28570, -16990)))) : 1125882726973440)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, -29));
                                var_12 = (((arr_6 [i_0]) <= ((10857 ? 7 : 2228180690652088749))));
                                var_13 = (max(var_13, ((((arr_13 [i_3] [i_3] [i_0] [10] [10] [i_0 + 1] [i_3]) ? ((max((arr_13 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]), var_9))) : ((~(arr_13 [i_3] [8] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))))));
                            }
                        }
                    }
                    var_14 -= var_1;
                }
            }
        }
    }
    var_15 = var_5;
    #pragma endscop
}
