/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((~(((((var_2 ? 40365 : 13258))) ? ((var_6 | (arr_2 [i_1] [i_1] [1]))) : ((1 ? 40365 : 20019))))))));
                arr_5 [13] [i_0] [i_0] = (min((((arr_1 [i_1]) ? var_4 : (arr_1 [i_0]))), (arr_0 [11])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_19 = ((!((var_13 || ((((arr_6 [i_3]) ? (arr_7 [7] [i_3]) : var_17)))))));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [i_6 - 1] [i_6 - 1] = (min((((arr_6 [i_6 - 1]) ? ((min(var_3, var_4))) : (min(var_6, (arr_11 [i_2] [i_3] [i_3]))))), (var_5 ^ var_12)));
                            var_20 -= var_17;
                            arr_23 [3] [1] [1] [i_5] = var_17;
                        }
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            var_21 = ((~(((((14 ? (arr_6 [i_7 + 1]) : 25171))) ? (max(1, var_5)) : (arr_24 [i_2] [i_7])))));
                            var_22 = (min((arr_20 [i_2] [i_3] [i_3] [i_5] [5] [i_7] [i_3]), ((((((arr_4 [1] [4] [i_5]) > var_12))) - ((max(var_6, 1)))))));
                            var_23 = (((min(13264, 40383))) ? (max((((arr_13 [i_7 - 2]) ? (arr_18 [i_2] [i_4] [6] [i_7]) : 25152)), (13258 ^ 1))) : 40384);
                        }
                        arr_27 [i_2] = 40384;
                    }
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {

                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            arr_33 [i_2] [i_3] [i_9] [6] [i_9] = (+((((max((arr_4 [i_9 - 1] [i_8 - 3] [6]), var_9))) ? var_1 : var_11)));
                            arr_34 [i_9] = ((((((arr_8 [i_9 + 1] [i_9]) == (arr_10 [i_3])))) % ((65535 ? 13229 : 12595))));
                        }
                        arr_35 [i_8] [i_2] [6] [i_2] = ((((-(max(var_4, var_11)))) / ((1 ? ((var_1 ? var_17 : var_13)) : (min((arr_14 [i_2] [i_2] [i_2]), var_4))))));
                        var_24 = (max(var_24, (((((var_0 ? (min(var_6, var_11)) : (min(1264107191, (arr_16 [i_2] [i_2] [i_2] [i_8]))))) << ((((0 ? var_14 : var_8)) - 41612)))))));
                    }
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        var_25 = 1;
                        var_26 = (max(var_26, ((232 ? ((var_12 / ((min(var_16, var_3))))) : 1))));
                        arr_39 [i_10 - 2] [i_3] = (max(((1 ? 1 : 10)), (min(var_16, (((arr_0 [i_2]) ? (arr_11 [i_2] [i_2] [i_2]) : 1))))));
                    }
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        var_27 = (min((max(var_11, 1)), ((((max(var_15, 1))) - (((arr_29 [i_4] [1]) ? 1 : var_10))))));
                        var_28 = (((arr_13 [i_2]) ? var_3 : var_7));
                        var_29 = (min(((var_16 ? (arr_25 [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 2]) : var_2)), (arr_25 [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 2])));
                        var_30 = (min(var_30, ((((((var_1 | (arr_30 [i_2] [i_2] [i_2] [i_11 + 1] [i_11 + 1])))) ? ((((((arr_14 [8] [i_2] [i_3]) + var_12))) ? 0 : (35648 / 1))) : (((!(arr_2 [i_2] [i_4] [2])))))))));
                        var_31 = var_11;
                    }
                }
            }
        }
    }
    var_32 ^= max(((var_14 ? ((min(var_7, var_4))) : var_17)), ((((418655868 ? 1073741823 : var_2)) + (1 | 65535))));
    var_33 = (max(((((max(var_10, var_4)) > 0))), ((((-647015553 ? 1 : var_0)) ^ var_14))));
    var_34 = (((var_9 && (((1 ? 1 : var_5))))) ? var_16 : ((min(1, (min(1, var_1))))));
    #pragma endscop
}
