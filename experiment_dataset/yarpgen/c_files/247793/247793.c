/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((((!((((arr_3 [i_0] [9]) ? var_13 : var_5))))) ? ((~((-1100277443 ? var_14 : 1762903953335186025)))) : (arr_1 [1] [i_1])));
                var_20 &= (arr_3 [i_0] [2]);
            }
        }
    }
    var_21 = (((((max(var_16, 16683840120374365591))) ? ((var_15 ? var_8 : var_15)) : (var_18 > 32768))));
    #pragma endscop
}
