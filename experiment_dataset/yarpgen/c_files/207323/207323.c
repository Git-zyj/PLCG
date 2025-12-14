/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~var_11) & (((var_0 ? (max(-3377419468733207479, 3377419468733207478)) : ((3377419468733207478 ? -3377419468733207471 : 1)))))));
    var_16 |= (~((max(-3377419468733207471, -3377419468733207471))));
    var_17 = (var_11 * var_10);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 += ((((max(341361659, (max(3377419468733207478, 3377419468733207499))))) || ((((1 ^ -341361660) ^ ((var_14 ? (arr_4 [i_2]) : 1)))))));
                    var_19 = (var_7 / var_6);
                    var_20 = (((~(1544661164 * 536870911))));
                }
            }
        }
    }
    #pragma endscop
}
