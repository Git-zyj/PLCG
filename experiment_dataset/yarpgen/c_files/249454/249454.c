/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_11 = (max(var_11, (!var_7)));
        var_12 += var_10;
        var_13 = (max(-var_10, (((((arr_2 [i_0]) / var_1)) * var_5))));
        var_14 = var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    arr_10 [i_2] = ((var_2 == ((5467 >> (((arr_7 [i_1] [i_2] [i_3]) - 217))))));
                    var_15 = ((arr_0 [2] [i_2]) ? var_0 : 4294967274);
                    var_16 = (max(var_16, var_3));
                    arr_11 [i_2] = ((0 << (var_6 + 6960749121453157237)));
                }
            }
        }
        arr_12 [i_1] [10] = (((!1) & (-127 - 1)));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        var_17 = (((arr_0 [i_1] [i_1]) % (var_6 < 31)));
                        arr_22 [i_4] = var_0;
                    }
                }
            }
        }
    }
    var_18 = (((((max(-107, var_7)) + var_5)) >> (var_6 + 6960749121453157215)));
    var_19 += var_6;
    var_20 = var_6;
    #pragma endscop
}
