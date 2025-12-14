/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_3));
    var_14 = (((120 ^ var_4) >> var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_15 += (min(((-((max((arr_3 [3] [9] [9]), var_2))))), ((((((-519917373803901793 ? -6875485736260515007 : 45189))) || var_10)))));
                var_16 = (min(var_16, (((0 / var_6) ? (max((arr_3 [i_1 - 2] [i_1 + 1] [i_1 + 1]), 18446744073709551615)) : (((((((arr_2 [12] [i_1]) + var_6))) ? -9328 : ((max(var_11, 0))))))))));
                var_17 = var_0;
                var_18 = (min((arr_4 [i_0]), 7041000539966792176));
            }
        }
    }
    var_19 = (min(var_19, 4));
    var_20 = var_4;
    #pragma endscop
}
