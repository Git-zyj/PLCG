/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = var_7;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_3] = (!-var_9);
                                var_14 ^= (max(((((arr_11 [i_0] [i_2 - 2] [i_2] [i_2]) ? (arr_12 [i_0] [i_2 + 1] [i_4] [i_0] [i_4] [i_4]) : (arr_11 [i_1] [i_2 - 2] [18] [i_0])))), ((-(arr_7 [i_0] [i_2 + 2] [i_2 + 2] [i_4])))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1] = (min(((83 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))), ((~(~var_10)))));
            }
        }
    }
    var_15 = 3705765943;

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            var_16 = ((~((var_9 ? (arr_11 [i_6 + 1] [i_6 + 2] [i_6 - 1] [20]) : var_1))));
            arr_21 [i_5] [i_6 - 1] [i_5] = (max((min((arr_7 [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 - 1]), var_0)), (((~((-(arr_12 [i_5] [i_5] [i_5] [12] [12] [i_5]))))))));
            var_17 ^= (arr_15 [i_6 + 2] [i_6]);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_31 [i_8] [i_8] [i_7] [i_6] [i_8] = var_8;
                            var_18 = (max((arr_1 [i_5] [i_5]), var_11));
                            var_19 &= -var_12;
                            arr_32 [i_6] [i_9] [i_8] [i_8] [1] [i_6] [i_5] = var_3;
                        }
                    }
                }
            }
        }
        var_20 = 11714;
        var_21 = -var_9;
        var_22 -= ((((max(var_6, var_10))) ? (((-(!var_12)))) : (min(var_9, var_12))));
        arr_33 [i_5] = (max(((min(((~(arr_5 [i_5]))), 53830))), (max(var_8, (arr_16 [i_5] [i_5])))));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_36 [i_10] = var_8;
        arr_37 [i_10] = -var_8;
        var_23 = (min(var_23, ((((((var_6 ? 1 : -67))) ? (arr_35 [i_10]) : (arr_35 [i_10]))))));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_24 = (((var_4 || 965789701) ? 1065353216 : (((~(arr_6 [i_11] [i_11] [i_11] [i_11]))))));
        arr_40 [i_11] = (max(((var_1 ? var_3 : (arr_7 [i_11] [i_11] [i_11] [i_11]))), ((min((arr_18 [i_11] [i_11]), (arr_18 [i_11] [i_11]))))));
    }
    #pragma endscop
}
