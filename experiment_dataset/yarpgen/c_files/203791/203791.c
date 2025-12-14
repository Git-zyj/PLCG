/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (max(var_18, (((max(((var_5 ? var_15 : var_0), (!var_8))))))));
    var_19 = var_1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (min(var_20, (((-(max(var_12, var_5)))))));
        var_21 = ((var_11 ? (32767 - 712799641) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_22 &= (32755 != 32767);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_23 = (2000012339 == 32784);
                    var_24 = (~-89);
                    var_25 = ((arr_8 [i_1]) * (!var_11));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_17 [i_4] = (~var_3);
        var_26 |= ((((((arr_16 [16]) ? (arr_14 [i_4] [i_4]) : var_4))) && (((~(arr_16 [0]))))));
    }
    #pragma endscop
}
