/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~((65535 ? 3187202536 : 5641585966449757774)));
    var_17 = 1107764759;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((((max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1]))))) / (((arr_2 [i_1 - 1] [i_1 - 1]) | var_9))))));
                    arr_7 [i_2] [i_1] = -1;
                    arr_8 [i_2] = ((((!3187202559) % var_14)));
                }
            }
        }
    }
    var_19 = ((max((!1), 1107764759)));
    #pragma endscop
}
