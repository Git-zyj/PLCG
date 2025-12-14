/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] = (1978906954 ? var_7 : -938352159);
                var_11 = (min((((((2 ? var_7 : (arr_2 [i_0 - 2] [i_0])))) ? ((var_2 ? (arr_4 [i_0] [i_0] [i_0]) : var_6)) : (arr_6 [11] [i_1] [i_0]))), (-1148333026984397776 + -2102717480)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_12 = var_2;
        var_13 = (max((arr_3 [i_2] [i_2] [i_2]), ((25568 ? (arr_1 [i_2]) : (arr_3 [i_2] [i_2] [i_2])))));
        arr_11 [i_2] [i_2] = (arr_0 [i_2]);
    }
    #pragma endscop
}
