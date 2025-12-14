/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1 > 1);
    var_15 &= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 |= var_1;
                    var_17 ^= (min(((((((arr_0 [i_2] [i_2]) ? -2147483630 : -356707759568059900))) ? 1 : (~var_0))), ((1 & ((-356707759568059898 ? 28276 : 16))))));
                }
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
