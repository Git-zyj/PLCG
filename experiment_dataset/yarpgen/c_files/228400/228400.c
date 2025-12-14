/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? var_2 : ((-((min(-74, -1)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((((127 | -1) ? (((arr_1 [i_0]) ? var_12 : var_5)) : (~127))) + 2147483647)) << (((max((arr_0 [i_0]), 120)) - 375429350)))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] = 50;
            var_17 = ((((!(((var_0 ^ (arr_1 [i_0])))))) ? (((((arr_2 [i_0]) || var_4)))) : ((((-(arr_2 [i_0]))) / (arr_2 [i_0])))));
            arr_5 [i_0] [i_0] = (min(((var_9 ? var_8 : -20)), (-128 && var_8)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = (arr_3 [i_0] [i_2]);
            arr_9 [i_0] [i_0] [i_2] = var_13;
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_18 = -518993844005260979;
                        var_19 *= ((~(var_4 <= 1)));
                        arr_18 [i_0] [i_3] [i_4] [i_0] = -var_11;
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [5] [i_6] = ((50 >> (-var_9 - 2834821805974611669)));

                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            var_20 = (max(var_20, ((max((var_9 ^ 518993844005260961), ((max((~39), 1))))))));
                            var_21 = ((max(2, (max(var_1, (arr_2 [i_4]))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_22 = (~-var_0);
                            var_23 = (((arr_17 [i_4] [i_3] [i_4] [i_6]) >> (518993844005260973 - 518993844005260955)));
                            var_24 &= var_10;
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_25 -= var_0;
                            var_26 = (max(var_26, ((max(((74 ? var_1 : (arr_15 [i_6] [i_4] [i_6]))), (((arr_15 [i_6] [i_3] [i_4]) | (arr_15 [i_6] [i_6] [i_9]))))))));
                            var_27 = (min(var_27, ((min(((var_11 * (arr_24 [i_0] [i_3] [i_4] [i_6] [i_9]))), var_7)))));
                        }
                        var_28 = (max(((((arr_31 [i_6] [i_3] [i_3] [i_6] [i_4]) | var_1))), (max(var_9, (arr_31 [i_0] [i_3] [7] [i_6] [0])))));
                    }
                    var_29 *= (arr_25 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_30 *= (min(var_4, -var_11));
                                arr_38 [i_11] [i_0] [i_4] [i_0] [i_0] = 195;
                            }
                        }
                    }
                }
            }
        }
        var_31 = var_5;
    }

    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_32 *= -3841908860205691829;
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_33 -= var_2;
                        var_34 = (((arr_42 [i_12]) * (max((arr_47 [i_15] [i_12] [i_12] [i_12]), var_5))));
                        var_35 = (min(var_35, ((((arr_41 [2]) ? (((!(arr_41 [20])))) : var_14)))));
                    }
                }
            }
        }
        arr_51 [i_12] [i_12] = var_0;
    }
    for (int i_16 = 3; i_16 < 17;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                {
                    arr_61 [i_16 - 1] [i_16] = (min((-68 && 4), ((max((arr_49 [i_17] [i_16] [i_16] [15]), (arr_57 [i_16 - 1] [i_16 - 3]))))));
                    var_36 = (((arr_40 [i_16] [i_16]) / (3 ^ var_5)));
                    var_37 = (min((arr_40 [i_16 - 3] [i_16]), var_2));
                    var_38 = ((518993844005260983 ? ((((max(var_1, -12))) ? (127 ^ 1) : var_4)) : ((max((arr_47 [i_16 - 1] [i_16 - 1] [i_16] [i_18]), var_14)))));
                }
            }
        }
        var_39 = (((((36379 << 1) ? (~112225329) : var_5)) * (((var_6 ? ((max((arr_47 [i_16] [i_16] [i_16] [i_16]), var_7))) : var_2)))));
    }
    #pragma endscop
}
