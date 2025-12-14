/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((((~(4294967290 & 5749545045839168631)))) ? (~var_4) : (min((26574 - var_3), (max(32767, var_9))))));
    var_18 = 3710;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (max(var_7, ((~(min(1, var_14))))));
                arr_6 [i_0] = max(((104 ? var_6 : (((!(arr_3 [i_0])))))), (min(((var_2 ? (arr_0 [i_0]) : var_0)), ((102 ? var_5 : var_1)))));
            }
        }
    }
    #pragma endscop
}
