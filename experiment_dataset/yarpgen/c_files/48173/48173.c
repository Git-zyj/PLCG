/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_2, (var_0 || -36483639)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = ((((-1 ? (-12 * -14) : (((arr_1 [i_0]) ? -14 : 0)))) | ((((var_6 ? 98 : var_3))))));
        var_13 = (min(var_13, ((min(((max(118, (arr_0 [i_0])))), ((var_9 ? 1 : var_2)))))));
        var_14 = (((arr_1 [i_0]) ? ((-115 ? var_1 : -57)) : ((0 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (min(var_15, ((max(((71 ? (arr_4 [i_1]) : var_0)), (arr_2 [14]))))));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_2] = (min(((var_3 ? (arr_5 [i_2] [i_2]) : (~7556376269218000683))), var_6));
            var_16 -= (((((((((var_9 ? -46 : var_1)) + 2147483647)) << ((((((-27441 ? -95 : 0)) + 105)) - 10))))) && ((((arr_5 [i_2 + 1] [i_2 - 1]) ? -272044910 : (arr_5 [i_2 + 1] [i_2 - 1]))))));
            arr_9 [i_1] [i_1] &= (max((min((arr_7 [i_2 - 1] [i_2 - 1]), (arr_7 [i_2 + 2] [2]))), (arr_7 [i_2 + 3] [i_1])));
            var_17 = (((((((((arr_3 [i_2]) ? (arr_7 [i_2] [i_1]) : 27415))) % (((arr_3 [i_1]) ? (arr_2 [i_2]) : var_8))))) ? ((min(123, -3))) : ((1494873901 ? ((var_1 ? (arr_5 [i_2] [i_2]) : var_7)) : ((61 << (-99 + 106)))))));
            arr_10 [i_1] = ((~((252 ? 1 : -96))));
        }
        var_18 = var_8;

        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_19 = (((arr_5 [i_3] [i_1]) ? ((((var_6 ? var_6 : (arr_2 [5]))) / -13)) : ((var_2 ? (((arr_3 [i_1]) * 0)) : var_6))));
            var_20 = (min(var_20, ((((((((min(1, 0))) | (~-1)))) ? (((~3571016034) ? ((~(arr_11 [i_1] [i_1] [i_3]))) : (var_6 & var_7))) : ((~(arr_11 [i_1] [i_1] [i_1]))))))));
            var_21 = ((~(max((115 == -1), var_8))));
            var_22 = var_2;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] [i_4] = (92 ? (((~-16) ? (arr_12 [i_1] [i_4] [i_4]) : 1)) : (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_4]) : (arr_6 [i_4] [i_4]))));
            var_23 = (min(var_23, ((min((((((16 ? (arr_14 [i_1] [i_1] [0]) : 0))) ? (((max((arr_12 [6] [6] [i_4]), (arr_12 [i_1] [6] [i_4]))))) : (min((arr_7 [12] [i_4]), 1028210296)))), ((((~-98) ? 16 : 50))))))));
        }
    }
    #pragma endscop
}
