/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (i_0 % 2 == zero) ? (((((((5 || var_4) >> (((arr_3 [i_0] [i_1 - 1] [i_0]) - 6723))))) ? (((((arr_0 [i_0] [i_0]) && ((min((arr_3 [5] [i_1 + 1] [i_0]), 281493822))))))) : ((-(min(35950, var_8))))))) : (((((((5 || var_4) >> (((((arr_3 [i_0] [i_1 - 1] [i_0]) - 6723)) - 17165))))) ? (((((arr_0 [i_0] [i_0]) && ((min((arr_3 [5] [i_1 + 1] [i_0]), 281493822))))))) : ((-(min(35950, var_8)))))));
                var_14 = (min(var_1, ((max(12, (!var_5))))));
                var_15 = var_10;
            }
        }
    }
    var_16 = (min(((var_6 ? var_1 : (min(var_9, var_7)))), (~var_2)));

    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_17 = var_9;
        var_18 = ((!(((min(1, (arr_3 [i_2] [i_2] [2])))))));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_8 [i_2 - 2] [i_3] = (max((((((min(-15478, (arr_2 [i_2 + 1])))) ? ((1 ? (arr_6 [i_2 - 2] [i_2] [i_2]) : (arr_1 [i_2]))) : (arr_2 [i_3])))), ((((min(0, var_10))) + ((1 - (arr_7 [i_2] [i_2 + 1])))))));
            var_19 = (arr_7 [i_2] [i_3]);
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_20 = min(1685930346, 66);
            var_21 = (((((var_8 ? (((var_12 ? var_3 : (arr_5 [i_4 - 1])))) : (max(var_11, (arr_0 [i_2 - 4] [i_4])))))) || ((!(arr_3 [i_2 - 4] [i_4 - 1] [i_4])))));
        }
        /* vectorizable */
        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            var_22 = var_8;
            var_23 |= (((!1) ? ((var_6 | (arr_10 [10] [10]))) : var_2));
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_24 = ((((975655061799467640 == (~1))) ? ((991602447 ? (arr_13 [i_6] [i_6]) : 2147483645)) : -1));
        var_25 = (max(var_25, (arr_1 [i_6])));
        arr_16 [i_6] &= (((((65526 ? ((-(arr_14 [i_6]))) : ((((arr_0 [i_6] [i_6]) && 1)))))) ? 1 : (((arr_14 [i_6]) ? ((((arr_1 [i_6]) && 255))) : 1))));
    }
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        var_26 += ((((min(34391, 1))) ? 0 : (~1)));
        var_27 = 8;
        var_28 = var_7;
    }
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        var_29 += ((~(((((5965884169843593161 ? -12456 : (arr_20 [i_8 - 1] [i_8])))) ? var_8 : (max(var_1, var_9))))));
        var_30 = ((!((max(1, var_1)))));
    }
    #pragma endscop
}
