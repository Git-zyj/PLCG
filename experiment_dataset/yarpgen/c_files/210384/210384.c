/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [18] = (max((max((max(15445549192763524633, var_4)), var_6)), ((var_7 / (arr_1 [19])))));
        var_11 = (min(var_11, (~var_3)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = ((-70 >= ((((var_5 ? 65535 : 0))))));
                    var_13 = ((max((max(0, 1)), 96)));
                    var_14 = (max(var_14, (((((~(arr_3 [i_0] [2] [i_2]))) & 1)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_15 = (min(var_15, ((((arr_9 [i_3] [10]) & ((var_4 ? (~12) : ((max((arr_5 [i_3] [i_3]), var_5))))))))));
        arr_10 [8] = var_6;
        var_16 = (min(var_16, ((((((+(((arr_5 [i_3] [i_3]) ? 63 : (arr_5 [i_3] [i_3])))))) ? ((min((max((arr_5 [i_3] [i_3]), 10449)), var_3))) : 62)))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_15 [8] = ((~((var_9 ? var_8 : (arr_14 [i_4])))));
        arr_16 [21] = (((arr_14 [i_4]) % (arr_4 [19] [i_4])));
    }

    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                {
                    var_17 = (min(var_17, (((~(((!((((arr_22 [i_5] [i_5] [6]) - var_1)))))))))));
                    var_18 *= ((!(((((var_0 ? 102 : 0)) - (((!(arr_11 [i_7] [16])))))))));
                }
            }
        }
        var_19 = (max((((~var_6) ? ((min(var_3, 1))) : (1 != 831578233))), (~var_10)));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_20 = (arr_12 [i_8]);
        arr_29 [5] = (max(8191, (((~-110) ? (~var_6) : (arr_25 [i_8])))));
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {

        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            arr_37 [i_10] [i_9] = 0;
            var_21 = (arr_23 [i_10 + 1] [i_10 - 1] [i_10 - 1]);
            var_22 = (max(var_22, ((min(((max(-97, var_0))), ((var_4 ? ((((!(arr_36 [i_9]))))) : 4525462025532631845)))))));
            var_23 = (max(((max((arr_4 [i_10] [16]), var_7))), (~var_8)));
        }
        for (int i_11 = 3; i_11 < 7;i_11 += 1)
        {
            arr_40 [i_11] = 3824723097479954504;
            var_24 = (min(var_24, (((-(((arr_32 [i_9]) | ((~(arr_39 [0] [i_9] [i_9]))))))))));
            arr_41 [i_11] = (max((((var_6 && (arr_23 [i_9] [i_11 - 1] [4])))), (~var_10)));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                {
                    arr_48 [i_12] [i_12] = 12265;
                    arr_49 [i_9] [i_12] [i_9] [i_9] &= ((((((((562949953421312 ? var_10 : var_4))) ? (arr_3 [i_13] [i_9] [i_9]) : (arr_24 [i_9] [i_9] [i_9] [i_9])))) ? var_8 : (((((arr_28 [i_13]) >= (arr_28 [i_9])))))));
                    /* LoopNest 2 */
                    for (int i_14 = 4; i_14 < 8;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                arr_56 [2] [i_12] [i_12] [i_14] [i_15] = max((((((((arr_44 [i_12] [2] [1] [6]) && var_10)))) & var_7)), (arr_21 [i_9] [i_12] [5]));
                                arr_57 [i_9] [5] [i_13] [i_12] [i_15] = var_6;
                                arr_58 [i_12] [i_13] = (min((max(81, (min((arr_20 [i_12] [0] [i_12]), var_1)))), (((((var_10 ? 3346407533 : 401928968)) != (arr_47 [i_12] [8] [i_14 + 1] [i_14]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max((((!236) ? var_4 : 64615891)), 1));
    var_26 = (min(var_26, var_9));
    #pragma endscop
}
