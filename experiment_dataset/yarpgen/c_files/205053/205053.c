/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = 98892344;
                    var_16 = 63;
                    arr_7 [i_1] = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] = (((0 ? 65535 : 0)));
                                arr_14 [i_1] [i_1] [i_3] [i_4] = var_3;
                                var_17 = (max(var_17, var_12));
                                var_18 = var_0;
                                arr_15 [i_4] [5] [i_1] [i_1] [i_0] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 *= (var_9 && var_1);
    #pragma endscop
}
