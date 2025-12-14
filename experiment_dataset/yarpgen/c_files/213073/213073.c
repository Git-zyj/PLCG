/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 ? 194 : ((-198 ? 73 : 115))));
    var_20 = (min(var_20, var_16));
    var_21 -= -var_14;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] [i_0] [i_1] = (((arr_0 [i_1 + 1]) ? 194 : 151));
            arr_6 [6] [6] |= (arr_3 [i_1 + 2]);
        }
        var_22 = ((77 ? 119 : 104));
        var_23 = 32;
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_24 = (min(var_24, ((((arr_4 [i_2 - 3]) ? (arr_4 [i_2 - 4]) : var_3)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_18 [i_4] [i_3] [i_4] [8] = arr_4 [i_2 - 4];
                        var_25 = (((arr_2 [i_2 - 3] [i_2 - 4]) ? (arr_7 [i_5]) : 88));
                        var_26 = 194;
                        arr_19 [i_4] [i_4] [9] = ((61 ? 166 : 237));
                        var_27 |= (((arr_13 [i_4] [i_4 - 1] [i_2]) ? var_2 : (arr_14 [i_3] [i_4] [i_4] [i_4 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
