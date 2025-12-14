/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_20 *= ((var_12 - (arr_1 [i_0] [i_0 - 3])));
            var_21 = (max(var_21, (((((!(arr_1 [i_0] [i_1]))) ? var_1 : (arr_3 [i_1]))))));
            var_22 = (arr_2 [i_0]);
            arr_5 [i_0] = (arr_3 [i_0 - 4]);
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_23 = (max(var_23, ((((arr_3 [i_0]) & (((arr_2 [15]) / (arr_4 [i_2] [i_2] [1]))))))));
            arr_8 [i_0] [i_0] [i_2] = (arr_6 [i_2 + 1] [i_2 + 1]);

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    arr_15 [i_0] [0] [i_3] [i_4] = (arr_9 [17] [i_2]);
                    var_24 = ((var_9 ? (arr_1 [i_0 - 2] [i_0 - 2]) : (arr_1 [i_0 - 2] [i_0 - 2])));
                }
                var_25 += (((((-(arr_3 [i_3])))) ? (((arr_4 [i_2] [i_2] [i_0]) ^ var_10)) : (arr_9 [i_2 - 2] [i_0 + 1])));
                arr_16 [i_3] = (arr_10 [i_0 - 2]);
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_19 [i_2] [i_5] = ((((!(arr_11 [i_0] [i_0] [1] [1]))) ? (arr_13 [i_5] [1] [i_5] [i_0 - 2]) : var_14));
                arr_20 [i_0] [i_0] [i_0] = (var_3 + 1);
                var_26 = (arr_18 [i_0 - 4] [i_0 - 4] [i_2 - 2] [i_2]);
                var_27 = (max(var_27, ((((arr_14 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_5]) ? var_12 : (arr_14 [i_0 - 3] [i_0 - 3] [i_2 + 1] [i_2 + 1]))))));
                var_28 = var_11;
            }
        }
        var_29 = (min(var_29, (((~((var_16 ? var_3 : (arr_3 [i_0]))))))));
        arr_21 [i_0] = ((((((arr_4 [0] [i_0] [7]) & (arr_9 [i_0] [i_0])))) || (arr_18 [i_0] [i_0 - 1] [i_0 + 1] [i_0])));
    }
    var_30 += var_14;

    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_31 = (((arr_23 [i_6] [i_6]) < ((~(arr_23 [i_6 + 4] [5])))));
        var_32 = (max((arr_24 [i_6]), var_12));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_33 = (arr_22 [17]);
                    arr_31 [i_6] [i_6] [i_6] [i_6] = ((((var_10 != (((arr_29 [i_6] [i_6] [i_8]) ? (arr_24 [i_7]) : (arr_22 [i_6]))))) ? ((((382006417 == 1) & ((~(arr_25 [i_6] [i_6] [i_8])))))) : (~var_11)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = var_19;
        var_34 *= ((!((1 <= (arr_28 [i_9] [i_9] [i_9] [10])))));

        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            arr_38 [i_9] [i_9] [i_9] = (arr_33 [i_9 + 3]);
            arr_39 [i_9] [i_10] [i_9] &= (arr_22 [i_9]);
            var_35 = (min(var_35, (arr_36 [i_9] [i_9])));
            arr_40 [i_9] = (!22);
        }
    }
    for (int i_11 = 1; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_36 = (min((((61224 - 43) - 2305843009211596800)), (((((max(1, (arr_37 [i_11] [i_11])))) + (arr_29 [i_11] [i_11] [i_11]))))));
        var_37 ^= (max((((min((arr_30 [i_11] [i_11] [i_11]), (arr_25 [i_11] [i_11] [i_11]))) | (((((arr_27 [i_11] [i_11] [i_11]) > (arr_43 [i_11] [i_11]))))))), ((~(max(var_12, (arr_37 [i_11] [i_11])))))));
        var_38 += var_1;
        var_39 = ((((((arr_43 [i_11] [i_11]) < (arr_27 [i_11] [i_11] [i_11])))) + (((2 == (arr_22 [i_11]))))));
        var_40 = ((((((~(arr_30 [14] [i_11] [i_11]))))) ? ((((arr_32 [i_11] [i_11 + 3]) && (arr_32 [i_11] [i_11 - 1])))) : (((arr_25 [i_11] [i_11 + 4] [i_11]) ? (arr_26 [i_11 - 1] [i_11]) : (((var_14 && (arr_43 [i_11] [i_11]))))))));
    }
    var_41 ^= (0 * 2144115567);

    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        arr_47 [i_12] = var_10;
        arr_48 [i_12] [i_12] = (0 || 96);
        arr_49 [i_12] [i_12] = (arr_45 [i_12]);
    }
    #pragma endscop
}
