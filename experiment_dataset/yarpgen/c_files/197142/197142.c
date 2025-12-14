/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 ^= (65 < (((var_13 && (((1 ? var_6 : 0)))))));
                            var_15 |= 0;
                            var_16 |= (arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_3]);
                            var_17 -= ((-1 && (((((6128 ? var_11 : var_9))) || 4398046511103))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_18 |= 645327694;
                            var_19 = var_9;
                            var_20 = (min(var_20, (((min((arr_7 [i_0] [i_1] [i_5]), (arr_1 [11] [i_0 - 1])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_21 |= -var_12;
                            var_22 = var_11;
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((((min(6883, var_3))) ? (~var_13) : -var_12))) ? ((389271735 ? (~941) : var_3)) : var_5));
    var_24 = var_13;
    var_25 |= (((((((~var_9) + 2147483647)) << (((((var_3 + 2147483647) >> (var_3 + 102))) - 3)))) >> (var_9 - 6881)));
    #pragma endscop
}
