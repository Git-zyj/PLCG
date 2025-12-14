/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min((max(-8536, (var_6 ^ -31619))), var_11)))));
    var_15 = var_8;
    var_16 = (((var_0 <= 161) && var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_17 -= ((((min((var_2 & var_7), ((var_5 << (((arr_1 [8]) - 8244792350815549822))))))) ? (max((!var_10), ((8907124069832879739 ? (arr_2 [8]) : 246)))) : ((min((arr_0 [1] [i_1 + 3]), (arr_0 [18] [i_1 + 3]))))));
                arr_5 [i_0] = ((((((~(arr_1 [i_0]))) ^ (arr_4 [i_0] [i_0]))) & ((min((~var_5), var_3)))));
                var_18 ^= (((((min(var_13, var_5)))) << (((((((163 ? (arr_0 [14] [i_1]) : (arr_1 [18])))) ? ((var_7 - (arr_3 [i_0] [i_0] [10]))) : ((-1 ? 31 : 255)))) - 183))));
                var_19 *= ((-945111715 ? (((arr_4 [i_1 - 2] [12]) ? (arr_4 [i_1 - 2] [16]) : (arr_4 [i_1 - 2] [18]))) : (arr_4 [i_1 - 2] [1])));
            }
        }
    }
    #pragma endscop
}
