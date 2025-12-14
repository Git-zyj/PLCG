/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = ((((!(arr_0 [i_0 + 3] [i_3 + 1]))) ? var_4 : (((var_0 < -19) ? (arr_0 [i_0 + 3] [i_3 - 2]) : ((max((arr_8 [1] [16] [i_2] [i_2]), var_11)))))));
                            var_16 = (((min((arr_4 [i_0 - 1] [i_3 + 1]), (arr_4 [i_0 + 1] [i_3 - 2])))) ? (min((((-19 ? var_6 : var_8))), (arr_3 [i_1]))) : (arr_4 [i_1] [i_3]));
                            arr_12 [i_0] [i_1] [i_3] [i_3] = (((((~(arr_5 [i_3] [i_1])))) ? var_8 : (!var_9)));
                            var_17 = ((((!(arr_4 [i_0 + 3] [i_3 + 1]))) || (!var_10)));
                        }
                    }
                }
                var_18 = (((((5563709408896350397 ? -var_9 : (arr_8 [8] [i_1] [i_1] [i_0 + 3])))) ? var_11 : ((2907015694 ? ((~(arr_5 [i_0] [i_0]))) : ((min((arr_1 [12]), var_6)))))));
                arr_13 [i_0] [i_0] [i_1] = ((((((!(arr_3 [i_0 + 3]))))) * (max((arr_3 [i_0 + 1]), (arr_3 [i_0 - 1])))));

                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    var_19 += ((((min(var_11, var_12))) ? 1 : (arr_2 [i_0])));
                    var_20 = ((((((min(-3, 7))) ? (((-27 * (arr_2 [i_4])))) : (min(var_6, var_13))))) ? (min(var_9, -70)) : var_12);
                    arr_18 [i_0] [i_0] = ((((((arr_0 [i_4 + 1] [i_0 + 1]) ? ((258948235 ? 2080694454 : var_12)) : ((var_6 ? var_5 : var_12))))) ? (arr_10 [i_4] [i_4]) : ((var_14 ? (max((arr_6 [i_4]), (arr_17 [i_0] [16]))) : ((max(var_11, var_3)))))));
                }
            }
        }
    }
    var_21 = (((min((min(23, var_7)), var_14)) | (((0 & var_1) ? (~var_14) : (max(var_12, 3103740630))))));

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    var_22 = ((~(~var_11)));
                    var_23 = ((+((+(max((arr_15 [i_5] [i_5]), var_1))))));
                }
            }
        }
        var_24 = (((((min((arr_15 [i_5] [i_5]), var_10)) + (((arr_2 [i_5]) ? -22 : var_14)))) * (!var_9)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_25 = (~-7107470341711132421);
                                var_26 = (max(var_26, (((!((var_10 < (arr_9 [i_11 + 1]))))))));
                            }
                        }
                    }
                    var_27 = (((((arr_7 [i_9] [i_8] [i_5]) ? (!var_13) : (var_0 | var_6))) / (((6520418364193309480 ? var_12 : (arr_30 [i_5] [i_5] [i_5] [i_9]))))));
                    arr_37 [i_5] = var_13;
                    var_28 = (((((var_13 << 0) >> ((((1 ? var_3 : var_13)) - 46)))) >> ((((~(arr_29 [i_9]))) - 5068867154058308698))));
                }
            }
        }
    }
    var_29 = ((var_2 ? var_6 : var_14));
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                {
                    var_30 = (((((arr_9 [i_13 + 1]) + (arr_9 [i_13 + 1]))) + ((max((arr_9 [i_13 + 1]), (arr_9 [i_13 + 1]))))));
                    var_31 += ((((((arr_45 [8] [i_14] [i_13 + 1] [i_13 + 1]) == (((var_10 && (arr_0 [i_12] [i_12]))))))) * (((var_13 != (arr_2 [i_14]))))));
                    var_32 = (min(var_32, ((((arr_5 [i_13 + 1] [i_13 + 1]) ? (arr_5 [i_13 + 1] [i_13 + 1]) : ((-(arr_5 [i_13 + 1] [i_13 + 1]))))))));

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_33 = (((arr_10 [i_13] [i_14]) ? (arr_10 [i_13] [i_13]) : (arr_10 [i_13] [i_13])));
                        var_34 += -28;
                    }
                }
            }
        }
    }
    #pragma endscop
}
