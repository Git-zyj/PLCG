/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, var_11));
                                var_14 += (min(-40, ((min(var_7, 877715615)))));
                                arr_16 [i_4] [i_2] [7] [i_2] [i_0] = (min(((((var_2 ? var_10 : (arr_10 [7] [i_3] [i_2] [0] [1] [0]))))), (min((-9223372036854775807 - 1), 32887))));
                            }
                        }
                    }
                }
                arr_17 [i_1] [7] &= ((-((3417251676 ? 877715637 : 877715615))));
                arr_18 [i_1] [i_0] [3] = (((!877715619) != (var_9 >= 127)));
                arr_19 [i_1] [i_0] = (((!(!22))));
            }
        }
    }
    var_15 = 130;
    #pragma endscop
}
