/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 + (min(144114088564228096, 2550251915))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = 255;
                    var_14 = (arr_4 [i_0 + 3] [i_1 + 1] [i_1 + 1]);
                    arr_8 [i_0] [1] = (((((-(arr_1 [i_2 + 2])))) ? (min((arr_7 [1] [i_1 + 1] [i_2 - 2]), var_4)) : (-117 || -118)));
                }
            }
        }
    }
    var_15 = -65535;
    #pragma endscop
}
