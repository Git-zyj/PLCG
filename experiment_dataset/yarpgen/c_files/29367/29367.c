/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [2] &= (((5167 * (arr_0 [10] [i_1]))));
                arr_5 [i_0] [i_0] = ((((min(5167, (arr_3 [i_0])))) ? (57409 * 1) : (min(8388607, (arr_3 [i_0])))));
                var_10 = (max(var_10, ((((((1 * 15185232413542441066) ? (((15905 ? (arr_1 [2] [2]) : var_1))) : 3384319337227819270)) * (((((var_0 ? 5167 : 1))) * (min(3666881374, 3261511660167110570)))))))));
            }
        }
    }
    var_11 = (max(var_11, 11443));
    var_12 &= (var_2 / var_9);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_13 = (max(var_13, -3635391002));

                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        arr_17 [i_5 + 4] [i_4] [i_2] = (((((((arr_8 [i_5] [i_4] [i_2]) ? 1 : var_9))) ? (max(var_3, var_7)) : (arr_7 [i_5 + 4] [i_5 - 2]))));
                        arr_18 [i_2] [i_2] [i_3] [i_4] [10] [8] &= ((max((max((-127 - 1), 2523065320219088423)), (arr_16 [8] [i_4] [8] [i_3] [8] [2]))));
                        arr_19 [i_3] [i_4] [5] [i_3] = var_0;
                        var_14 = (max(var_14, 1));

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            arr_22 [i_2] [i_2] [i_4] [i_2] [i_2] = (-(((arr_13 [i_4] [i_4]) * -65)));
                            arr_23 [i_2] [i_4] [i_2] [i_2] [i_2] = (((3191 * -3191) ? 0 : (arr_21 [i_6] [i_6] [i_4] [i_6 - 1] [i_5 + 4])));
                            arr_24 [i_6 + 1] [i_6 + 1] [i_4] [i_4] [i_3] [i_2] = 5168;
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_4] [i_2] = (arr_21 [i_5 + 1] [i_5] [i_4] [i_5 + 2] [i_5]);
                        }
                    }
                    arr_26 [8] [i_3] [i_3] [i_3] &= (min((arr_15 [i_4] [i_3] [i_3] [i_2]), (max((((arr_6 [i_2]) * -60)), 1))));
                    arr_27 [i_2] [i_2] [i_4] [i_2] = (arr_11 [i_4] [i_4] [i_2]);
                    var_15 = ((((((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) + 42215)) * ((0 ? 2590256893 : (arr_20 [i_4]))))) * 1);
                }
            }
        }
    }
    #pragma endscop
}
