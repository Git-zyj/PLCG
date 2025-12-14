/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 |= (((((2147483647 / (-9223372036854775807 - 1)))) - ((((!(116 || -1878252470273463739)))))));
                arr_5 [i_0] [i_0] = (18772 % 127);
            }
        }
    }
    var_13 |= ((~(((var_9 && var_11) ? ((min(0, var_1))) : var_0))));
    #pragma endscop
}
