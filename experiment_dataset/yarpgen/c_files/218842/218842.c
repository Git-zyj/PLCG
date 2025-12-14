/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((var_6 + 9223372036854775807) >> (((max(var_10, 8040248471748678567)) - 8040248471748678507))));
    var_15 = (max(var_15, ((max(var_5, (((max(var_3, 8040248471748678567)) / -22094)))))));
    var_16 = var_1;
    var_17 = ((var_10 ? (min(((-1 ? var_0 : -8040248471748678550)), ((max(var_0, var_7))))) : ((max(((-8040248471748678568 ? -1 : var_13)), (var_11 / 63))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 &= ((max((min((arr_4 [i_0] [i_1]), (arr_3 [16] [i_1] [i_2]))), (arr_4 [i_0] [i_1 - 1]))));
                    var_19 = (max(((var_2 ? 224 : ((var_6 ? (arr_5 [13] [13]) : (arr_1 [i_2] [i_1]))))), 224));
                    var_20 &= (max((max((arr_5 [i_1 - 1] [i_2 + 1]), var_12)), (arr_2 [i_1 - 1] [i_1 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
