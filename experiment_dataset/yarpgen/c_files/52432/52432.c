/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = ((((0 ? 56790 : 4294967292)) - (((min(var_1, (arr_8 [i_0] [i_0 - 1])))))));
                    var_15 += (((9223372036854775807 != 107) <= 2747063582));
                }
            }
        }
    }
    var_16 = (min(((((var_13 ? var_6 : 2024097221)) ^ var_10)), ((((var_7 >= var_10) <= (var_7 && var_12))))));
    var_17 = var_3;
    var_18 = (min(var_18, ((((((min(var_8, var_1)) ? 1638332578 : var_13))) ? ((((var_5 <= ((235 ? var_10 : var_10)))))) : (max((var_10 + var_7), (var_9 || var_9)))))));
    #pragma endscop
}
