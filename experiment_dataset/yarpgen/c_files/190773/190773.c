/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 += (((((-2147483647 - 1) ^ (arr_1 [i_0]))) - ((226 ? 226 : var_12))));
                    var_17 = (((var_9 || 1316540402) ? ((1 << (arr_2 [i_2]))) : -18822));
                }
            }
        }
        var_18 = (min(var_18, (!-186)));
        arr_7 [i_0] = ((62813 ? (arr_6 [6] [7] [i_0] [i_0]) : (arr_3 [i_0] [i_0])));
        var_19 ^= (13507954469350155656 <= 0);
        arr_8 [i_0] = (-9 == 1316540389);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_20 |= 0;
        arr_13 [i_3] = (-127 - 1);
        arr_14 [i_3] [i_3] = (((~36679) - var_4));
    }
    var_21 = ((((((var_10 ? 12829 : var_15)) ? (-127 - 1) : 249))));
    #pragma endscop
}
