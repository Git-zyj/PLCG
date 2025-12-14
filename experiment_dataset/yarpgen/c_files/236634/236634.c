/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((min(-1854266964, ((-73 ? 65535 : 4097277554)))));
    var_17 -= (!1749349847);
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((min(((9223372036854775800 | (((((arr_5 [1]) == -7558)))))), (0 - 0))))));
                arr_8 [i_0] [24] = min(2147483647, var_3);
                var_20 = ((((arr_6 [i_0] [i_1]) + 9223372036854775807)) >> 0);
            }
        }
    }
    #pragma endscop
}
