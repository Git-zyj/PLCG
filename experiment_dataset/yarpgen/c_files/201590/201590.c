/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_11, ((max(var_14, (var_15 <= 879992691682372342))))));
    var_17 = ((((((var_3 && var_11) ? (1133434325 || -8) : ((var_3 ? var_5 : var_1))))) ? (max((~-1371707460), (496284900 == 13510798882111488))) : var_0));
    var_18 = ((((min(var_6, var_0)) - (min(-784470446, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((17489451808192179850 | ((max((arr_4 [i_0] [i_1]), var_2)))));
                arr_9 [i_0] [i_0] = (max(var_13, (((+(max((arr_7 [i_0] [i_1]), var_5)))))));
                arr_10 [8] [i_1] |= (max((-1 != 145), 65535));
                var_19 -= (arr_3 [12]);
            }
        }
    }
    var_20 ^= (((((var_12 ? (0 ^ var_1) : var_0))) ? var_10 : (max(-var_9, var_4))));
    #pragma endscop
}
