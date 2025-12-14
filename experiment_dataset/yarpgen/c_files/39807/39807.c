/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 ^= ((((((((-127 - 1) ? 65523 : var_10)) * var_0))) ? (arr_1 [i_0 - 1]) : ((var_6 % ((1 ^ (arr_1 [i_0])))))));
                var_19 = (((((((min(3486, 1))) ? ((max(1, 1))) : 21527))) ? 44008 : 21527));
            }
        }
    }
    #pragma endscop
}
