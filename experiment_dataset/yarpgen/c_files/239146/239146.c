/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (107 ? 91 : 3096792720653149112);
        var_16 = (max(var_16, (((~(arr_1 [i_0]))))));
        var_17 ^= (arr_2 [10] [i_0]);
        arr_3 [i_0] = ((~(arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_18 *= arr_12 [i_2];
                        arr_14 [i_2] [i_0] [i_2] [i_1] = ((~(arr_4 [i_0])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_5] [i_4] [i_6] = min(((+(((arr_22 [i_4] [i_5] [i_6] [i_6]) + (arr_16 [i_5]))))), (((!(((128 - (arr_22 [1] [i_5] [4] [4]))))))));
                    arr_24 [7] [i_5] [i_4] [7] = (arr_15 [i_4]);
                    arr_25 [i_4] [i_5] [i_4] = (arr_15 [9]);
                }
            }
        }
        arr_26 [i_4] = (max((arr_21 [i_4] [i_4] [i_4] [i_4]), ((((arr_15 [i_4]) % var_2)))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_38 [3] [i_8] [i_7] [i_7] [i_11] = (arr_32 [i_7] [i_8] [i_9] [4]);
                                var_19 = ((((((~(arr_15 [i_7]))))) ? 3096792720653149137 : ((max((arr_33 [i_7] [1] [i_9]), -var_10)))));
                            }
                        }
                    }
                    var_20 = (min(var_20, (arr_2 [2] [i_9])));
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_21 = (~var_1);

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        arr_46 [i_7] = -3096792720653149112;
                        arr_47 [i_7] = (((arr_36 [i_7]) && 261632));
                        arr_48 [i_7] [i_8] [i_13] [i_7] = ((var_5 + (arr_39 [i_7] [i_8] [i_13])));
                        var_22 = ((arr_45 [i_7] [i_7] [i_8] [i_12] [3]) / (arr_21 [i_7] [i_8] [i_12] [i_7]));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        arr_52 [i_7] = (~35389);
                        arr_53 [i_7] [i_8] [i_8] [i_7] [6] = (((arr_39 [i_7] [i_8] [i_12]) - (arr_39 [i_8] [i_12] [i_14])));
                    }
                    var_23 = var_3;
                    arr_54 [i_7] [i_8] [i_7] [i_12] = var_5;
                }
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 10;i_17 += 1)
                        {
                            {
                                var_24 = arr_7 [i_7];
                                arr_61 [i_7] [i_16] [i_17] = ((~(((arr_59 [i_17] [i_8] [i_15] [i_16] [i_17]) - ((15673944032221400799 ? (arr_59 [4] [2] [i_15] [i_16] [0]) : (arr_43 [2] [i_8] [i_15] [i_16] [i_17])))))));
                            }
                        }
                    }
                    arr_62 [i_7] = (max((max((arr_12 [i_7]), (!165))), ((((arr_55 [i_7] [i_8]) ? -107 : (5 * var_1))))));
                }
                var_25 *= (max((arr_1 [i_7]), ((((var_4 - (arr_15 [i_7])))))));
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 10;i_20 += 1)
                        {
                            {
                                var_26 = (max(var_26, ((max((arr_42 [i_7] [i_8] [i_19] [i_19]), (((((~(arr_45 [i_7] [i_8] [i_7] [i_19] [i_20])))) - (((arr_29 [i_19]) ? (arr_50 [2] [i_8] [i_7] [i_19] [i_8]) : (arr_36 [i_8]))))))))));
                                var_27 = (((((!(arr_40 [i_8] [3] [8]))) ? var_3 : 30147)));
                                arr_71 [i_7] [i_7] [i_18] [i_7] [i_7] = -3096792720653149131;
                                var_28 = var_12;
                                var_29 = (min(var_29, (((!(((-(arr_45 [i_7] [i_8] [i_18] [i_19] [i_20])))))))));
                            }
                        }
                    }
                }
                var_30 = max((arr_34 [i_7]), (arr_63 [i_7] [i_8]));
            }
        }
    }
    #pragma endscop
}
