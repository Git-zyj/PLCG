/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((((((((8465884727157322036 >> (2147483647 - 2147483610)))) ? 1999896443 : 7946598051055768847))) ? (((((var_9 ? var_11 : var_0))) ? (var_3 / var_2) : ((var_4 ? -3481641831129313822 : var_2)))) : (((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1])))));
                var_14 = 3318112207803750299;
                var_15 = var_10;
                var_16 ^= (--116);
            }
        }
    }
    var_17 ^= (var_0 && var_1);
    #pragma endscop
}
