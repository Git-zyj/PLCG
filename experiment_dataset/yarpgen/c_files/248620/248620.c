/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_0 [i_0] [i_0])));
        var_20 -= 13437943326347180518;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_21 = (max(var_21, (((-((-(arr_2 [i_1 + 1] [i_1 + 1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((-9180653570586932529 ? 58249 : 8574754822910231372)))));
                                var_23 = (min(var_23, (((((min(((var_16 / (arr_3 [19]))), var_11))) ? (arr_12 [17] [17] [13] [6] [i_5]) : (arr_9 [i_2 - 1] [i_3]))))));
                            }
                        }
                    }
                    var_24 = (max(var_24, 1270846174));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_25 = (max(var_25, (((13437943326347180526 ? 9180653570586932536 : 0)))));
                arr_25 [i_6] [i_6] |= ((~(arr_11 [2] [i_7 + 3] [i_8] [i_7 + 2])));
            }
            arr_26 [i_6] [i_7] &= var_10;
            var_26 = (arr_9 [i_6] [i_6]);
        }
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            var_27 *= ((((((min(13437943326347180526, 31))))) <= var_12));

            /* vectorizable */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                arr_34 [i_6] [18] [i_9 - 1] [i_10] |= (arr_32 [i_6] [i_6] [i_10]);
                var_28 *= (arr_14 [i_10] [i_6] [i_6] [i_9 + 3]);
                var_29 ^= (!var_10);
            }
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                var_30 = (max(var_30, (((((!(arr_28 [i_9 - 1] [i_11 + 1] [i_11 + 1]))) ? (max((arr_12 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_9 - 1]), (arr_20 [i_11 + 1] [1]))) : (arr_2 [i_11] [i_11]))))));
                var_31 = (max(var_31, -9180653570586932537));
                var_32 ^= (((arr_28 [i_6] [3] [i_11]) ? ((((arr_18 [i_6]) && (arr_11 [i_11] [i_11] [1] [i_11])))) : (arr_13 [i_6] [i_6] [i_6] [5] [i_6] [i_6] [15])));
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_33 += (((-(arr_27 [i_6] [i_9] [i_12]))));
                            var_34 = (min(var_34, (((((min((((arr_42 [2] [i_9 + 1] [i_12] [i_13]) * (arr_13 [i_6] [i_9] [19] [19] [20] [i_14] [i_14]))), -6299941902852760106))) ? ((-(((arr_42 [10] [i_12] [10] [i_6]) ? (arr_32 [i_6] [i_9 + 3] [i_9 + 3]) : (arr_20 [i_9] [i_12]))))) : (((244 - 5008800747362371091) ? 13437943326347180525 : -8574754822910231372)))))));
                            var_35 ^= (((min((arr_43 [i_14] [3] [i_6] [i_9] [i_6]), 5008800747362371086))));
                        }
                    }
                }
                var_36 -= (((arr_43 [i_6] [1] [i_9] [1] [6]) ? (((arr_21 [i_6] [6]) - (arr_45 [18] [i_6] [i_6] [14] [i_12] [i_6] [i_12]))) : ((((arr_46 [i_6] [i_9]) ? (arr_46 [i_6] [i_6]) : (arr_46 [i_6] [i_6]))))));
            }
        }
        var_37 *= (((arr_17 [i_6]) ? (arr_20 [i_6] [i_6]) : ((((arr_20 [i_6] [i_6]) ? (arr_17 [i_6]) : (arr_17 [i_6]))))));
        var_38 = (min(var_38, (((~((var_5 ? -1113767894 : 131071)))))));
        var_39 = (max(var_39, (((27823 ? 13602 : 9180653570586932506)))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        var_40 = (min(var_40, (arr_10 [6] [i_15] [20] [1])));
        var_41 |= (((-(arr_2 [i_15] [i_15]))));
        var_42 = (((arr_12 [i_15] [16] [i_15] [i_15] [i_15]) ? (arr_12 [i_15] [i_15] [i_15] [9] [i_15]) : (arr_12 [14] [i_15] [i_15] [i_15] [i_15])));
    }
    var_43 &= (!var_1);
    var_44 |= (var_9 + var_6);
    var_45 &= var_17;
    #pragma endscop
}
