/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 *= (var_11 == var_5);
    var_15 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (max(8, (min(1070573960262745255, 4294967288))));
                arr_5 [i_1] [i_1] [7] = (arr_1 [i_0]);
                var_16 ^= (((((var_8 && var_10) ? (((((arr_1 [19]) <= var_12)))) : var_5)) << (var_7 - 99)));
                var_17 = (max(var_17, ((min((max(-836951785, ((32213 ? -11215 : var_5)))), (!4675835566158899368))))));
            }
        }
    }
    var_18 = -4675835566158899369;
    #pragma endscop
}
