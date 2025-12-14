/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 |= ((((((((27 ? (arr_3 [i_1]) : (arr_2 [i_1] [i_1] [i_1])))) ? (((min(var_18, var_16)))) : (min(var_1, var_1))))) ? ((((((arr_1 [i_1]) ? 31 : (arr_2 [i_0] [i_0] [i_1])))) ? ((((arr_2 [i_1] [i_1] [i_0 + 3]) ? var_17 : (arr_0 [i_0] [i_1])))) : (min(-6401075160410577672, var_16)))) : (min((((arr_3 [i_0]) ? -6401075160410577672 : 13462)), (((-6401075160410577671 ? (arr_0 [i_0 + 3] [i_1]) : (arr_1 [i_0 + 1]))))))));
                arr_4 [i_1] [i_0] [i_0] = ((-6401075160410577671 ? (min(1042096319, -6401075160410577671)) : 0));
            }
        }
    }
    var_20 ^= min((((((var_0 ? var_6 : var_11))) ? ((var_6 ? -6401075160410577680 : 217)) : (((var_9 ? var_3 : 113))))), ((((((var_11 ? var_12 : var_7))) ? ((min(var_4, 0))) : ((min(var_13, var_13)))))));
    #pragma endscop
}
