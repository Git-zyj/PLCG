/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~((max(var_3, 62)))))) / var_9));
    var_11 = ((-(min(var_9, var_1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        var_12 ^= ((194 ? (min((65535 % var_1), (min(4294967295, 12685425341845310442)))) : (((1 ? 1 : 1)))));
                        arr_10 [i_3] [i_1] [i_0 + 1] = ((2147483647 ? (((144115188075855871 ? 144115188075855871 : 61))) : ((((arr_9 [i_3]) ? ((max((arr_0 [i_0] [i_3 - 1]), (arr_0 [i_0 + 2] [7])))) : (((!(arr_4 [i_0] [i_1] [i_2])))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = max((((-(arr_4 [i_0] [i_2] [i_3])))), (((min(1, 4241983836868620946)) + 65535)));
                        var_13 -= ((14647987731336501225 ? ((((~var_8) ? (arr_2 [i_0] [i_1 + 1] [i_2]) : (arr_5 [i_0 + 2] [i_1 - 1] [i_2] [i_3])))) : 2047));
                    }

                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [9] [i_4] [i_4 + 2] = var_1;

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [10] [i_4] [i_5] [i_0 + 1] = var_5;
                            arr_20 [i_4] [i_4] = (max((((arr_8 [i_0] [i_0] [i_1 + 1] [i_0 - 1] [i_0 - 1]) ? (arr_8 [i_0] [i_1 - 2] [i_1 - 1] [i_0 - 1] [i_5]) : 9223372036854775807)), var_7));
                            var_14 = ((-(-144115188075855872 - 127)));
                        }
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_15 *= ((((var_0 ? (arr_5 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1]) : var_1)) ^ (arr_5 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])));
                        var_16 = ((-var_9 - (min(var_7, (max(var_1, (arr_16 [i_2] [i_2] [i_6])))))));
                        arr_23 [i_0] [i_2] = ((arr_13 [i_0 - 1] [i_1 + 1]) ? ((min((arr_3 [i_1] [i_1 - 2] [i_1 - 1]), (arr_3 [i_1] [i_1 + 1] [i_2])))) : (arr_3 [i_1] [i_1 - 2] [i_1 - 1]));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_17 -= ((!((min(var_1, ((6831 ? 127 : (arr_22 [i_0 + 1] [i_1] [i_2] [i_7] [i_7]))))))));
                        arr_26 [i_2] |= var_4;
                        var_18 ^= ((((!(arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 1]))) ? ((((arr_18 [i_1] [i_1 + 1]) || (arr_1 [7])))) : (arr_12 [i_2] [i_1] [i_1 - 2] [i_0 - 1])));
                        var_19 = min((arr_13 [i_0 + 2] [i_0 + 1]), (min(((((arr_6 [i_0] [i_1] [2]) ? (arr_3 [i_0] [i_1] [i_7]) : 0))), (min(1014, (arr_17 [i_7] [i_1] [i_7] [i_7] [i_7] [i_1] [i_2]))))));
                        var_20 ^= (~((((max(-6268644769415424592, (arr_15 [6] [i_2])))) ? (~var_2) : (((var_4 | (arr_4 [i_1] [i_2] [i_7])))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_21 = (((arr_3 [i_0 - 1] [11] [i_1]) ? (arr_22 [i_0] [1] [i_2] [i_8] [i_8]) : 28473));
                        var_22 = (arr_28 [i_8] [i_2] [i_8] [i_8] [i_0 + 2] [i_0 + 1]);
                        var_23 = ((!(arr_28 [i_0] [2] [i_0 + 2] [i_8] [i_8] [i_8])));
                        arr_29 [i_8] [i_2] [i_1 - 1] [i_8] = (((((~(arr_3 [i_0] [i_1] [i_2])))) ? ((var_3 ? (arr_9 [3]) : 199647530)) : (arr_8 [i_0] [i_1] [i_1 - 2] [i_2] [i_8])));
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, ((((((-((var_2 ? 127 : var_1))))) + var_7)))));
    var_25 = (max(var_2, var_1));
    #pragma endscop
}
