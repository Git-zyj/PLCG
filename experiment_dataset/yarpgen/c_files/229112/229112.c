/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-(((!-53007059) ? (((var_12 ? 40 : 1))) : (((-1387053822162683774 + 9223372036854775807) >> 2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((18446744073709551615 != 65532) && ((((var_2 + 2147483647) >> (-3386 + 3389)))))));
                var_18 = (((((var_7 ? 1 : var_15)) - (251 - -3386))));
                var_19 = (max(var_19, (((((1631387348 ? (200 >= var_10) : 89)) >> 1)))));
                arr_5 [i_1] = (((((1 ? ((1 ? -5558382002172166128 : 117051750003453693)) : 81))) ? ((-117051750003453694 % (1 <= 32))) : (((-27535 ? var_8 : 12868)))));
            }
        }
    }
    #pragma endscop
}
