/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (((max((min(var_11, var_14)), (var_0 / var_4))) != ((((!(((var_7 ? 58 : var_15)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((arr_3 [i_0] [i_1]) ? var_7 : (arr_3 [i_0] [i_1]))));
                var_21 = (max(var_21, ((min(-6, ((min(4067254208759311713, (arr_0 [i_0])))))))));
            }
        }
    }
    var_22 = var_10;
    var_23 = var_13;

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_24 = 1;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_10 [i_2] [i_2] [i_2] = (!1507595916);
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_25 = (max(var_25, (arr_5 [i_2])));
                            arr_19 [i_3] [9] [i_3] [i_3] [i_3] [15] = ((arr_11 [i_4 + 1] [i_4 - 1]) ? (arr_12 [i_4 + 2] [i_4 + 3]) : (arr_13 [i_2] [i_2] [i_2] [i_2]));
                            var_26 = (((arr_17 [1] [i_5] [i_3]) ? (arr_6 [i_2]) : ((var_16 ? (arr_5 [i_3]) : var_14))));
                            var_27 = ((-(arr_7 [i_2])));
                        }
                    }
                }
            }
            var_28 = ((-965795002 ? 57906 : 1));
            var_29 = -var_4;
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            var_30 = var_4;
            var_31 = (((arr_13 [i_2] [i_2] [i_7] [i_7 + 1]) ? (!1) : (min((arr_8 [i_7 + 1]), var_10))));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_32 = (min(var_32, var_6));
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_33 = ((-(((arr_22 [i_2]) ? (!1) : (-3742299413632434815 / 1)))));
                        var_34 = (arr_16 [i_9 - 1] [i_9 + 1] [i_9 + 1]);

                        for (int i_11 = 2; i_11 < 24;i_11 += 1)
                        {
                            var_35 = (max((!-117), (arr_15 [i_2] [i_8] [i_9 + 1] [i_10] [i_11])));
                            var_36 = (!8524);
                            var_37 = (min(4058546612, ((((arr_7 [i_11]) > (((43356 ? (arr_27 [i_2] [20] [1] [i_9] [i_10] [20]) : (arr_18 [i_11] [17] [i_10] [i_9] [i_8] [i_2])))))))));
                        }
                        for (int i_12 = 4; i_12 < 22;i_12 += 1)
                        {
                            var_38 = ((arr_31 [i_2] [24] [i_2] [i_9] [i_12] [i_9]) ? ((((min(57919, 5690))))) : var_17);
                            var_39 = ((((((((arr_28 [i_2] [i_8] [i_9] [i_10] [i_2]) != var_12))) > (((arr_8 [i_2]) & var_8)))) ? ((((arr_25 [i_9] [i_9 + 1] [i_9 + 1] [i_9]) ? (arr_25 [9] [i_9 + 1] [i_9 - 1] [i_9]) : 8524))) : (min((arr_28 [i_2] [23] [i_2] [i_2] [i_2]), (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            var_40 = (~((((min((arr_26 [i_9 - 1] [i_10] [i_12]), -117))) ? ((var_7 ? (arr_11 [i_12] [i_9]) : (arr_31 [i_2] [i_2] [i_9] [i_9] [i_2] [i_2]))) : (~57900))));
                            var_41 = (min(2787371380, 44684));
                        }
                        arr_32 [i_9] [i_8] [3] = (arr_18 [i_2] [i_2] [i_8] [i_9 - 1] [i_9] [i_10]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 4; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_42 = (arr_17 [i_2] [3] [i_2]);
                            var_43 = (arr_33 [i_2] [i_2] [i_13] [i_15]);
                            arr_40 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = 116;
                            arr_41 [i_2] [i_13] [i_15] = (arr_35 [i_2] [i_8] [i_8] [19] [1]);
                            arr_42 [i_2] [i_8] [i_13 - 4] [i_14] [i_13] = (((58 && 1) % (arr_15 [17] [i_14] [i_13] [i_2] [i_2])));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    var_44 = (max((((~((min((arr_26 [i_2] [i_2] [i_2]), 1)))))), (((((-5544612013598840971 + 9223372036854775807) >> (((arr_8 [i_2]) + 14150)))) | var_1))));
                    var_45 = (max((((4399061367309966412 <= -11) / (arr_31 [i_2] [i_2] [i_16] [i_17] [i_16] [1]))), (((!(((arr_47 [i_17]) >= (arr_7 [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
