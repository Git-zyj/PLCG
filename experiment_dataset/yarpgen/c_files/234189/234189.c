/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((((1 * 2414049650) > ((var_7 ? -418896418764781898 : 65527)))) ? var_2 : ((var_0 ? (1 < var_7) : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((((var_4 | var_9) && var_5)) ? ((var_0 << (var_6 && var_2))) : (((var_9 - ((var_8 << (var_7 - 466)))))))))));
                arr_7 [i_1] [i_1] [i_1] = (var_7 & 418896418764781897);
            }
        }
    }
    #pragma endscop
}
