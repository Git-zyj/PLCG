/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min((var_9 * var_7), var_1)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = var_5;
        var_12 -= ((~((((((~(arr_0 [i_0])))) || (arr_0 [i_0]))))));
        arr_2 [i_0] = ((~(((max(18014398509481983, var_4)) & ((max(var_0, (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_13 = (((((186 ? 60 : (arr_8 [i_1] [i_1])))) <= 18428729675200069638));
            var_14 = (max(var_14, 524272));
            arr_9 [i_1] [5] = (arr_1 [i_1]);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_14 [12] [8] = var_3;
            var_15 = (max(var_15, var_0));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_17 [i_1] [i_1] [8] = ((-(!186)));
            var_16 ^= min(884907693, (arr_8 [i_1] [i_1]));
            var_17 = (max((((((arr_5 [i_4] [i_1]) ? (arr_12 [i_4] [4]) : (arr_7 [0] [16]))) % -1)), (((-(var_8 * 0))))));
            arr_18 [i_1] [i_4] &= (-581044472 > var_4);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_18 += var_7;
            arr_22 [1] = (max(((max((arr_3 [5] [i_1]), (arr_3 [i_1] [i_1])))), (((arr_10 [i_1]) << (arr_10 [i_1])))));
            var_19 = (min(((!((((arr_12 [i_5] [i_5]) >> (var_1 - 2733)))))), (((((~(arr_4 [i_5])))) && (arr_6 [i_1] [i_5])))));
            arr_23 [i_1] = (((((~((min(184, (arr_7 [i_1] [i_5]))))))) ? (max((((3410059610 ? var_6 : (arr_8 [i_5] [i_1])))), (min(var_9, var_3)))) : (min(var_7, (((arr_7 [18] [i_5]) ^ var_3))))));
            var_20 &= var_6;
        }
        arr_24 [18] [18] = var_1;
        var_21 = ((((((((arr_20 [16] [10] [i_1]) ? (arr_16 [i_1]) : var_9))) ? (~18014398509481983) : ((max((arr_0 [5]), (arr_5 [i_1] [i_1]))))))) ? (~var_8) : ((min((arr_1 [i_1]), (arr_1 [i_1])))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] = var_1;
        var_22 = ((((min((arr_16 [i_6]), (arr_16 [i_6]))) + 2147483647)) << (524259 - 524259));

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_23 *= ((!((min(17459483658151375762, (arr_5 [i_7] [i_6]))))));
            var_24 = (max(var_24, (((((((13305717973594784159 > (9705 / 3410059626))))) + (-9223372036854775807 - 1))))));
            arr_31 [i_7] = arr_30 [i_7] [2];
            arr_32 [13] [13] [i_6] = var_0;
        }
        arr_33 [i_6] = (max(2934797444, -69));
    }
    var_25 = (max(18014398509481983, ((((!48) != ((3131597267 >> (18428729675200069658 - 18428729675200069636))))))));
    #pragma endscop
}
