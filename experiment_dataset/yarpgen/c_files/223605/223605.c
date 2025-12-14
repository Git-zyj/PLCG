/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 *= (min((max((!32577), ((1 ? 0 : -1572058747)))), ((((arr_4 [i_0] [i_1]) <= var_5)))));
                arr_6 [i_0] [i_0] = ((-((-0 ^ ((var_11 >> (-12 + 38)))))));
            }
        }
    }
    var_15 ^= (((54635 * -3) ? (((169 - var_13) + (var_3 + var_6))) : ((((-931840825 ? -12876 : 5))))));
    #pragma endscop
}
