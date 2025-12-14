/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_3 - -3865) || var_1))) - 32768));
    var_18 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -var_10;
        var_19 = var_12;
        var_20 = ((!(arr_0 [i_0])));
        arr_3 [i_0] = ((!(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (!32768);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_1] = ((arr_6 [i_1] [3]) / (((var_11 ? var_9 : (arr_1 [i_2 + 1])))));
                        var_22 = arr_9 [i_4] [i_1];
                        var_23 = ((var_12 ? (((arr_1 [13]) / var_15)) : ((((arr_9 [i_1] [i_1]) ? (arr_9 [i_2 + 1] [i_4]) : (arr_9 [i_3] [i_4]))))));
                    }
                    var_24 = ((!((min((arr_13 [i_1] [i_2] [i_3] [i_1]), ((32761 ? var_9 : (arr_9 [i_2] [3]))))))));
                    var_25 = ((~(32782 - 7)));
                    var_26 = var_16;
                }
            }
        }
        var_27 = -16965;
    }
    #pragma endscop
}
