/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 += var_14;
    var_18 = ((32767 ? 3127113196 : 0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 |= var_5;
        var_20 = var_11;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 = (arr_1 [7]);

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    {
                        var_22 = ((min((arr_1 [i_1]), (arr_1 [i_1]))));
                        var_23 = ((((min((arr_1 [i_1]), (arr_5 [i_2] [i_1])))) ? (arr_10 [i_1] [i_2] [8] [i_4 + 2]) : (arr_1 [i_1])));
                        var_24 = var_13;
                        arr_14 [i_4] [i_2] [i_2] [i_2] [i_1] = (arr_10 [i_1] [i_1] [i_1] [i_1]);
                        arr_15 [i_1] [i_1] [i_1] = (arr_6 [i_1] [11] [i_4]);
                    }
                }
            }
            var_25 = ((((((arr_9 [i_1] [i_2] [i_1]) ? (arr_9 [i_1] [i_2] [i_2]) : (arr_9 [i_1] [i_1] [i_2])))) && (((((max((arr_6 [i_1] [i_2] [i_1]), (arr_10 [i_1] [i_1] [i_2] [i_2])))) ? (((arr_12 [i_2]) ? 4294967295 : 24228)) : var_15)))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_26 -= (((~(arr_9 [i_1] [i_5] [i_1]))));
            arr_18 [i_5] = ((-413937561 ? (arr_6 [i_1] [i_1] [i_5]) : ((-(arr_13 [i_5] [i_1] [i_5] [i_1])))));
            var_27 = 387017447;
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_25 [i_1] [i_6] [i_1] = ((!((min((arr_19 [i_1] [i_1]), (((11 >= (arr_2 [i_1] [i_7])))))))));
                arr_26 [i_1] [i_1] [i_7] = (((arr_2 [i_7] [i_7]) / ((((arr_20 [i_1] [i_6] [8]) >= var_11)))));
            }
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                arr_29 [i_1] [i_1] [i_1] [i_1] = -119;

                for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, (((+(min((arr_7 [i_1] [i_1] [i_1]), (arr_30 [i_1] [i_1] [i_8] [i_9]))))))));
                    var_29 |= 27672740;
                    var_30 += (arr_17 [i_1]);
                    var_31 = ((((min((arr_19 [i_8 - 1] [i_8 - 1]), (arr_19 [i_8 + 1] [i_8 + 1])))) ? ((max((arr_2 [i_1] [i_6]), (arr_24 [i_1] [i_6] [i_8] [i_6])))) : (!var_2)));
                    var_32 = (~((~(arr_23 [i_1] [6] [14] [i_9]))));
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    var_33 -= var_0;
                    arr_36 [i_1] [i_6] [i_8] [17] = ((~(min(var_14, (min((arr_16 [i_6] [i_6] [i_1]), (arr_4 [i_8])))))));
                }
            }
            arr_37 [i_6] [i_1] [i_1] = (-21794 / 23);
            arr_38 [i_1] [i_6] [i_1] = ((((arr_2 [i_1] [i_6]) + (arr_2 [i_1] [i_6]))));
            var_34 = (max(1048575, (arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6])));
        }
        var_35 ^= (((((arr_34 [i_1]) ? (arr_5 [i_1] [i_1]) : -6187036033682305280)) >= (((min((((!(arr_8 [i_1] [i_1] [i_1] [i_1])))), (arr_17 [i_1])))))));
        arr_39 [i_1] = ((max((arr_17 [i_1]), var_6)));
        var_36 = (max(((((min(var_2, var_9))) ? var_8 : (max(36, 3127113171)))), 124));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_42 [i_11] = (((((((((arr_0 [i_11] [i_11]) ? (arr_27 [9] [9]) : 15))) ? ((~(arr_4 [i_11]))) : (((2314259012 >= (arr_13 [3] [i_11] [i_11] [i_11]))))))) ? (((var_1 ^ (-23635 > 882988885)))) : ((var_10 * (((var_4 ? 4325807405287424604 : var_3)))))));
        arr_43 [i_11] [i_11] = ((((max(((min(var_13, var_2))), 32766))) ? (max((arr_21 [i_11]), (((arr_2 [i_11] [i_11]) & var_6)))) : ((~(((!(arr_12 [i_11]))))))));
        var_37 = ((((((arr_2 [i_11] [i_11]) >= (arr_2 [i_11] [i_11])))) < (((arr_2 [i_11] [i_11]) ? (arr_2 [i_11] [i_11]) : (arr_2 [i_11] [i_11])))));
    }
    #pragma endscop
}
