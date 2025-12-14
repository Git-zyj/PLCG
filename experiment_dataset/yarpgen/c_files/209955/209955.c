/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((min(var_7, var_6)) & var_6)), -var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 = (((arr_4 [i_3] [i_2] [4]) ? ((-(((!(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : ((+(((-100 + 2147483647) >> (((arr_10 [i_0] [i_0] [i_1 - 1] [i_1] [i_2] [i_3]) - 1771201539))))))));
                        arr_11 [i_3] [2] = ((((((~10335484659531316219) ? (max((arr_7 [i_0] [i_0] [i_0]), var_13)) : ((((arr_3 [i_0] [i_1]) + 23574)))))) ? ((((3208533910 <= (arr_9 [9] [9] [i_2] [i_2] [16]))))) : var_0));
                    }
                    var_17 = var_5;

                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_18 = (arr_8 [i_4 - 1] [i_4 - 1]);
                        arr_15 [i_0] [i_1] [i_1 - 2] [i_4] = var_12;
                        var_19 = (arr_2 [i_4] [i_2]);

                        for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((((max(((var_8 ? 8111259414178235396 : (arr_9 [i_0] [i_4] [i_4] [i_4] [i_1]))), (var_14 && -32767)))) ? (max(8111259414178235397, ((min((arr_6 [i_0] [i_4] [i_0]), var_12))))) : var_7));
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_2] = var_2;
                        }
                        for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_21 = (((!var_2) >> (((arr_2 [i_6 + 1] [i_1 + 3]) ^ (arr_2 [i_6 - 3] [i_1 + 2])))));
                            arr_21 [i_6] [i_4] [i_0] [i_2] [i_4] [i_0] = (min(((min((arr_10 [i_6 - 3] [i_4 + 1] [i_1 - 1] [i_1] [i_1 + 3] [i_1]), (arr_10 [i_6 - 3] [i_4 + 1] [i_4] [i_4] [i_1 + 1] [i_1 - 1])))), (arr_20 [i_4] [i_6 - 1] [i_6 + 1] [i_4] [i_4])));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_22 = (max(((min((arr_13 [i_1] [i_1 + 1] [i_1] [i_1 + 3]), var_4))), (arr_7 [i_0] [i_0] [i_1 - 1])));
                            arr_24 [i_1 + 2] [i_4] [i_1 + 1] [i_4] [i_7] = ((~((-(arr_22 [i_1 + 2] [i_1 + 2] [i_4] [i_1] [i_1] [i_1 + 3] [i_1])))));
                            var_23 = var_6;
                            arr_25 [i_2] [i_4] [i_2] [i_4] [i_7] [i_2] = ((var_11 ? var_9 : (max((arr_5 [i_1 - 1] [i_1 + 2]), (min((arr_20 [i_0] [i_1] [i_0] [i_4 - 1] [i_4]), (arr_0 [i_0] [4])))))));
                            var_24 = -1740047616;
                        }
                    }
                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        var_25 = 8111259414178235421;
                        var_26 = (arr_10 [i_0] [i_2] [i_1] [i_8 - 2] [i_8] [i_0]);
                        var_27 = ((~(max((arr_13 [i_0] [i_0] [i_1 - 2] [i_2]), var_7))));
                        var_28 = (max(19208, (min((((arr_23 [i_1] [i_1] [12] [i_1] [i_8]) ^ -99)), (arr_17 [i_0] [i_1 - 2] [i_8])))));
                        var_29 = -22744;
                    }
                    arr_28 [i_0] [i_1] [8] = var_10;

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_1 - 1] [i_2] [i_9] = (((min((arr_31 [i_1 + 1]), (arr_26 [i_1 - 2] [i_1] [i_1]))) & (((min(0, (arr_10 [i_1] [i_1] [i_2] [i_1 + 2] [i_1 + 1] [i_9])))))));
                        arr_33 [i_0] [i_0] [i_0] [i_0] = (((((var_14 + (arr_17 [18] [i_1] [i_9]))))) ? (((((var_4 ^ (arr_13 [i_9] [i_2] [i_1] [i_0]))) << (var_3 + 58806210)))) : var_7);
                        arr_34 [19] [i_2] [i_1] [i_0] = ((+((((arr_9 [i_0] [i_1] [i_1] [i_2] [i_2]) && ((((arr_3 [i_0] [i_2]) % var_6))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
