/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_0 [10]) ? (arr_0 [i_0]) : (max((arr_0 [i_0]), 3725140233873391498))))) || (((+((((arr_1 [i_0] [i_0]) != var_10))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_21 = (max(((31 >> (((arr_4 [i_3] [i_0]) - 56)))), ((max(31, 15)))));
                        var_22 = -84;
                        var_23 = (--81);
                        var_24 = ((!(((arr_0 [i_1 + 1]) >= (arr_0 [i_1 + 1])))));
                    }
                }
            }
        }
        var_25 = (arr_4 [i_0] [i_0 - 1]);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_26 = (arr_11 [i_4]);
        var_27 = (max(var_27, ((max(224, 255)))));
        var_28 = 80;
        arr_14 [i_4] [9] = ((((max((arr_12 [i_4]), -28))) | ((-3434570301947959038 ? 62 : 44))));
        var_29 = (max(var_29, ((((((-85 - (arr_11 [i_4])))) ? (!var_4) : (((var_14 - 255) ? (arr_11 [i_4]) : var_1)))))));
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_30 = (max((((!((((arr_18 [0]) - var_9)))))), (~84)));
        var_31 = (((max((arr_15 [i_5]), 6)) != (((((arr_17 [i_5]) >= ((151 ? (arr_17 [i_5]) : var_16))))))));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        var_32 = (((arr_15 [i_6 - 1]) % (arr_15 [i_6 - 1])));
        var_33 = (((((arr_17 [i_6 + 1]) <= (((77 >> (1318566037 - 1318566022)))))) ? 1658686225 : (35394 == -94)));
        var_34 = (~-79);
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        var_35 = ((~((max((arr_19 [i_7 + 2]), (arr_19 [i_7 - 1]))))));
        var_36 = (arr_11 [i_7 + 2]);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_37 = (arr_13 [i_7] [i_7 + 3]);
                        var_38 *= max(var_13, (((-(arr_18 [i_7 + 1])))));
                        var_39 = 19;
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_35 [i_8] [i_8] = (arr_17 [i_7 - 1]);
                        var_40 *= arr_19 [i_7 + 1];
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_41 [i_7] [i_7] [i_8] [i_7] [i_7] = ((~(((((-(arr_33 [i_7] [i_8])))) ? ((((arr_21 [i_7]) ? (arr_37 [i_7] [i_8] [i_8] [i_12] [i_13]) : (arr_34 [i_8] [6] [6] [i_12])))) : ((var_19 / (arr_21 [i_7])))))));
                                var_41 = (max((((!(arr_39 [i_7] [i_13 - 1] [i_13] [i_13] [i_13] [i_13 - 3])))), (73 * 1499364129)));
                            }
                        }
                    }
                    arr_42 [i_7 + 2] [i_7] [i_8] [i_9] = 7300755332966287647;
                }
            }
        }
        var_42 = (max(var_42, (arr_32 [i_7 + 2])));
        arr_43 [i_7] = (!-1790870212);
    }
    for (int i_14 = 3; i_14 < 10;i_14 += 1)
    {
        var_43 = ((+(((!254) ? (arr_46 [i_14]) : (((-1714120554174080925 ? 243 : (arr_44 [i_14]))))))));
        var_44 = (~2795603151);
        var_45 *= arr_34 [14] [14] [14] [i_14];

        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            var_46 |= var_16;
            arr_49 [i_14] [i_15] = 142;
        }
    }
    #pragma endscop
}
