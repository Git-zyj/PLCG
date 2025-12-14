/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = var_10;
                            var_14 ^= ((arr_6 [7] [i_3 - 2] [i_1 + 1]) ? ((((((arr_8 [i_0] [i_1] [i_2] [i_2] [i_2]) ? var_2 : var_4))) ? (arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3 - 3]) : (!var_9))) : ((var_0 ? var_3 : (arr_4 [i_3 + 1] [i_1 + 2] [i_0]))));
                        }
                    }
                }
                var_15 = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_16 += ((max((((156 ? var_2 : var_7)), (~var_10)))));
    #pragma endscop
}
