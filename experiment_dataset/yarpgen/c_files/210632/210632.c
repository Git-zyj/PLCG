/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] [i_2] = (~((~(arr_4 [i_1 - 4] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 += (arr_12 [i_0] [i_1] [i_2] [0] [i_4] [i_0]);
                                var_13 -= (~((var_7 ? 3032 : var_1)));
                            }
                        }
                    }
                    var_14 = (min(var_14, var_11));
                }
            }
        }
    }
    var_15 = (max(var_5, ((min(var_7, var_4)))));
    var_16 = ((~var_4) ? var_8 : -var_1);
    #pragma endscop
}
