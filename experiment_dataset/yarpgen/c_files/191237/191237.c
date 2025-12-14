/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((max(var_10, var_9))) ? var_10 : ((var_8 ? var_1 : var_1))))) ? (((((max(var_3, var_4)) <= 42)))) : (min(var_4, (var_4 || var_6)))));
    var_15 = 255;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] = (max((((0 << (((arr_10 [i_4 - 4] [i_4 - 4] [i_4 - 4] [i_4] [i_4 - 2] [0]) + 1748276258))))), (arr_2 [i_1] [i_2])));
                                var_16 -= var_13;
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] = 240;

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_17 = ((((arr_4 [i_5]) / (arr_4 [i_0]))));
                        var_18 = (1 || 1);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_19 = (((min((240 || 255), ((255 ? -24894 : 26669)))) > ((((((arr_11 [i_1] [i_2] [i_7]) > 15))) - ((((arr_5 [i_0] [i_0] [i_0]) || var_13)))))));
                                var_20 = (max(-91, 1));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [i_2] = (arr_6 [i_0] [i_0]);
                }

                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    var_21 *= ((((max((-26692 || var_12), ((239 ? 0 : -1))))) ? 0 : (min(var_1, (arr_15 [i_0] [i_1] [i_1] [i_0])))));
                    var_22 = (min((((-(arr_9 [i_0] [i_1] [i_8 + 3] [i_1])))), var_13));
                    var_23 = (max(var_23, ((((min((max(14884190775791699816, 0)), (arr_15 [i_8] [i_1] [i_1] [i_0]))) <= (((((max(108, 13)))) | (min((arr_1 [i_1]), var_13)))))))));
                }
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    arr_27 [i_0] [i_1] [i_9] = (max(((~(arr_11 [i_0] [i_9] [i_0]))), ((((arr_17 [i_0] [i_9 + 1] [i_9 + 1]) <= (arr_11 [i_0] [i_9] [i_9]))))));
                    var_24 = (min(var_2, (min((arr_16 [i_9 - 1] [i_1] [i_9] [i_0] [i_1]), (arr_15 [i_9 + 1] [i_1] [i_9] [i_9])))));
                    arr_28 [i_0] [i_1] [i_9] [i_9] = (((arr_17 [i_0] [i_1] [i_9 + 1]) ? (((arr_17 [18] [i_1] [i_1]) - 1073741824)) : (arr_17 [i_0] [i_0] [i_0])));

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_31 [9] [i_1] [i_1] [i_9] = (max((min((arr_7 [i_1] [i_9 - 1] [i_9 - 1]), ((min(-16937, 26658))))), ((168 ? (arr_7 [3] [i_1] [i_9]) : 26680))));
                        var_25 *= (((!var_2) / (min((arr_30 [i_9 + 1] [i_9] [i_10] [8]), (arr_29 [9] [i_1] [i_9 - 2] [i_1] [i_1] [i_0])))));
                        var_26 *= (arr_29 [i_0] [i_1] [i_9] [i_9] [i_10] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_27 -= (min((min((var_6 / var_7), var_10)), ((((((4294967295 || (arr_17 [8] [8] [i_0])))) * (!var_10))))));
                        var_28 -= 255;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_29 += ((!(arr_3 [i_0] [9] [6])));
                        var_30 = (((((-(arr_3 [i_9 - 1] [i_1] [i_1])))) ? (((((max(var_5, 4053901182))) || (arr_29 [i_12] [i_1] [i_9 + 1] [i_12] [i_12] [i_1])))) : (-11543 | -9)));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_9] [i_0] [i_0] = ((var_1 ? (max(-92, 4053901182)) : ((max(-11, ((1 ? var_0 : 6789)))))));
                        var_31 = (((((-(arr_16 [i_9] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1])))) || (((arr_16 [i_9] [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 + 1]) || (arr_16 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                {
                    arr_51 [i_14] [i_15] [i_16] [i_14] = 4294967290;
                    var_32 = (min(var_32, (arr_15 [i_14] [i_15] [i_14] [i_15])));
                }
            }
        }
    }
    var_33 = (((((var_7 / 3221225471) ? var_8 : 30989))) ? ((((var_6 || var_9) ? var_13 : -30834))) : ((var_12 ? ((var_8 ? 116 : var_6)) : (4267234922 % var_0))));
    #pragma endscop
}
