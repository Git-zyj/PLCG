/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 14;
    var_12 ^= (((((~((max(var_6, 1)))))) ? var_7 : var_5));
    var_13 = ((15 <= ((max(0, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (arr_4 [i_0] [i_1]);
                var_15 = (max(0, 255));
                var_16 = 255;
            }
        }
    }
    #pragma endscop
}
