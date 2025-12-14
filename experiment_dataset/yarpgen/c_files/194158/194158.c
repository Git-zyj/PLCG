/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max((arr_1 [i_0]), ((max(-75, (arr_3 [i_1]))))));
                var_15 *= (((((arr_2 [18] [i_1]) ? ((4294967295 >> (-75 + 75))) : var_9)) == (-75 ^ 13247)));
            }
        }
    }
    var_16 -= var_5;
    var_17 *= (var_4 && var_8);
    var_18 = -var_9;
    var_19 = (min(((max(74, ((-8072817215557310959 ? 113 : var_10))))), var_0));
    #pragma endscop
}
