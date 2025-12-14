/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = (max((min(32752, 1683549118)), 784136086));
        arr_2 [18] = ((min(1, (~-42))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (max(-1, -13));
        var_14 = ((-(max((min(9035172939755153883, 155)), ((min(1, -32753)))))));
        var_15 = ((784136086 ? ((20724 ? -25893 : 1290893028195395047)) : (max(0, -34))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_16 = (max((max((max(2144098539, (-2147483647 - 1))), 0)), 33));
                var_17 = 0;
            }
        }
    }
    var_18 = -1683549118;
    #pragma endscop
}
