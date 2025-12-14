/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (2147483647 / 111)));
                    var_22 = (((~(arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
