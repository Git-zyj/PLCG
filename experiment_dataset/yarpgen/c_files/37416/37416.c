/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((-var_5 + var_8), var_10));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_19 = (max(var_19, var_0));
            arr_4 [i_0] [i_1 - 1] = ((arr_1 [i_1 - 1] [i_1 - 1]) ? (arr_2 [i_1 + 2] [15]) : (arr_1 [i_1 + 1] [i_1]));
            arr_5 [i_0] [i_1] [i_1 + 1] = ((~(arr_3 [20] [i_1 + 2] [i_1 - 1])));
            var_20 = ((245 ^ (arr_3 [i_1] [i_1] [i_1 + 2])));
        }
        arr_6 [i_0] = var_1;
        arr_7 [i_0] = (min((max(255, (arr_2 [i_0] [i_0]))), (((-(arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_12 [i_3] [i_0] = ((((max(11, (arr_3 [i_0] [i_0] [i_0])))) ? (arr_3 [i_2] [i_2] [i_0]) : (((arr_3 [i_0] [i_2] [i_3]) ^ (arr_3 [i_0] [i_0] [i_0])))));
                    arr_13 [i_0] [i_2] [i_3] = -var_8;

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_21 &= (max((((!(var_16 & var_0)))), ((-110 ? (((max((arr_10 [i_0]), var_13)))) : 0))));
                            var_22 -= ((((min((((-1226795693 ? 1 : (arr_0 [i_3])))), (max(var_6, 3))))) ? (min((((arr_1 [i_0] [i_0]) ? (arr_14 [i_0] [19]) : var_6)), var_6)) : -var_7));
                            var_23 = ((-1226795693 ^ ((((arr_18 [i_0] [i_2] [3] [i_5]) < var_2)))));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [i_0] [1] [i_0] [i_0] = ((-(((!(arr_2 [i_2] [i_2]))))));
                            arr_22 [i_6] [i_4] [i_0] [i_2] [i_0] = ((((-(arr_8 [i_0] [i_2] [i_3]))) - ((var_12 - (arr_8 [i_0] [i_0] [i_0])))));
                            var_24 |= ((~(((arr_3 [i_0] [i_3] [i_6]) & 188))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_25 [15] [i_2] [4] [i_2] [i_2] = ((15668159528770028169 != (((var_15 >= ((var_4 - (arr_16 [i_7] [i_3] [i_7]))))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((var_6 != (((arr_19 [i_0] [i_2] [i_0]) | var_16))))) - var_3));
                            arr_27 [i_0] [i_2] [i_3] |= ((-((var_0 / (arr_3 [i_0] [i_0] [i_0])))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            arr_30 [i_0] [i_8] [i_3] = (((arr_17 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_4] [i_8]) * (arr_29 [i_8 - 1] [i_4] [i_4] [i_4] [6] [i_4] [i_4])));
                            arr_31 [i_0] [i_2] [i_8] [i_4] [i_8] [i_2] = (arr_17 [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8]);
                            var_25 |= (arr_15 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1]);
                            var_26 += (((var_12 || var_7) >= (!215)));
                        }
                        var_27 = (((((-20 <= (49 / var_3)))) ^ var_15));
                        arr_32 [i_0] [i_2] [i_3] [i_4] = (((((var_11 ? var_3 : (arr_28 [i_0] [i_2] [i_3] [i_4] [i_4])))) || (arr_9 [i_0])));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_37 [2] = ((var_13 * (max(8729055790209336929, (arr_19 [i_9] [i_9] [i_9])))));
        var_28 = ((((((arr_14 [i_9] [i_9]) ? (arr_14 [i_9] [i_9]) : 111))) - -var_8));
    }
    for (int i_10 = 1; i_10 < 16;i_10 += 1)
    {
        arr_40 [i_10] = (arr_9 [12]);
        arr_41 [i_10 + 1] [i_10] = ((+((((max((arr_24 [i_10 - 1] [i_10]), (arr_2 [i_10] [i_10])))) ? (min(var_5, var_6)) : (((130905050514979696 ? var_13 : var_9)))))));
        var_29 = (var_16 + var_3);
        arr_42 [i_10] [i_10 - 1] = ((((((((-(arr_28 [i_10 - 1] [i_10 - 1] [i_10] [i_10 + 1] [i_10 + 1])))) - (3705078868 | 1318185634)))) ? ((-(((!(arr_14 [i_10] [1])))))) : -var_1));
    }
    var_30 = ((-(max((var_12 | var_17), var_8))));
    #pragma endscop
}
