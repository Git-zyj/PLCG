/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((!(arr_0 [i_0]))) ? ((var_3 ? (arr_0 [i_0]) : 1)) : (((((arr_0 [i_0]) <= 32759))))));
        var_14 = (((((-8320130201873902469 <= 80) >= var_1))) >= 1003622155);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = var_10;
        var_15 = var_12;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [8] &= var_12;

        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    {
                        arr_15 [i_2] [i_5 - 1] = -8320130201873902473;
                        var_16 = ((var_9 ? 8320130201873902463 : (arr_7 [i_2] [i_2])));
                        var_17 = ((15 < (arr_4 [i_4 + 1])));
                        arr_16 [2] [i_2] = var_7;
                        var_18 = 32761;
                    }
                }
            }
            arr_17 [i_2] [i_2] [i_2] = (15 >> 12);
        }
        arr_18 [i_2] = ((((1 ? var_11 : var_3)) >> (((arr_7 [i_2] [i_2]) + 79))));
        var_19 = (!-8195040012023393083);
    }
    #pragma endscop
}
