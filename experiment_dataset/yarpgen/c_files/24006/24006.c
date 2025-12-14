/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_19 = ((12711 ? (((-32767 - 1) ? 5635314382622763450 : 15)) : ((var_6 ? (arr_0 [i_1] [i_1]) : (-32767 - 1)))));
            var_20 = (arr_0 [i_0] [i_1 - 1]);
            arr_6 [i_0] = ((767488033850290815 ? (-32767 - 1) : -15391));
        }
        var_21 = ((var_14 ? (arr_4 [i_0]) : (-32767 - 1)));
        var_22 = (max(var_22, (arr_5 [10])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] = (arr_9 [i_2]);
        var_23 -= (arr_2 [i_2]);
        var_24 = (((!9760) ? (arr_4 [i_2]) : (arr_8 [i_2] [i_2])));
    }
    var_25 = var_4;
    var_26 = (max(var_26, (((((((1 ? 2147483646 : 15)) ? var_14 : ((126 ? 65510 : var_13)))))))));
    #pragma endscop
}
