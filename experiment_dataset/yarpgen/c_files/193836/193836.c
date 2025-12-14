/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(-119, 8128))) ? 57407 : (~-88)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 14;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = (max((min(((0 ? var_12 : 1)), -1482980445)), (!131941395333120)));
                                var_16 &= (((0 ^ 1) ? ((var_14 & (((arr_7 [i_0] [i_0] [i_2]) ^ var_12)))) : (((((arr_7 [i_0] [i_1] [i_2]) << 0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
