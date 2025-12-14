/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [8] [i_1] [i_2] &= 7936;
                    arr_9 [0] [0] [0] = (7936 >= 1831359744);
                }
            }
        }
    }
    var_15 = ((((((1 | 1) ? 1399676789897639362 : var_1))) ? var_7 : 82));
    #pragma endscop
}
