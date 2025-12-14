/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 = (max(var_18, (((-(arr_1 [i_0 - 2]))))));
        var_19 = ((!(((-(arr_1 [i_0]))))));
        var_20 = var_17;
        var_21 ^= var_10;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = (max(3547585236, var_13));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_23 = ((((~(arr_8 [i_3] [i_4 + 1] [i_4] [i_4]))) | (~-10693021600058159584)));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_24 = ((!(arr_4 [i_4 + 1])));
                            var_25 = ((-(arr_8 [i_3] [i_4] [i_4] [i_4 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_26 = ((26905 ? 1827086226 : 26923));
                            arr_17 [i_1] [i_4] = min((arr_4 [i_4 - 1]), ((var_2 ? (arr_0 [i_3]) : (arr_0 [i_4 + 2]))));
                            var_27 |= ((!(arr_13 [i_1] [i_2] [i_3] [i_4] [i_2])));
                        }
                        arr_18 [3] = (arr_6 [i_1] [i_3]);
                    }
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        var_28 |= ((!((max((((242 ? var_15 : 128))), 3668303505277995219)))));
                        arr_21 [i_1] [i_1] [1] = ((86 ? ((((-125038614 >= var_6) << ((((1896096057 ? var_0 : 4294967295)) - 17601702723807271015))))) : (((max((arr_5 [i_7]), var_8)) & (~-6019)))));
                    }
                    var_29 = (max((arr_3 [i_2]), (max((arr_15 [7] [i_1] [i_2] [8] [i_3] [i_3]), (var_17 + 79)))));
                }
            }
        }
    }
    var_30 ^= (min((!var_7), ((var_12 ? var_14 : (var_12 >> 0)))));
    var_31 = (((36663 ? 4294967288 : 64826)));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_32 = ((((((max(18446744073709551615, (arr_8 [i_8] [5] [i_8] [i_12])))) ? (((arr_27 [i_8] [i_10] [i_11] [i_12]) / var_14)) : (arr_29 [i_8]))) / (((var_9 ? (var_14 > var_15) : (-125038637 & var_14))))));
                                arr_34 [i_8] [i_8] [12] [i_8] = var_13;
                                var_33 = (max(var_33, ((min((-9223372036854775807 - 1), 4772289110695755098)))));
                                var_34 ^= -4270146830959407902;
                            }
                        }
                    }
                    arr_35 [i_8] [i_8] [2] = var_8;
                    var_35 = (arr_16 [i_8] [i_8] [1] [1] [i_8]);
                    var_36 = (max(38617, 14));
                    arr_36 [i_8] [12] [0] |= 0;
                }
            }
        }
    }
    #pragma endscop
}
