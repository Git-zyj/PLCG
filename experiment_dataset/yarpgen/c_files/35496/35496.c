/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_13;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= (arr_3 [i_0 - 2] [i_0 - 2]);
                var_20 = (((var_2 ? (((arr_1 [i_0] [i_1 + 1]) ? (arr_2 [1] [1]) : 1)) : (arr_2 [i_0 - 3] [i_0 + 1]))) >= (arr_1 [i_1 - 1] [i_0 - 2]));
                arr_5 [i_0] = ((2543881504249296285 ? var_3 : 17009));
                var_21 = (min(var_21, (((2543881504249296280 ? 17424623392775754805 : 3262676176530547294)))));
                arr_6 [i_0] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
