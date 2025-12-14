/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 | ((((var_9 & var_0) << (((~var_6) - 13496353199343200886)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_13 *= ((((max(-1874009434, (16021133604149236052 + 9223372036854775808)))) ? ((-(arr_2 [i_0 + 1]))) : (((!(((9223372036854775808 + (arr_0 [i_0 - 3] [i_0 - 3])))))))));
                arr_4 [i_1] = var_8;
            }
        }
    }
    var_14 = var_2;
    var_15 = ((~245869570) - (min(var_1, 0)));
    #pragma endscop
}
