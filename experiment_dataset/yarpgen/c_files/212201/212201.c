/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~15714);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_1] [i_0] [i_1] [i_0] |= (arr_2 [i_0] [i_1]);
                            arr_10 [i_3] = var_0;

                            for (int i_4 = 3; i_4 < 18;i_4 += 1)
                            {
                                var_20 = ((~(~2670255667)));
                                arr_13 [10] |= var_11;
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((2139372300 % (~4194303)));
                var_21 = (arr_4 [i_0] [i_1]);
                var_22 = var_17;
            }
        }
    }
    var_23 = 2670255669;
    #pragma endscop
}
