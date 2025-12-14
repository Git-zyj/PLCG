/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_17 = (min(var_17, (arr_3 [i_0])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_18 = var_5;
                var_19 = ((((((arr_2 [i_0]) ? var_6 : (arr_6 [i_0] [i_0] [i_0]))) > ((max((arr_6 [i_2] [i_2] [i_2]), 1))))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_20 = var_13;
                var_21 = (1 >> 1);
                var_22 = ((((((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_6 [i_1 - 1] [i_1 - 1] [2]) : (arr_4 [i_1 - 1] [i_1])))) ? (((max(var_6, var_2)))) : (((((arr_4 [i_3] [i_0]) ? (arr_5 [i_0] [i_1 - 1] [i_3] [i_3]) : (arr_6 [i_0] [i_1] [i_3])))))));
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_23 = 1;
            var_24 = (max(var_24, (((-((min(1, 13435))))))));
            var_25 ^= -13439;
        }
        var_26 = (((1 ? 23005 : 0)));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_27 = (max((((!(arr_1 [i_5])))), (arr_8 [i_5] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_28 = ((((!(!0))) ? (min((arr_11 [i_9] [i_8] [1]), ((16784 ? 1 : -13436)))) : ((~((min((arr_22 [1] [1] [i_7 + 1] [i_7 + 3]), 1)))))));
                                var_29 = var_11;
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_30 = ((((min(1, 5324))) - ((0 ? -17120 : 29073))));
                        var_31 = ((-(((arr_9 [i_6 + 1] [i_6 + 1]) + (arr_11 [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
                        var_32 = (min(var_32, (((((min((arr_18 [i_7 + 3] [i_6 + 1] [i_6 + 1]), var_16))) ^ ((((var_14 && (arr_10 [i_6]))) ? (((arr_20 [i_7] [i_6] [i_5] [i_7]) ? (arr_12 [i_5]) : (arr_23 [4] [i_7] [i_7] [4] [i_6] [i_6 + 1] [i_5]))) : var_5)))))));
                    }
                    var_33 = (min(var_33, (arr_15 [i_5] [i_5])));
                    var_34 = var_8;
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                {
                    arr_37 [i_13] [i_12] [i_13] [i_11] &= (!((((arr_30 [i_11] [i_11]) << (5883 - 5881)))));
                    var_35 = var_0;
                }
            }
        }
        var_36 = ((var_11 + (arr_33 [i_11])));
        var_37 += var_6;
        var_38 = (((((((arr_31 [i_11]) ? var_11 : (arr_30 [i_11] [i_11]))) != (1 * var_0))) ? (((((~(arr_31 [i_11])))) ? (((!(arr_32 [i_11] [i_11] [i_11])))) : var_2)) : var_15));
    }
    var_39 = var_15;
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            {
                var_40 = 1;
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        {
                            var_41 *= var_5;
                            var_42 = (max(((1 >> (arr_31 [i_17 - 1]))), (((min(14442, 1))))));
                        }
                    }
                }
                var_43 = (arr_31 [i_14]);
                var_44 = ((~((((var_3 > 10481) <= (arr_42 [i_14] [i_14]))))));
                var_45 = arr_27 [i_15];
            }
        }
    }
    #pragma endscop
}
