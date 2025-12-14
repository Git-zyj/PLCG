/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = var_12;
        var_16 = (((0 ? var_2 : (-32767 - 1))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_17 = var_11;

        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
            {
                var_18 ^= (((arr_5 [i_1]) ? var_13 : (((arr_11 [i_3] [i_3] [i_3 + 2] [i_1]) ? 33554431 : (arr_4 [i_1] [16])))));
                arr_14 [i_1] [i_1] [i_3] [i_2] = (~4261412865);
            }
            for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
            {
                arr_19 [i_2] [i_2] [i_1] [12] = (((-32767 - 1) / -1322725543587641504));
                var_19 = (max(var_19, var_12));
                var_20 = 8882;
            }

            for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
            {
                arr_23 [i_2] [i_2] [13] = ((((((max(56169, 40061))))) ? (((((var_10 ? 504 : var_12))) ? 7339508252601017887 : ((((arr_16 [i_2] [i_2] [i_1]) ? (arr_20 [i_1] [i_1] [i_1]) : var_12))))) : (arr_4 [i_2] [i_2])));
                arr_24 [i_2] = -109874555;
                arr_25 [i_2] [i_2] [i_2] [i_2] = ((~((((min(var_8, 789467290119522184)) < 50510)))));
                var_21 = var_10;
                arr_26 [13] [i_2] [i_2] [i_1] = var_2;
            }
            for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
            {
                var_22 = (min(var_22, ((max((((6 ? 673387585 : -76))), (965363846 - -var_3))))));
                arr_29 [i_1] [i_1] [i_2] [i_1] = (((((-(arr_22 [i_2])))) ? (max((arr_22 [i_2]), (arr_13 [i_6 - 2] [i_6 - 2]))) : (~33554416)));
                arr_30 [i_1] [i_2] [i_6] = (arr_13 [i_2] [i_2]);
            }
            arr_31 [i_2] = (max(var_7, (((((1 ? 644360124 : 15440))) ? (((var_5 ? (arr_9 [i_1] [i_1]) : (arr_5 [i_2])))) : (var_12 * 65023)))));
            var_23 = (((((~(arr_9 [i_1] [i_2])))) ? ((max(var_7, (((arr_21 [i_2]) ? (arr_17 [i_1] [i_1] [i_2] [i_1]) : var_13))))) : ((var_3 ? var_4 : (((var_2 << (((arr_8 [i_2]) - 15514300919763273159)))))))));
            arr_32 [i_2] [i_2] = ((((min((arr_9 [i_1] [2]), (arr_17 [i_1] [i_1] [i_2] [i_1])))) ? (((((max(4193280, 33554444))) ? (arr_17 [18] [i_2] [i_2] [i_2]) : (arr_5 [i_1])))) : (max((4294967291 - -7339508252601017888), (arr_28 [i_2])))));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {
            arr_36 [i_7] = (min(((((arr_12 [i_1] [i_7] [i_7] [i_7]) ? (32768 - var_10) : var_13))), (((arr_7 [i_7] [i_7]) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : ((max((arr_33 [i_1]), 4193280)))))));
            var_24 = var_12;
            arr_37 [i_7] [i_7] = (((min(var_5, ((~(arr_10 [i_1] [i_1] [i_1] [i_1])))))) ? (arr_4 [i_7] [i_7]) : (min((((arr_22 [i_7]) >> (var_1 - 2816898911536849203))), var_13)));
            arr_38 [i_7] = ((((((((-4477579799366130847 ? var_10 : -7339508252601017906))) ? (max(5, 843176085)) : (((-(arr_18 [i_7]))))))) ? (arr_6 [i_7]) : -477864239));
            arr_39 [i_7] = (((max(var_8, (((arr_7 [i_7] [i_7]) ? 15026 : 0))))) ? (arr_5 [i_1]) : (max((~7339508252601017883), (min(var_3, 7339508252601017898)))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_25 = (arr_27 [i_8] [i_8] [i_8]);
            var_26 = (((arr_40 [i_8] [i_8]) > (((!(arr_4 [i_8] [i_8]))))));
            var_27 ^= (((5 ? var_8 : (arr_18 [i_1]))));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_28 = (min((min(var_3, 18981)), ((((var_13 ? 61357 : 2147483647))))));
            var_29 ^= (17 ? -7339508252601017936 : 17670675542334708963);
            var_30 = (max(var_30, ((min(((max((arr_15 [i_1] [i_1] [i_1]), (arr_9 [8] [i_9])))), (arr_12 [i_9] [20] [i_9] [i_9]))))));
        }
        var_31 ^= ((~(((-109874555 > var_1) >> (((arr_6 [i_1]) - 2923015913))))));
    }
    #pragma endscop
}
