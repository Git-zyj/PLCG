/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 += ((~(arr_2 [i_0 + 2])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((var_10 - (arr_5 [i_0 + 2])));
            arr_7 [i_0] = ((-(arr_0 [i_0])));
        }
        var_16 = (min(var_16, (((var_0 ? (arr_5 [i_0 + 3]) : var_0)))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_17 += (((((arr_8 [i_2]) - ((-(arr_8 [5])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_18 = var_14;
                    arr_17 [i_4] [i_3] [6] [i_2] = (max((((!(arr_16 [i_4])))), (arr_16 [i_2])));
                }
            }
        }
        var_19 = ((((((arr_10 [i_2] [i_2]) || var_13))) >> (var_11 - 1283976435)));
    }
    var_20 = (min(var_3, 12963369560766007196));
    var_21 = var_11;
    #pragma endscop
}
