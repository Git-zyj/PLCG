/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (((((((max(var_13, (arr_2 [i_0] [i_0])))) ? 1 : (arr_1 [i_0])))) ? (((((var_18 + (arr_0 [4])))) ? (arr_2 [i_0] [i_0]) : -101)) : (((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0])))));
        var_22 = (!((((arr_0 [i_0]) ? ((((arr_0 [i_0]) - 139))) : (904392490 | var_5)))));
    }
    var_23 = (27194 ^ var_4);
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_9 [i_2] [i_2 + 1] [i_2] = (arr_7 [i_2] [i_2 + 1]);
                    arr_10 [i_2] = (((((+((1 ? (arr_3 [i_3]) : (arr_5 [i_1] [i_1])))))) % (((max(-4860191602932501116, (arr_4 [i_3]))) | 65513))));

                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_24 = ((((!(arr_8 [i_1] [i_3] [i_2])))));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_25 = (arr_4 [i_1]);
                            arr_16 [i_1] [i_1] [i_2] [i_2] = (arr_12 [i_1] [i_1]);
                            arr_17 [i_2] = ((((max(199, (arr_15 [i_5] [i_1] [i_3] [i_1] [i_1])))) <= (arr_7 [i_2] [i_4 - 1])));
                        }
                        var_26 = (max((~-1), (arr_13 [i_1] [i_2] [i_3] [i_4 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_27 = var_1;
                        arr_20 [i_1] [i_2] [i_3] [i_3] [i_1] [i_1] = (((~-8824136281567749095) <= (((var_18 ? (((arr_12 [i_1] [i_1]) ? (arr_12 [i_2] [8]) : (arr_3 [i_1]))) : var_19)))));

                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            arr_23 [i_2] [i_3] [i_2] [i_2] = 11467114727237547208;
                            arr_24 [i_1] [i_2] [i_1] [i_6] [i_7] = ((-((var_2 & (arr_12 [i_6] [i_6])))));
                            var_28 = (((~(arr_11 [i_1] [i_2 - 1] [i_6] [i_7 + 1] [i_7 + 1] [i_1]))));
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_29 = (max((!-114), (arr_12 [i_2 + 1] [i_2 + 2])));
                            arr_27 [i_1] [i_2] = ((!(((((arr_12 [i_1] [i_2 - 3]) ? (arr_14 [i_8] [i_2] [i_1] [i_2] [i_1]) : (arr_19 [i_1] [i_2] [i_3] [i_8])))))));
                            arr_28 [i_1] [i_1] [i_2] [i_6] [i_8] = (arr_14 [13] [i_2 - 2] [i_3] [i_2] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_1] = (arr_18 [i_2 + 2] [i_2 + 2] [i_3]);
                            var_30 |= ((-(-32767 - 1)));
                        }
                        var_31 = (min(var_31, ((((((((38338 && (arr_14 [i_1] [10] [i_3] [i_3] [i_6]))))) <= (arr_7 [i_3] [i_2 - 1])))))));
                    }
                    var_32 = (min(var_32, (((+(min((min((arr_11 [i_1] [i_2] [i_3] [i_3] [i_2] [i_2 - 2]), var_16)), (arr_4 [i_2 + 3]))))))));
                }
            }
        }
    }
    #pragma endscop
}
