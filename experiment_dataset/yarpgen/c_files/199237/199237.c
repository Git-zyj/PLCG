/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min(((var_2 && ((min(var_15, var_14))))), ((var_7 || (var_8 <= var_6))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = -723492778;
        var_18 = arr_2 [i_0] [i_0];

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] = var_11;
            var_19 = arr_5 [i_0];
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_20 = (min(var_20, (arr_15 [i_3] [i_4])));
                        var_21 = (arr_6 [i_0] [i_2]);

                        for (int i_5 = 4; i_5 < 18;i_5 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_4] [i_5] = var_1;
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_5] = 682672950;
                            var_22 = (max(var_22, (((min(((min(3555, (arr_17 [i_4]))), 127)))))));
                            var_23 = (var_0 ? ((min((arr_5 [i_5 - 4]), var_6))) : (arr_14 [i_0] [i_2] [i_3] [i_4] [i_5]));
                            var_24 = (min((arr_6 [i_5 - 3] [i_3]), var_5));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0] = (min(((-(((arr_19 [i_0] [10] [10] [i_0] [10] [i_6] [i_6]) / 3559)))), (((!var_2) ? (153 == 40689) : (723492770 != 248)))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [11] [i_0] [i_0] = ((-723492778 ? (arr_2 [i_0] [i_0]) : var_13));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_25 = (((min((~-45588564), (min(877306342, 65528)))) * 1969645253));
                            var_26 = (max(var_26, -2147483647));
                            var_27 = (max(var_27, (arr_4 [i_4])));
                        }
                    }
                }
            }
            var_28 = (11888278940149688790 && 3555);
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_29 = 1377879597;
            arr_33 [i_0] [i_0] = (arr_16 [4] [i_8]);
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_37 [i_9] [i_9] = ((((((arr_34 [i_9] [i_9]) ? (arr_34 [i_9] [i_9]) : (arr_35 [1])))) ? (((((arr_34 [i_9] [i_9]) || 3655)))) : 1309657105587738095));
        arr_38 [i_9] = (((arr_34 [i_9] [i_9]) == var_7));
        var_30 -= arr_34 [i_9] [i_9];
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_41 [i_10] = (((arr_39 [i_10]) ? (6 >= 4032) : (min(((1944586703 ? 58918 : 6618)), (((arr_35 [i_10]) * 65531))))));
        arr_42 [i_10] = 24290;
    }
    var_31 = (min((min(18435, -2448)), (270754974 || var_10)));
    #pragma endscop
}
