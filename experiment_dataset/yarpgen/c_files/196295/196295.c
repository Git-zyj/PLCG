/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = 2728357897107807628;
                var_20 = (max(var_20, (~288230371856744448)));
            }
        }
    }
    var_21 = (max(var_11, 287518898));
    #pragma endscop
}
