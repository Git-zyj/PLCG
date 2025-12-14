/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((var_2 ? ((15100 ? 0 : 1)) : ((1 ? 0 : 19476))));
    var_11 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [17] [i_1 - 2] [17] = (~-32766);
                var_12 = (((((min((arr_3 [i_1 + 1]), (min(var_6, -7753519788388866484)))) + 9223372036854775807)) >> (((arr_3 [i_1]) - 941455415))));
                arr_8 [i_0] [i_0] [i_0] = arr_6 [i_0];
            }
        }
    }
    var_13 = var_4;
    #pragma endscop
}
