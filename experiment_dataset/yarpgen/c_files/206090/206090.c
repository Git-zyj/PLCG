/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_3] = (((((((var_0 & var_0) <= var_11)))) & ((var_11 ? var_9 : (arr_9 [i_2 + 1] [i_1])))));
                        arr_12 [i_0] [1] [i_2] [i_3 - 1] = ((~(((arr_7 [i_3 + 1] [i_3 + 2] [i_3] [i_3]) ? var_0 : (arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3])))));
                    }
                }
            }
        }
        var_14 += ((((((!var_1) ? var_1 : (~var_3)))) ? ((~(var_1 & var_4))) : (!var_6)));
        arr_13 [i_0] = (3383711870665623424 != 3383711870665623423);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_15 = (((arr_0 [i_4] [i_4]) & (max((arr_0 [i_4] [i_4]), var_0))));
        var_16 = (min(var_16, ((max(15063032203043928188, 9782467856466567819)))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_17 *= (((!var_7) ? var_10 : ((-(arr_17 [i_5 + 1] [i_5 + 1])))));
        arr_19 [1] [1] |= (((var_11 <= ((((var_10 <= (arr_17 [i_5] [3]))))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_24 [i_6] [i_6] [i_6] = (max((max(4294967295, 51)), ((((arr_23 [i_6]) * (arr_22 [i_7] [i_7] [i_6]))))));
            var_18 = ((!((((arr_23 [i_7]) / var_4)))));
        }
        var_19 = (((((((15063032203043928193 ? -11519 : 1266126567))) ? (arr_21 [i_6]) : (922496558 & var_10))) != ((((((arr_21 [i_6]) * 15063032203043928204)))))));
        arr_25 [16] = (((arr_22 [i_6] [i_6] [i_6]) * ((1 ? -14272 : 15063032203043928204))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        var_20 = var_4;

                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_21 += var_5;
                            arr_35 [i_11] [15] [i_9] [i_8] = (((var_7 || -1) * var_13));
                            var_22 = (((((arr_30 [i_6] [i_6] [i_9] [i_10 - 1] [i_11]) ? (arr_33 [i_6] [i_6] [i_6] [i_6] [i_6]) : 171)) / var_6));
                            arr_36 [i_6] [i_6] [i_6] [i_6] [1] [i_6] [i_6] = (var_3 & var_1);
                        }
                        var_23 = (max(var_23, ((((!var_2) & (var_5 * var_3))))));

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_24 = 5654404674583589465;
                            var_25 = (min(var_25, (((((15063032203043928195 ? var_7 : (arr_22 [8] [i_9] [i_12]))) | (~var_11))))));
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_41 [i_6] [i_6] = (arr_28 [i_13] [i_10] [i_10 - 2] [i_10 + 2]);
                            arr_42 [i_6] [i_6] = var_7;
                            var_26 = (((0 * var_10) <= var_0));
                            var_27 = ((+(((arr_27 [i_13] [6] [i_13]) ? var_2 : var_0))));
                            var_28 *= (((arr_40 [i_13] [i_10 + 2] [i_13] [i_10 + 2]) * (arr_28 [i_10 + 2] [i_10 + 2] [i_10 - 2] [i_10 - 3])));
                        }
                    }
                    var_29 = var_9;
                    arr_43 [i_6] [i_8] [i_9] [i_9] = (((var_1 ? (var_11 != var_11) : var_9)) << (((!(arr_40 [i_9] [i_9] [i_8] [i_6])))));
                }
            }
        }
        arr_44 [i_6] = (max((((var_10 + 2147483647) << (((((var_11 || (arr_27 [i_6] [i_6] [i_6])))) - 1)))), (((var_11 <= (arr_40 [i_6] [0] [i_6] [i_6]))))));
    }
    var_30 *= -95;
    #pragma endscop
}
