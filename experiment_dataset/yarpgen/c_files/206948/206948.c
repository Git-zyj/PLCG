/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 31896;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 32767;
                var_20 = -32760;
                arr_7 [i_1] [i_0 + 2] = 362714373;
            }
        }
    }
    var_21 -= (((max(-1, -25773)) / (((max(var_2, 49179))))));
    #pragma endscop
}
