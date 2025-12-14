/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_1;
    var_11 = (722660961808266670 != 27222);
    var_12 = (max(-27223, -27223));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = var_9;
                arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 3] = ((27222 ? (((~var_7) ? 27222 : 27199)) : (27222 < -27223)));
                var_14 *= (!27222);
            }
        }
    }
    #pragma endscop
}
