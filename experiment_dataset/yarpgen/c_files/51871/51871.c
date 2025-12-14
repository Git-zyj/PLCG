/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (((arr_0 [i_0]) << (6060963845429920833 - 6060963845429920831)));
                var_16 *= (((arr_1 [i_0]) ? ((((((arr_0 [i_0]) && -11)) ? ((((arr_2 [i_0] [i_0]) || var_8))) : var_6))) : (arr_2 [i_0 + 1] [i_0 + 1])));
                arr_5 [i_0 + 3] = ((var_5 | ((var_6 ? 20 : 7))));
            }
        }
    }
    #pragma endscop
}
