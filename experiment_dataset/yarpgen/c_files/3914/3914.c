/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += min((((var_3 ? (var_7 && 3908122796) : (~var_4)))), (max(var_6, (var_8 * var_1))));
    var_11 = (min(((max((var_9 < var_1), var_5))), (!25309)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = ((~((25309 << (((-32767 - 1) + 32774))))));
                var_13 = var_7;
                var_14 = (max(var_14, ((max(4706789716619426960, 4706789716619426943)))));
            }
        }
    }
    #pragma endscop
}
