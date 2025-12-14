/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [22] [i_2] = ((((-7810 != (arr_2 [i_0 + 1]))) ? -var_11 : (((arr_5 [i_0 + 2] [i_0 + 1]) ? var_0 : (arr_2 [i_0 - 1])))));
                    var_20 = (min(var_20, (((!((!((((arr_0 [i_0]) ? 13 : (arr_4 [i_0] [14])))))))))));
                }
            }
        }
        var_21 = max(var_8, ((min(((var_2 ? (arr_1 [i_0 - 2]) : 15)), (arr_3 [i_0] [1])))));
        var_22 = ((var_11 | (((!var_17) ? (var_5 <= var_17) : (2119153982 && 1)))));
        var_23 = (~32);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = (max((((arr_0 [i_3]) % (arr_0 [i_3]))), ((min(223, 0)))));
        var_25 = (!var_2);
        var_26 = (min(var_26, -4294967295));
    }

    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            arr_15 [i_4] [i_5] = ((((~(!var_1))) != var_3));
            arr_16 [i_4] [i_5 - 1] [3] = ((((max(239, ((224 ? var_17 : 33423360))))) || ((((var_18 == (arr_0 [i_4 + 4]))) && ((min(-82, 40)))))));

            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    var_27 = (((arr_3 [i_6] [i_5]) ? -82 : (((!(arr_22 [i_4] [i_4] [i_4] [i_4] [i_4 + 2] [i_5 - 1]))))));
                    var_28 = (-9223372036854775807 - 1);
                    var_29 &= (min((((!(arr_0 [i_5 - 2])))), var_9));
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_30 += ((!(arr_13 [i_6 - 1] [i_5 - 3] [i_4 - 2])));
                    var_31 = (((~var_6) ? ((var_5 ? var_18 : (arr_3 [i_6 + 1] [i_6 + 1]))) : 16));
                    var_32 = (min(var_32, ((((!var_7) & (((arr_26 [i_4] [i_5 - 3] [i_5 - 3] [i_8]) / (arr_17 [i_4] [i_5] [i_6] [8]))))))));
                    var_33 = (max(var_33, (((-(arr_4 [i_4 + 3] [i_5]))))));
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_29 [i_4 + 1] [1] [i_4] [i_6 - 1] [i_6] [i_9] = ((((arr_17 [i_4] [i_5] [i_6] [i_9]) == ((((arr_23 [i_4]) ? 65527 : var_17))))));
                    var_34 = ((!((((((arr_19 [0] [i_5]) ^ var_17)) | var_6)))));
                    var_35 = ((max(var_18, ((var_1 < (arr_13 [i_4] [i_5] [1]))))));
                }
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    var_36 += var_10;
                    var_37 = ((~(((arr_30 [i_4] [2]) ^ ((((arr_28 [i_4] [i_5] [1] [15]) << (var_6 + 1160774210))))))));
                    var_38 = (max(var_38, var_13));
                }
            }
            var_39 = (max(var_39, (((~((~(arr_23 [i_4 + 4]))))))));

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    var_40 = ((((max((max((arr_21 [i_4] [i_4] [i_11] [i_11]), var_4)), (arr_3 [i_4 + 4] [i_5 + 1])))) - ((((max((arr_19 [i_4] [5]), var_19))) ? (arr_11 [i_4 + 2]) : -223))));
                    var_41 = ((+((((arr_8 [i_4 - 2]) && -94)))));
                }
                var_42 = ((((((arr_2 [i_4 + 1]) ? (arr_12 [i_4 - 1]) : 203))) || (((-((var_12 | (arr_20 [i_4 + 4] [i_5] [i_5] [14]))))))));
            }
        }
        var_43 = ((((((!(~var_11))))) < (max((arr_2 [18]), (arr_0 [i_4 + 4])))));
    }
    /* LoopNest 3 */
    for (int i_13 = 2; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                {
                    var_44 = (min(var_44, ((((-9223372036854775807 - 1) < ((~(((arr_7 [15]) ? (arr_39 [i_13] [i_14] [i_15]) : var_15)))))))));
                    arr_47 [i_13] [i_13] = var_14;
                }
            }
        }
    }
    #pragma endscop
}
