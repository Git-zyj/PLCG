/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [1] = -738714669;
                        var_13 ^= var_9;
                        var_14 ^= var_8;
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_2 - 2] [i_3] = 1499204227;
                        var_15 = ((min(var_2, (arr_7 [i_3] [1] [i_1]))));
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = (((var_5 ? (arr_6 [i_0 - 1] [i_0 + 4] [i_0 + 3]) : (arr_2 [i_0 - 1] [i_0] [i_0]))));
    }
    var_16 = (((-((max(var_0, var_0))))));
    var_17 = (min(var_17, 738714680));
    #pragma endscop
}
