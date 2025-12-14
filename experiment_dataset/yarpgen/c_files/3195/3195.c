/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min(((-((var_9 ? 1851503525 : 1)))), var_6));
    var_13 |= (max(var_7, ((((min(var_6, -1851503515))) ? ((min(48864, 20794))) : var_11))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_6 [1] [i_0] = ((((((arr_3 [i_1 + 4] [i_1] [i_0]) ? var_10 : (arr_4 [i_1 - 2] [i_0])))) ? (((arr_3 [i_1 + 4] [i_1] [i_0]) ? (arr_4 [i_1 - 2] [i_1 + 1]) : var_2)) : ((((arr_3 [i_1 - 2] [i_1 + 1] [i_0]) ? 1 : 65531)))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_2] = ((((max((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1])))) ? var_3 : (min(var_2, (arr_0 [i_2 - 1])))));
                arr_10 [i_1] &= (min(((((((arr_8 [i_0] [3] [i_0] [1]) ? -14 : var_11))) & (((arr_5 [7] [i_1]) ? 5 : (arr_0 [i_2 - 1]))))), ((((~(arr_4 [i_0] [i_0])))))));
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_14 = (max(var_14, ((max(((max(1, 0))), 1)))));
                arr_13 [i_3] = ((((min(-var_3, -var_11))) ? (min((arr_12 [i_1 - 1] [i_3]), (((var_3 ? -34 : (arr_1 [i_3] [i_1])))))) : -1));
            }
        }
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                var_15 -= 56135;
                arr_19 [i_0] [i_0] = (max((min((arr_14 [i_4 + 3] [i_5 + 3]), var_8)), ((((((arr_14 [i_4 + 3] [i_5 + 2]) + 2147483647)) << (arr_1 [i_4 + 3] [i_5 + 3]))))));
                arr_20 [i_0] = ((!(((1 ? var_2 : (arr_15 [i_5 + 3] [i_0]))))));
                var_16 -= ((((((var_9 & var_4) % (((arr_2 [i_5]) ? -79 : (arr_17 [i_5 + 2] [i_4])))))) ? ((((arr_15 [i_0] [i_0]) / ((min(0, -101)))))) : (min((((-(arr_3 [i_0] [i_4] [i_4])))), (min((arr_18 [i_5 + 2] [i_5 + 2] [i_5]), var_2))))));

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_17 += (arr_21 [9] [i_4] [i_5 + 3] [3] [i_0] [i_4]);
                    var_18 = (min(var_18, var_5));
                }
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                var_19 = ((((((arr_17 [i_4 + 3] [i_4 + 1]) + (arr_17 [i_4 - 1] [i_4 + 3])))) ? -var_9 : ((max((arr_22 [i_0] [i_4] [i_7 + 1] [i_7 - 1]), (~var_7))))));
                var_20 -= min((((!((min((arr_21 [i_7] [i_7] [i_4] [i_4] [i_0] [i_0]), var_10)))))), ((-((max((arr_25 [i_0] [i_0] [i_0]), 32))))));
                var_21 = ((11850741915500335375 ^ (((-1 ? ((1 ? (arr_24 [i_4] [i_0]) : 1)) : var_4)))));
            }
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                arr_30 [i_0] [i_0] [i_4] |= 1;
                var_22 = var_2;
            }
            arr_31 [i_0] [i_4] [i_4] = (!1);
        }
        var_23 = (min(var_23, (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_40 [i_0] [i_9] [i_0] [i_0] [i_9] [i_10 + 3] &= (~1);
                        arr_41 [i_0] [i_9] [i_0] [i_10] = ((1 ? 0 : 1));
                    }
                }
            }
        }
        var_24 = (min((((((var_5 ? 1 : (arr_25 [i_0] [i_0] [i_0]))) << (((arr_27 [i_0]) & (arr_1 [i_0] [i_0])))))), var_9));
        arr_42 [i_0] [i_0] = (arr_29 [i_0] [i_0] [i_0]);
    }
    var_25 = var_11;
    #pragma endscop
}
