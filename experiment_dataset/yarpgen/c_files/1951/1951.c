/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_18 = (((-6 + 2147483647) << (((-647103697 + 647103718) - 21))));
        var_19 = arr_1 [i_0];
        var_20 *= var_12;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = (((arr_2 [i_1]) + 0));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_22 = ((-(1 && 16)));
                        var_23 = (((((((arr_6 [i_1] [i_2] [16]) ? (arr_9 [13] [i_2 - 1] [8] [i_3 + 2] [i_3] [i_3 + 2]) : var_4)))) ? (arr_0 [i_1]) : ((1 ? (min(var_3, 9223372036854775807)) : (min((arr_8 [i_1] [i_1] [1] [i_4]), 23))))));
                    }
                }
            }
        }
        arr_11 [i_1] = (min((((max(3344341564376821962, 1)))), (min((arr_2 [1]), var_15))));
        var_24 = ((arr_10 [12]) ? (-127 - 1) : ((19 ? 4424 : 1)));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        arr_16 [i_5] [20] = ((((8720576765102281412 ? 1 : (arr_15 [i_5])))) ? 16 : ((1 ? ((~(arr_1 [21]))) : var_14)));
        var_25 = (max(var_25, ((min(var_0, (arr_0 [i_5 + 1]))))));
        var_26 = 16;
    }
    var_27 = var_4;
    #pragma endscop
}
