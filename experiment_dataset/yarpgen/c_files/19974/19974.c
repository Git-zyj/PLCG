/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 0;
    var_18 *= (min(var_14, (((4294967295 ? (var_1 / -897781132) : ((30 ? 13476 : -32)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_8 [i_2 - 1] [i_2 + 1]);
                    var_19 = (min(var_19, (((((((arr_8 [i_2 + 1] [i_0 + 1]) && (arr_4 [6])))) < (((arr_4 [8]) ? (arr_4 [14]) : (arr_8 [i_2 + 1] [i_0 + 1]))))))));
                    arr_10 [i_0] [14] [i_2] = ((arr_6 [17] [17] [i_1 + 3] [i_1 + 1]) ? (-39 | -989525981) : ((var_0 ? 178845783 : (((var_15 % (arr_6 [i_0] [10] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
