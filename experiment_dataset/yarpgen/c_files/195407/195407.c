/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((+(((((max((arr_1 [i_0]), 10565))) == 0)))));
                var_21 = 1;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] = ((-(3 | 1)));
        var_22 = 0;
        var_23 = ((-(arr_7 [i_2 - 3] [i_2 - 1])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = ((~(max(3, 0))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                {
                    var_25 = (((((!(arr_0 [i_3])))) | (arr_3 [i_3])));
                    var_26 = (max((~14), ((var_7 ? (arr_13 [i_4 + 1] [i_3]) : 197))));
                    var_27 += 39599;
                }
            }
        }

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_28 = 32768;
            arr_24 [i_3] = (((max(((!(arr_18 [i_3] [i_6] [i_3] [i_3]))), (!1))) ? ((1 ? 0 : (arr_13 [i_3] [i_3]))) : (((!(!63324))))));
            var_29 = 1;
            var_30 = (max((min(0, 1)), (arr_13 [2] [i_3])));
        }
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            var_31 = ((var_11 - ((((max(5, 213))) + 1))));
            var_32 = 57;
            var_33 = ((!(((-((27621 ? (arr_10 [i_3]) : (arr_6 [i_3]))))))));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_34 = min(((((max((arr_32 [i_3] [i_8] [i_8] [i_8]), (arr_20 [i_3] [i_8] [i_3])))) || var_1)), (((arr_16 [i_3] [i_3]) && (arr_19 [i_3] [i_3] [i_9] [i_11]))));
                            var_35 = (((((63324 ? (arr_33 [i_3] [i_3] [i_8] [i_9] [i_10] [i_11]) : (arr_33 [i_11] [i_3] [i_9] [i_8] [i_3] [i_3])))) || (((-(arr_3 [i_3]))))));
                            var_36 = (max(var_36, 65535));
                        }
                        var_37 = 0;
                        var_38 = 1;
                        arr_39 [i_3] = (((((arr_15 [i_3] [i_3] [i_3]) != (arr_15 [i_3] [i_3] [i_9]))) ? ((+((min((arr_13 [i_3] [i_3]), 3547))))) : ((1 ? 1 : (!8191)))));
                        var_39 |= (((~13690) ^ (((arr_6 [i_3]) >> ((((1 ? 32 : 1)) - 6))))));
                    }
                }
            }
            var_40 = (max((((((~(arr_12 [i_3] [i_3])))) ? ((max(0, 0))) : 192)), 5));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                var_41 |= (((-126 == 65528) ? 0 : ((((1 ? 1 : 1)) - (!2739)))));
                var_42 = ((108 ? 1 : (12749 - -61)));
            }
            arr_44 [i_3] = (1 | 1);
        }
    }
    for (int i_14 = 2; i_14 < 16;i_14 += 1)
    {
        arr_48 [i_14] = 56704;
        var_43 = (min(var_43, ((((!var_11) ? (((arr_46 [i_14] [i_14]) ? ((1 ? 0 : (arr_5 [i_14]))) : ((0 ? 18680 : var_9)))) : (((arr_4 [i_14 + 1]) / (arr_1 [i_14]))))))));
        var_44 = 58912;
    }
    var_45 = (254 + 74);
    #pragma endscop
}
