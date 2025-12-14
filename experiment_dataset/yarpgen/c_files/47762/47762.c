/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_0 + 1] [2] = (~var_5);
                var_16 = (((((((var_9 ? var_8 : var_2))) && (((arr_2 [i_1]) && var_3)))) || var_9));
                var_17 ^= (8126464 | 18446744073709551615);
                var_18 += ((((((arr_4 [i_0 + 2]) + var_6))) ? ((max((arr_0 [i_0 - 1]), (-127 - 1)))) : (!51747)));
            }
        }
    }
    var_19 = var_14;
    #pragma endscop
}
