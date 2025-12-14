/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((var_3 ? (min(var_12, var_0)) : ((44229 ? var_6 : var_11)))), ((-16194 ? -var_7 : ((var_3 ? var_3 : var_12))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_14 = (min(var_14, (((((49342 ? (arr_3 [i_0] [i_0] [i_1 - 1]) : var_0))) ? ((18499 ? 2305843009213689856 : 16201)) : ((((arr_0 [i_1 - 1] [10]) ? var_6 : 18499)))))));
            var_15 = (((~36407) ? ((var_5 ? var_0 : -1219168938)) : (((arr_0 [12] [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_1] [i_0])))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_16 += (((-((~(arr_1 [6]))))));
            var_17 = (min(var_11, ((((((arr_0 [i_0] [i_0]) ? var_7 : (arr_5 [i_0] [i_0])))) ? ((min(47037, (arr_1 [i_0])))) : (((arr_6 [i_2] [i_2]) ? var_8 : 16211))))));
            var_18 = (min(((-((min((arr_2 [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_2])))))), (max((min((arr_5 [i_0] [i_0]), var_6)), ((~(arr_5 [i_0] [i_0])))))));
            var_19 = (((((+(min((arr_3 [i_0] [i_0] [2]), var_1))))) ? ((~((min(18499, 0))))) : (min(((min(var_10, var_6))), (min(var_12, 127))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_20 = (((((~(arr_10 [i_3] [i_0])))) ? (((arr_2 [i_0] [i_0]) ? var_5 : (arr_9 [11]))) : ((49334 ? var_5 : (arr_9 [0])))));
            var_21 = ((((!(arr_3 [i_3] [i_3] [i_0]))) ? ((var_4 ? 1040187392 : (arr_6 [i_3] [6]))) : ((-15654641181591213 ? var_12 : (arr_9 [3])))));
            arr_11 [i_0] = (((((var_8 ? -2444338700199921948 : 1219168937))) ? (((arr_8 [i_3] [3] [5]) ? var_11 : (arr_5 [i_0] [i_3]))) : ((33005 ? (arr_9 [i_0]) : -55))));

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                var_22 = (~-18);
                var_23 = (((arr_4 [i_0]) ? (arr_3 [i_0] [i_3] [i_4]) : ((-(arr_0 [7] [5])))));
                var_24 = (((!-4711278209043622499) ? (~var_7) : ((var_4 ? var_4 : var_12))));
            }
        }
        var_25 ^= min((min(((min(var_4, var_2))), (((arr_10 [i_0] [8]) ? (arr_8 [i_0] [i_0] [i_0]) : var_2)))), ((min(((-(arr_2 [i_0] [4]))), (arr_10 [i_0] [8])))));
        var_26 = (min((min((min(var_3, var_1)), ((var_12 ? 15 : (arr_0 [i_0] [i_0]))))), (((!((max(var_10, 32530))))))));
        var_27 = (min(((min(((6527 ? var_4 : (arr_1 [i_0]))), ((min(var_6, var_4)))))), ((~(max(-4711278209043622484, -47))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_28 = (min(var_28, ((min((((!34) ? (min(32997, 72057594037665792)) : ((((arr_7 [i_5] [12]) ? (arr_3 [i_5] [i_5] [9]) : 48519))))), ((max(-var_2, ((~(arr_9 [i_5])))))))))));
        var_29 = (max(((-(max(-4797590499248983729, var_12)))), (((((min(var_9, 18502))) ? (max((arr_14 [i_5]), var_12)) : ((min((arr_7 [10] [10]), var_5))))))));
        var_30 = ((((min(((min(var_0, 32541))), (max(var_11, (arr_13 [4] [i_5] [12] [4])))))) ? ((min((max((arr_5 [12] [12]), var_12)), ((~(arr_12 [8] [8])))))) : (min(((min(var_8, var_12))), (((arr_10 [4] [4]) ? var_9 : (arr_13 [8] [i_5] [i_5] [i_5])))))));
    }
    var_31 = (max(var_31, (((!((min((max(var_8, var_11)), 106))))))));
    #pragma endscop
}
