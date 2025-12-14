/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_9 ? var_6 : var_15)) ^ ((((!(var_7 == var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 ^= (((arr_6 [i_1 + 2] [i_0]) | (((var_9 << (((arr_5 [i_0]) - 1247597261)))))));
                var_19 |= (max(((var_6 - (arr_1 [i_0 + 1]))), (arr_0 [4])));
            }
        }
    }
    var_20 = max(var_4, var_4);
    var_21 = ((15 ? (-2147483647 - 1) : 2147483647));
    #pragma endscop
}
