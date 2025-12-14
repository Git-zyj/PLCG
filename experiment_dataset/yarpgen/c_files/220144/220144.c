/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((max(1, var_9)), var_14));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0] [i_0] = ((-1 ? 0 : (arr_1 [i_0] [i_0])));
        var_16 = (((((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? -0 : ((min(191, 1937613958))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (min((min((arr_5 [i_1 + 1] [i_1]), (arr_5 [i_1 - 1] [i_1]))), (min((arr_5 [i_1 - 1] [i_1]), var_3))));
        arr_9 [i_1] [i_1] = 1;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_17 += -74;
        arr_13 [i_2] = (+(((((0 ? (arr_6 [i_2] [i_2]) : (arr_5 [i_2] [i_2])))) ? (arr_1 [i_2] [i_2]) : (0 & 1))));
        var_18 = (((arr_0 [i_2] [i_2]) ? ((min((((arr_0 [i_2] [i_2]) ? var_4 : var_10)), (~var_3)))) : (min((arr_1 [i_2] [i_2]), var_6))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = 2147483647;
        arr_17 [i_3] = ((min((arr_11 [i_3] [i_3]), ((max(-116, 1))))));
        arr_18 [i_3] = 1900077766;
    }
    #pragma endscop
}
