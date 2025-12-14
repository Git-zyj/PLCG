/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_17 &= ((arr_2 [i_1 - 1] [i_1]) ? ((var_3 ? var_7 : var_5)) : (242 ^ var_5));
                arr_6 [i_0] [i_1] [i_0] = 511;
                arr_7 [i_0] [i_1] [1] |= (10 * 19);
                var_18 = min((arr_4 [i_1] [i_1] [i_1]), (min(240, 40481)));
            }
        }
    }
    #pragma endscop
}
