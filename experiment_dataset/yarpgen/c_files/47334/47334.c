/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [4] [i_1] = ((-(((arr_2 [i_1 - 1] [i_3 - 3]) * (arr_2 [i_1 + 1] [i_3 + 1])))));
                        arr_11 [i_1] [i_1] [i_2] [i_3] = (((max((127 * var_5), var_9)) * (arr_8 [i_1])));
                    }
                }
            }
        }
        var_13 = min((arr_1 [i_0 - 2]), (max((arr_2 [i_0 + 2] [i_0 + 1]), (arr_4 [i_0] [i_0] [i_0 - 2] [i_0]))));
    }
    var_14 = var_7;
    var_15 = var_5;
    #pragma endscop
}
