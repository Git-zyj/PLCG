/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_9, var_12));
    var_21 = var_6;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_22 = -1;
        arr_2 [i_0] = ((-7773139340882814400 ? var_11 : (~49322)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = (~26);

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                arr_12 [i_1] [i_2] [i_3] = (((((arr_7 [i_3] [i_1]) > (arr_5 [i_1] [i_2] [i_3]))) ? 250 : (((arr_6 [i_1]) ? (arr_1 [i_3] [i_1]) : var_19))));
                var_23 = (((arr_10 [i_3 + 3] [i_3 + 2] [i_3] [i_3 - 1]) && (arr_9 [i_3] [i_2] [i_1] [i_1])));
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    {
                        var_24 = (arr_9 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 2]);
                        var_25 = var_17;
                        arr_20 [i_1] [i_1] [i_4] [i_5] [i_6] [i_6] = 250;
                    }
                }
            }
        }
    }
    #pragma endscop
}
