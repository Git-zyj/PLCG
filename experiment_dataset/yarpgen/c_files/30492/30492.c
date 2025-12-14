/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0 + 1]);
        var_18 = (((((((((arr_0 [i_0] [8]) + (arr_1 [i_0])))) ? 1141280994 : (847511263507676418 / 3587246428862302965)))) ? ((((arr_0 [i_0] [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (((arr_0 [i_0 + 2] [i_0 + 2]) ? var_15 : -2145530314163397782))))) : (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 - 1]) : ((var_1 + (arr_0 [i_0] [i_0 + 1])))))));
        var_19 *= (!((((arr_0 [1] [i_0 - 1]) ? (((arr_0 [i_0] [i_0]) ? var_11 : (arr_0 [i_0 - 1] [13]))) : (arr_0 [i_0 - 1] [18])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_20 |= ((arr_2 [i_1 + 2] [i_1 + 1]) ? (arr_2 [i_1 - 1] [i_1 + 1]) : (arr_2 [i_1 - 1] [i_1 - 1]));
        arr_5 [i_1] = arr_3 [i_1] [i_1 - 1];
    }
    var_21 = (min(var_7, ((var_5 ? var_10 : -var_7))));
    #pragma endscop
}
