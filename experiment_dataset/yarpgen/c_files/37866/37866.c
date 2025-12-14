/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((~(max(var_6, var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((-1 + (!163)));
                var_15 = -1815172691;
                var_16 += (min(((var_2 << (var_11 - 2257372284))), var_8));
                arr_5 [i_1] [i_1] = (max((18446744073709551614 / 92), 161));
            }
        }
    }
    var_17 ^= (max(var_5, ((min(9223372036854775807, var_4)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_18 = (max(var_18, ((min((!var_10), (982506026061985099 && var_9))))));
                var_19 = (min(((min(var_2, 75))), -var_4));
                var_20 = (!180);
                var_21 = (max((min(var_0, var_4)), ((max(86, 0)))));
            }
        }
    }
    #pragma endscop
}
