/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 = (min((((~(((arr_8 [i_0] [11] [i_1] [7] [i_2] [i_3]) ? var_15 : (arr_1 [i_0] [i_2])))))), (((!var_11) ? var_9 : (arr_8 [i_0] [i_0] [i_1] [i_2] [1] [15])))));
                            var_18 = var_9;
                        }
                    }
                }
                var_19 = var_6;
                var_20 *= var_1;
            }
        }
    }
    var_21 = ((((((max(540876582, 24237))) ? -var_1 : ((min(60, 0)))))) ? (~var_13) : (min(-var_13, var_3)));
    #pragma endscop
}
