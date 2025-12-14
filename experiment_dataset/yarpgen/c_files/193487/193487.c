/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (((((((var_0 ? var_11 : 1406192183))))) - (min(1406192183, 2888775121))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 1] [i_0 - 1] = (((var_9 ? (((3476319067074332265 ? var_10 : var_1))) : ((var_12 ? -10 : var_6)))));
                arr_6 [i_0 - 1] = (0 ^ 1406192183);
            }
        }
    }
    var_16 = (min((((var_5 <= 3476319067074332247) ? -var_10 : ((var_8 ? var_9 : -2142784088)))), var_9));
    #pragma endscop
}
