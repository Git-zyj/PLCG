/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(63488, (((-63489 <= ((var_0 ? var_4 : var_12)))))));
    var_14 = (var_10 ? ((((~var_8) ? (~var_1) : var_0))) : (((var_2 < 2) ? (!var_11) : var_8)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (!-63489);
                arr_4 [i_1] [i_0] = ((((((!(arr_1 [i_0])))) > (arr_0 [i_0]))));
            }
        }
    }
    var_16 -= min(-6254, 63491);
    #pragma endscop
}
