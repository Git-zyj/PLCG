/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(((max(var_8, ((-20014 ? 65535 : -4164308454526718914))))), (max((max(var_18, var_17)), var_5)));
    var_21 = (max(((max(var_15, var_1))), (min(4164308454526718894, ((max(-12, 55698)))))));
    var_22 = ((var_19 ? var_12 : (min(var_18, ((var_10 ? var_18 : var_18))))));
    var_23 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_24 = (((~(arr_1 [i_1 + 1]))));
                var_25 = ((-((-((min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
