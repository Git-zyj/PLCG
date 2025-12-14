/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((((2058078846 < (arr_4 [i_0] [14])))) > ((((arr_4 [i_0] [i_0]) || (arr_1 [i_0] [11])))));
                arr_7 [i_1] = (max((min((arr_4 [i_0] [i_1]), (((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_0 [7] [i_1]))))), (((var_5 == (arr_5 [i_1]))))));
                var_17 = max(((~(max(33266, (arr_1 [i_0] [i_0]))))), ((max((arr_1 [i_1] [i_1]), (min(var_13, var_0))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_18 = ((((max(50528, 18896))) || -11122));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_19 = (max(var_19, 21975));
                        var_20 = ((((arr_18 [i_5] [i_3] [3] [i_5]) / (arr_18 [i_5] [i_3] [i_4] [i_5]))) < ((6146722529110685344 ? (arr_18 [i_5] [i_4] [i_3] [i_5]) : (arr_18 [i_5] [3] [i_4] [i_5]))));
                        arr_20 [i_5] [i_4] [i_5] [i_3] [0] = ((-((~((var_7 ? (arr_11 [i_4]) : (arr_19 [i_2] [i_2] [i_4])))))));
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        var_21 = ((((((arr_21 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1]) ? var_4 : (arr_21 [i_6 + 1] [i_6 + 2] [i_4] [i_4]))) + 9223372036854775807)) >> (((((var_3 == (arr_4 [i_2] [i_3])))) * var_10)));
                        arr_25 [i_2] [0] [4] [i_2] [1] [i_2] = (((~var_2) ? (((3419379322 < ((max((arr_9 [i_2]), (arr_3 [i_3]))))))) : (min((arr_21 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 2]), var_12))));
                    }
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        arr_28 [i_2] [i_3] [i_2] [i_7] = (arr_17 [i_4] [i_4] [i_2] [i_2]);
                        var_22 = ((((((min((arr_22 [i_2] [i_3] [8] [i_7] [i_4]), 1))) + 2147483647)) >> (2924166236769098719 - 2924166236769098702)));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_23 = (max(var_23, ((max(1, (((!-11122) ? (~-11122) : (arr_4 [i_2] [i_3]))))))));
                        var_24 = (max((min((((var_5 ? (arr_24 [i_2] [i_8] [i_4] [i_8] [i_2]) : var_12))), (4294967294 / 32768))), (((((arr_5 [1]) ? var_1 : (arr_4 [i_3] [9]))) * (((max((arr_14 [i_2]), var_2))))))));
                        arr_31 [i_2] [i_3] [i_4] [10] [4] = ((((79 ? 43561 : (-83 && 701584859))) << 1));
                        arr_32 [6] [10] [6] [7] [i_3] [7] = (max(1, (((arr_27 [i_2] [i_3] [i_4] [i_4] [i_4] [i_8]) / (min((arr_29 [9] [i_3] [i_4] [i_8]), 1875041781))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
