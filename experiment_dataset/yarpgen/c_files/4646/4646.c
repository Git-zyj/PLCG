/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);
        arr_5 [i_0] = ((((((arr_3 [i_0]) ? (-127 - 1) : -560004119927418869))) ? (((-127 - 1) ? (arr_2 [i_0]) : -7191732499916588038)) : (2245330273 == -127)));
        arr_6 [i_0] [i_0] = (~24576);
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_11 = (arr_8 [i_1] [i_1]);
        arr_10 [i_1] = (~65535);
        arr_11 [14] = arr_8 [i_1] [i_1];
        arr_12 [i_1] = var_7;
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_15 [0] [i_2] = 1421454666;
        arr_16 [13] = (max((((~(arr_14 [i_2 + 1])))), var_2));
    }
    var_12 = ((max(-123, 8858833732076140310)));
    var_13 = var_9;
    #pragma endscop
}
