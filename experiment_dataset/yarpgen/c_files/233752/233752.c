/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((2845700967 * 40490) ? var_11 : ((min(254, var_2))))), (((min(var_2, 0)) ? var_11 : ((var_8 ? 4650 : var_0))))));
    var_20 = ((-1 ? (max(63, 60867)) : (((5 ? 60867 : ((min(var_13, -5))))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_21 = (((((((arr_0 [i_0]) || var_14)) ? var_14 : (((-(arr_0 [i_0])))))) >= ((((arr_1 [i_0 - 1]) * 0)))));
        var_22 = ((((((((1 ? 60867 : (arr_0 [i_0])))) ? (arr_1 [15]) : (arr_1 [i_0 + 1])))) ? (((((var_5 % (arr_1 [i_0])))) ? (arr_0 [i_0 - 2]) : var_12)) : (((var_9 ? ((min((arr_0 [i_0]), (arr_1 [4])))) : -1371686919454515734)))));
        arr_2 [i_0 - 2] [i_0] = (((1 ? var_18 : (arr_0 [i_0]))));
        arr_3 [1] [i_0] = min(((-1 ? (arr_0 [i_0]) : (max((arr_1 [i_0]), (arr_1 [i_0]))))), ((-(18446744073709551615 < 1))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [14] [8] &= (arr_5 [i_1] [i_1]);

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_23 = (min(var_23, ((((arr_6 [i_2 - 2] [i_2 - 2]) ? (arr_6 [i_2 - 2] [i_2 - 2]) : (((arr_6 [i_2 - 2] [i_2 - 3]) ? var_7 : (arr_6 [i_2 + 1] [i_2 + 1]))))))));
            arr_11 [i_2 - 3] [i_1] [i_2] = ((5 != ((-(arr_5 [i_1] [i_1])))));
            var_24 = var_16;
            arr_12 [i_1] = (arr_7 [1]);
            arr_13 [i_1] [i_1] = (min((((((var_10 ? (arr_9 [i_1] [i_1] [i_2]) : var_2))) ? -5668438198340129572 : (arr_5 [i_2] [i_2 - 3]))), -4669));
        }
        arr_14 [i_1] = (max((arr_7 [i_1]), (arr_6 [i_1] [i_1])));
        var_25 = (min((~var_11), 1));
        arr_15 [i_1] = var_4;
    }
    var_26 = 0;
    #pragma endscop
}
