/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                var_10 = (((((-12787 || (arr_2 [i_0] [i_0]))) ? (((arr_1 [i_1]) ? -12771 : 2859351701)) : var_8)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_15 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] = (((((var_2 - (arr_3 [i_0]))) - (12808 >= 1435615605))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] = var_0;
                                var_11 = (max((2201578145 | -764971742), var_8));
                            }
                            var_12 = (max(var_12, (((((var_7 ? (((arr_2 [i_2] [18]) ? (arr_0 [i_3 + 1] [i_1]) : var_6)) : 3223)) < (arr_11 [16]))))));
                        }
                    }
                }
                var_13 = (((arr_7 [i_0] [i_0] [i_0]) ^ (max(15, -12782))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_30 [i_5] [i_7] [i_7 + 1] [i_8] = ((((((((-1 ? (arr_13 [i_5] [i_8] [i_7 + 1] [i_8] [i_7]) : 1160869114))) & ((var_8 ? var_2 : (arr_5 [i_8])))))) ? (max((arr_12 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]), (var_8 && var_5))) : ((min((arr_20 [i_7 - 1]), (arr_20 [i_7 - 1]))))));
                        var_14 = (max((max((arr_23 [i_7 + 1]), var_2)), ((max(var_4, ((-6221161296056921093 ? 15 : -125)))))));
                        arr_31 [i_5] [i_6] [i_6] [i_7] [i_8] [i_8] = (((arr_27 [i_5] [i_7] [i_7 - 1] [i_8]) ? (((arr_17 [i_7 + 1] [i_7 + 1]) ? (((arr_26 [i_5] [i_5] [i_5] [i_5]) ? (arr_11 [i_7]) : var_9)) : ((var_9 ? (arr_10 [i_7]) : var_4)))) : (min((min(6885, var_7)), ((max(var_6, var_1)))))));
                        arr_32 [i_5] [i_5] [i_7] [i_5] = -256;
                        var_15 = -9216271275027102531;
                    }
                }
            }
        }
        var_16 = (min((((8 > (arr_14 [i_5] [10] [i_5] [i_5] [i_5] [i_5] [i_5])))), (min((max(146538395, 13)), (~255)))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] [i_9] = (max((min((((-2147483647 - 1) ? var_2 : var_0)), -3242)), ((((((var_4 ? -1348565486 : 9216271275027102531))) ? (((var_3 + 2147483647) >> (((arr_0 [i_9] [i_9]) - 75)))) : var_3)))));
        arr_36 [i_9] = ((!(((var_1 ? (arr_34 [i_9]) : ((-(arr_34 [i_9]))))))));
        var_17 = ((var_0 ? ((var_2 ? -9216271275027102548 : var_4)) : (max((arr_1 [i_9]), var_8))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
    {
        var_18 = (((((246 / ((var_1 ? (arr_0 [i_10] [i_10]) : (arr_17 [i_10] [i_10])))))) ? (max((arr_2 [i_10] [6]), var_0)) : ((max((3222 | 1), ((189671521 ? var_4 : 62322)))))));

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_19 = (((arr_25 [2]) == (((-9223372036854775807 - 1) ? (((var_0 ? (arr_28 [i_10] [i_10] [12] [i_11]) : 164))) : (arr_12 [i_10] [i_11] [i_10] [i_11] [i_10] [i_10] [i_10])))));
            var_20 = (arr_7 [i_10] [i_11] [i_11]);
        }
        var_21 = ((((((max(var_6, (arr_39 [i_10] [i_10])))) ? ((((arr_8 [i_10] [i_10]) | var_6))) : (arr_1 [i_10]))) > (((((arr_24 [i_10] [i_10] [i_10]) < var_4))))));
    }
    #pragma endscop
}
