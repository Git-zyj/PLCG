/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0 - 4] = var_7;
        arr_3 [i_0] = 1352002280;
        var_11 = (min((((var_3 ? (arr_0 [i_0]) : -1352002298))), (((((min(9368571233989468273, 251))) && ((min(1, 1877633821120402605))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_12 = ((var_7 ? ((97 ? var_0 : 93)) : -var_4));
        var_13 = ((!(18091422324991014026 > 3716123354)));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_14 = (((arr_4 [10]) <= (1640554310 || var_1)));
        arr_8 [i_2] = var_0;
    }
    #pragma endscop
}
