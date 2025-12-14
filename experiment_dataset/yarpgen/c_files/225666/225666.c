/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 &= 236;
                var_21 *= ((255 ? ((((!((((arr_0 [i_0]) ? 13 : var_16))))))) : (((((65535 ? 23092 : 1))) ? ((var_18 ? 65534 : (arr_1 [i_0] [i_1]))) : var_0))));
                var_22 ^= var_18;
                var_23 = var_0;
            }
        }
    }
    var_24 = (((((((var_11 ? var_9 : var_2))) ? var_0 : ((var_1 ? var_8 : var_13))))) ? (!var_13) : ((65535 ? 1 : 1)));
    var_25 |= var_4;
    var_26 |= var_17;
    var_27 = min(var_18, (((((var_18 ? 1 : -1))) ? var_4 : var_15)));
    #pragma endscop
}
