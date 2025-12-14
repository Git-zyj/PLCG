/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((-((~(arr_5 [i_1] [i_1 - 1])))));
                var_19 = (min(4092, -32761));
                arr_6 [i_1] [0] = 1;
            }
        }
    }
    var_20 = var_1;
    var_21 = var_10;
    #pragma endscop
}
