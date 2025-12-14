/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((!114), (max((635138741 ^ 0), -30582))));
    var_12 = (min(var_12, 28504));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (100 + 179160139);
                                arr_14 [i_3] = (max(((max(((!(arr_9 [i_0]))), (arr_0 [i_0] [i_0])))), (min((arr_7 [i_1 - 1] [i_4]), -2056627360350845204))));
                                var_14 = var_4;
                            }
                        }
                    }
                }
                arr_15 [7] [i_1] = var_9;
                var_15 = (max(var_15, (((-118 < (arr_1 [i_0]))))));
                var_16 = (arr_4 [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
