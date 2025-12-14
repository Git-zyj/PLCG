/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [5] [i_2] = ((var_5 ? 1 : (~931837596)));
                                var_17 += ((var_5 & (((((arr_3 [i_0] [i_2 - 3] [i_2]) + 2147483647)) << (((var_12 & 931837596) - 156))))));
                                var_18 = (~74);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_19 = -931837584;
                                var_20 = (~74);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}
