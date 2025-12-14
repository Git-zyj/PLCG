/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) && (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 |= (max(22361, 103));
                        var_19 = ((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]), (arr_11 [0] [i_0] [i_0] [i_0] [2] [i_0]))));
                    }
                }
            }
        }
        arr_14 [i_0] = 43175;
    }
    var_20 = ((1 << (43175 - 43175)));
    var_21 = var_3;
    var_22 = var_13;
    #pragma endscop
}
