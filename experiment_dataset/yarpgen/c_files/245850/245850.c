/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = min((!325271303), 325271302);
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = 1;
                                var_20 = (arr_8 [i_4] [i_4] [i_4] [i_4]);
                                arr_12 [i_1] [i_0] = -325271307;
                                var_21 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = -325271326;
    #pragma endscop
}
