/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= -2681870785741130230;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1] [i_1] = (((((var_8 ^ (arr_1 [i_0 - 4])))) ? -var_1 : (min(((min(23116, (arr_1 [9])))), -2681870785741130229))));
                var_15 = ((!(((arr_1 [i_0 + 1]) && -8120864609259246398))));
                var_16 |= (((-32748 == -var_10) ? (((!-577027596415217079) ? (150 || -32749) : ((max((arr_2 [i_1] [i_1 - 1]), var_12))))) : (((((((arr_2 [i_0] [i_1]) >= 296301989))) <= ((32 ? var_13 : (arr_2 [i_0 - 3] [i_1 - 1]))))))));
                arr_5 [i_1] [15] = (((max(-32717, 577027596415217082)) + 577027596415217079));
            }
        }
    }
    #pragma endscop
}
