/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = -var_1;
            var_13 = (57891 | 65535);
        }

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_0] [i_2] = (((var_10 + (arr_8 [i_0]))));
            var_14 += var_9;
        }
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_15 = (max(var_15, (arr_6 [i_3] [i_3])));
            arr_14 [i_0] [i_0] [i_3] = ((var_9 ? (arr_13 [i_0]) : var_4));
            arr_15 [i_0] [i_3] = ((arr_12 [i_3 - 1] [i_3]) / var_7);
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    {
                        var_16 = ((+(((arr_17 [i_6]) ? (arr_2 [i_4] [i_4]) : var_2))));
                        var_17 = var_6;
                    }
                }
            }
        }
    }
    var_18 = var_6;
    var_19 += ((var_10 ? (var_3 != var_4) : (((max(var_10, var_10))))));
    #pragma endscop
}
