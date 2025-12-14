/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [0] [i_1] [i_1] [i_1] = ((var_4 ^ ((~(arr_6 [i_1] [19] [i_1])))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_3] [i_3] [i_2 - 1] = ((((((arr_8 [i_0 - 2] [i_2 + 1]) ? 65280 : 255))) ? ((65282 >> (var_9 - 20))) : ((var_1 ? (arr_8 [i_0 + 1] [i_2 - 1]) : 65291))));
                        var_14 = 127;
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_16 [i_4] [9] [i_0 - 1] [i_1] [i_4] = var_0;
                        arr_17 [i_0 + 1] [i_1] [i_2 + 1] [i_2 + 1] [i_4] = -1;
                    }
                    arr_18 [i_0] [i_1] = 3517822917226170367;
                }
            }
        }
    }
    #pragma endscop
}
