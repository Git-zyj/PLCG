/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((!((min(var_7, (max(17210, -17218)))))));
        arr_3 [i_0] = ((22526 ? (-32767 - 1) : -29040));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 = (min(var_15, ((((((var_3 ? var_1 : ((var_8 ? -16022 : 17306))))) ? ((var_10 ? ((17229 ? var_11 : var_4)) : var_12)) : var_10)))));
        arr_8 [i_1] [i_1] = min(-17208, 17226);
        var_16 = ((-32762 ? ((((((arr_0 [i_1] [i_1]) ? -9195 : var_7))) ? 17207 : (-32767 - 1))) : -20872));
        arr_9 [5] [i_1] = ((-((((14137 ? 669 : -23470))))));
        var_17 = ((17199 / (17207 * 24698)));
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_12 [12] [i_2] = ((-17229 ? (-8 - -32764) : (min((((arr_10 [i_2]) ? 14152 : (arr_10 [12]))), ((max(4596, 32759)))))));
        arr_13 [i_2] = (14889 >= 10742);
    }
    var_18 -= (max(((-(var_6 / -17200))), (max(((var_9 ? -17930 : 17226)), 5612))));
    var_19 = ((((max(var_0, var_9))) ? ((var_9 ? var_7 : 21598)) : ((max(var_3, 16911)))));
    #pragma endscop
}
