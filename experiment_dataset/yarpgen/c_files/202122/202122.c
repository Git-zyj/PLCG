/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 22;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((122 | (arr_1 [i_0] [i_0]))))));
        var_17 = ((-((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_18 = ((24 | ((max(var_0, 120)))));
        arr_3 [i_0] = (((var_2 - var_10) + (var_13 && 10800)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((arr_5 [i_1] [i_1]) ? var_12 : (arr_5 [i_1] [i_1])));
        arr_8 [i_1] = var_14;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_19 = arr_14 [i_1];

                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_20 += 27;
                        var_21 = ((((arr_18 [i_1] [i_1] [i_4] [i_4] [i_1] [i_1]) / 24)));
                    }
                    arr_20 [i_2] [i_2] [i_3] [i_4] = (var_10 | var_9);
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_22 = ((var_11 >> (((arr_13 [i_1]) ? 28 : (arr_4 [i_3] [i_2])))));
                    arr_24 [i_2] [i_2] [9] [i_6] = 10;
                }
                var_23 = ((var_4 << (var_2 - 123)));
            }
            arr_25 [i_1] [i_2] [i_2] = 0;
        }
    }
    #pragma endscop
}
