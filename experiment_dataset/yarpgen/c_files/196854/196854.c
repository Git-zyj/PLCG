/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (~17);
    var_21 = -var_7;
    var_22 ^= -9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_23 = arr_1 [i_0];
                        var_24 = (max(var_24, (-2147483647 - 1)));
                        var_25 *= (((((var_17 % ((-(arr_0 [i_3])))))) ? (((((arr_10 [i_2] [i_1 - 2]) == 122)))) : ((-((18446744073709551615 ? (arr_2 [i_0] [i_1 - 1] [i_2]) : 8422210968542526010))))));
                        var_26 = (min(var_26, (((!((((arr_7 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? 77 : 9155934882919058621))))))));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        arr_13 [i_1 + 1] [i_4 + 2] = ((((arr_8 [i_0] [i_1 + 1] [i_2] [i_4 + 2]) | (arr_8 [i_0] [i_1 - 1] [i_2] [i_4]))));
                        arr_14 [i_0] [i_1 + 1] [i_2] [i_1 - 1] = (arr_0 [i_0]);
                        var_27 = (((((144115188075855871 ? var_18 : (arr_10 [i_4] [i_0])))) ^ -2332663957751703712));
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_28 = min(((!(((-(arr_11 [i_0] [1] [i_0] [i_0] [i_0] [17])))))), (!7));
                        arr_18 [i_0] [15] [i_0] [i_5] = 65535;
                        arr_19 [i_5] [i_5] [i_5] [i_0] = ((!((!(arr_11 [i_5] [i_5] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2])))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_29 ^= ((((19 && -1) - (min(var_2, (-9223372036854775807 - 1))))) >= ((((arr_1 [i_1 - 1]) ? (arr_21 [i_1 + 1] [i_1] [i_2] [i_6] [i_2]) : (arr_1 [i_1 + 1])))));
                        var_30 = (max(var_30, (((-((-(arr_12 [i_6] [i_2] [i_2] [i_1] [i_1 - 2]))))))));
                        var_31 = var_3;
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        var_32 = (max(var_5, (min((arr_24 [i_1 + 1] [i_7 + 1]), 1023))));
                        var_33 = -1;
                        arr_25 [i_0] [i_7] [0] [16] [i_0] [i_0] = ((!((max((arr_6 [i_7 + 1] [i_7]), 65535)))));
                        arr_26 [i_0] [i_7] [i_2] [i_7 + 1] = (((-(arr_11 [i_0] [i_1] [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_7 + 1]))));
                    }
                    var_34 += (+(((arr_11 [i_0] [i_1 - 1] [i_2] [i_2] [i_1 + 1] [16]) | 165)));
                    arr_27 [i_0] [i_1 - 1] [i_2] = (((max(var_14, (arr_24 [i_1 - 1] [i_2]))) / var_11));
                }
            }
        }
    }
    #pragma endscop
}
