/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_6 ? var_1 : 1541066961898496657)) | -var_0)) | 951405295));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 *= ((~(((((arr_1 [i_0]) ? var_2 : (arr_2 [8]))) ^ ((((arr_0 [i_0]) <= 810245800)))))));
        var_18 = ((var_11 - (!var_13)));
        var_19 = ((2624511711 ? (((!(arr_2 [i_0])))) : (max(((var_2 ? var_13 : 1232302638)), var_4))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_20 = (min(var_20, ((((1073709056 ? var_1 : 3484721483))))));
            var_21 = (arr_4 [i_1 - 1] [i_1 - 1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_2] = (~(((arr_7 [5]) ? -736530502640523527 : -1541066961898496657)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_22 &= ((-(810245800 <= 2764938706954601404)));
                        var_23 &= (arr_11 [i_3] [18]);
                    }
                }
            }
            var_24 = (max(var_24, (!-11534)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_24 [i_5] [22] [i_0] [i_7] [i_0] [i_5] = ((-(arr_18 [14] [i_7])));
                        var_25 = (((-32767 - 1) ? 187 : -97));
                        var_26 = (var_9 + (arr_22 [i_0] [5] [i_6] [19] [i_7]));
                        var_27 = (((arr_14 [i_0]) ? ((var_2 ? var_10 : (arr_0 [i_0]))) : var_0));
                    }
                }
            }
            arr_25 [i_5] [i_5] = var_3;
            var_28 = (((9223372036854775807 / var_3) < (arr_9 [i_0] [4] [i_0] [8])));
        }
        var_29 = (max(var_29, ((min((arr_15 [i_0] [i_0] [i_0]), (arr_17 [i_0] [i_0] [i_0]))))));
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_30 |= ((var_14 ? (!var_2) : ((-(arr_9 [i_8 + 2] [i_8 - 1] [i_8 + 3] [i_8 + 3])))));
            arr_32 [i_9] [i_8] [i_9] &= (((arr_23 [i_9] [20] [i_8 + 1] [20] [i_8 + 1]) ? ((-(((arr_30 [i_8] [i_9]) ^ var_13)))) : var_0));
        }
        arr_33 [i_8 + 1] [i_8] = (max((((((((arr_19 [0] [i_8] [16] [i_8 - 1]) ? var_6 : (arr_29 [i_8])))) ? (((arr_11 [i_8] [i_8]) ? 32767 : 120)) : ((var_10 ? 19486 : var_11))))), (((var_12 >= var_9) ? var_10 : (max((arr_16 [3] [1] [3]), var_14))))));
        var_31 &= ((max((max((arr_3 [2] [2] [2]), 192)), 1)));
    }
    #pragma endscop
}
