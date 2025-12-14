/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_19 = ((((var_8 || (arr_0 [i_0] [i_0]))) ? (((arr_0 [i_0] [i_1]) / (arr_0 [i_0] [i_0]))) : ((var_8 ? (arr_0 [8] [i_1]) : var_15))));
            var_20 = (((arr_2 [i_0] [i_0]) ? ((-(arr_2 [8] [i_1]))) : ((((arr_3 [i_0]) ? 14486 : var_16)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_21 = (14487 && 51048);
            var_22 = (((((0 ? (arr_3 [i_2]) : 51050))) ? (arr_3 [i_0]) : (arr_3 [5])));
        }

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_23 = (max(var_23, var_16));
            var_24 = -51053;
        }
        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            var_25 = (max(var_25, (((((((arr_4 [i_4 - 2] [i_4 + 2]) ? 51053 : ((14486 ? 14487 : 14489))))) ? (arr_0 [i_4 - 2] [i_4 + 1]) : ((-(var_4 || 14492))))))));
            var_26 = var_11;
        }
        var_27 -= min(((47081 ? 51047 : 51056)), 124);
    }
    var_28 -= var_16;
    #pragma endscop
}
