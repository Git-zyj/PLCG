/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1 + 2] [i_2 + 1] = ((-(min((arr_4 [i_1 - 1] [i_1 + 2]), (min((arr_4 [5] [i_3]), (arr_5 [i_0])))))));
                        var_18 = (max(var_18, (max(((((((~(arr_8 [i_0 - 1] [i_2] [i_2] [i_0 - 1] [8])))) ? (((-72 && (arr_2 [i_3])))) : var_15))), var_11))));
                        arr_10 [8] [i_1 - 1] [i_0] [i_0] [i_0] = ((max((arr_3 [i_2 - 2] [i_0]), ((min(619276925, -775043320))))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_19 = (max(var_19, ((max(var_7, (arr_8 [i_0] [i_2] [i_1 + 1] [i_0] [i_4]))))));
                        var_20 = 45717;
                    }
                    var_21 *= 0;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_1 + 1] [i_0] [i_1] = ((((max((((5921253734794798621 || (arr_6 [i_0] [i_0])))), (arr_1 [i_0])))) ? (arr_8 [i_2 - 2] [i_0] [i_2] [i_2] [i_2 - 2]) : ((((min((arr_18 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_1 [i_0])))) ? (192 ^ var_0) : (arr_1 [i_0])))));
                                var_22 ^= (arr_17 [i_1] [i_2] [i_5 - 1] [i_6]);
                                var_23 = (arr_3 [i_0] [i_0]);
                                var_24 = ((((arr_2 [i_1]) ? 1113456534 : (min((arr_0 [i_0]), (arr_18 [i_0] [i_0] [i_2] [i_5] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = 57;
    var_26 &= (((~var_4) ? ((min(var_9, var_13))) : 127));
    var_27 = var_12;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_28 = ((45717 ? 45717 : (-9223372036854775807 - 1)));
        arr_24 [i_7] [20] = ((39 >= (arr_21 [i_7])));
        arr_25 [i_7] = (((arr_23 [i_7]) ? (arr_23 [i_7]) : (arr_23 [i_7])));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_29 ^= (arr_23 [i_8]);
        var_30 = (max(var_30, (((((arr_22 [i_8]) ? 112 : (arr_22 [i_8])))))));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_42 [i_9] [i_9] [6] [i_11] [i_12] [i_12] [i_12] = (((((9223372036854775807 ? -var_3 : var_8))) ? ((-(arr_21 [i_12]))) : (arr_4 [i_9] [i_13])));
                            var_31 = -21477;
                        }
                        var_32 = ((((max(var_10, (arr_5 [i_12])))) ? (((((45717 ? (arr_33 [i_12]) : 63))) ? (-32767 - 1) : var_11)) : (((-16384 ? -22574 : (((arr_5 [i_12]) ? 125 : 1)))))));
                    }
                }
            }
        }
        var_33 = ((!((max((arr_13 [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        var_34 = (max(var_34, 34418));
        var_35 = ((((arr_41 [i_9] [i_9] [i_9] [4]) ? (arr_28 [i_9]) : (max((arr_1 [i_9]), (arr_37 [i_9] [9] [i_9] [i_9]))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        var_36 = (((arr_43 [i_14] [i_14]) ? (arr_43 [i_14] [1]) : (arr_43 [i_14] [i_14])));
        arr_47 [i_14] [i_14] = var_12;
    }
    #pragma endscop
}
