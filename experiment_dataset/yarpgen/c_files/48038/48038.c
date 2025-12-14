/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_5 >> (2152416729 - 2152416698)))) ? var_1 : var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_19 ^= 1;
                arr_5 [i_0] = ((((min((arr_3 [i_1 - 4] [i_1 - 3]), 2076209068778317957))) ? (min(((2641214224 ? (arr_2 [i_0] [1]) : 10322559045027715581)), -95)) : (((var_5 ? var_16 : (((716797856 ? var_3 : var_16))))))));
            }
        }
    }
    var_20 = max((var_3 == var_4), var_17);
    var_21 = (max((max((-1 - var_4), var_11)), var_12));
    #pragma endscop
}
