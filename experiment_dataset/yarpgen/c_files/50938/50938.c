/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_10);
    var_17 = ((!(~var_1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (~8);
                                var_19 = ((!((!(!var_1)))));
                                var_20 = (~var_14);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_1] = (!137469460);
                }
            }
        }
    }
    var_21 = ((!(((~(~var_2))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_27 [i_7] [i_7] [i_6] [i_7] = ((-(((!(!137469459))))));
                    arr_28 [i_5] [i_6] [i_6] [i_7] = -4157497825;
                }
            }
        }
    }
    #pragma endscop
}
