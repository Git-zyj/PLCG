/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((var_12 ? var_11 : var_1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 *= (((max((arr_1 [i_0]), (arr_2 [i_0]))) % (((-(arr_1 [i_0]))))));
        var_17 = (min(var_17, ((((((((min((arr_2 [i_0]), (arr_1 [i_0])))) ? ((-(arr_1 [5]))) : -var_11))) ? var_2 : (((arr_2 [i_0]) ? ((-1807990898728775734 ? (arr_2 [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0]))))))));
        arr_3 [i_0] = ((1 ? (arr_2 [i_0]) : (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [8])))));
        var_18 += max((((var_7 ? var_8 : ((195 + (arr_2 [1])))))), var_1);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_19 = (min(var_19, var_11));
            var_20 &= (arr_6 [i_2]);
            var_21 = (min(var_21, ((((min((arr_7 [i_1] [i_2]), 18098369079562134616)) ^ (arr_7 [i_2] [i_1]))))));
            var_22 ^= (((((-(arr_4 [i_1]))))) ? (((arr_8 [1] [i_2]) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_2] [2]))) : ((var_14 ? ((18446744073709551611 ? (arr_8 [i_1] [0]) : 1)) : (arr_8 [i_1] [i_1]))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            var_23 &= ((((((arr_6 [i_1]) ? (arr_6 [i_3]) : (arr_9 [i_1] [i_1])))) ? 0 : ((var_13 ? (((arr_10 [i_1]) ? (arr_10 [i_1]) : var_7)) : ((var_6 | (arr_10 [15])))))));
            var_24 ^= (min((arr_11 [i_1] [i_1]), (min((arr_7 [i_1] [i_3]), ((-998 ? 4294967295 : 26347))))));
            arr_12 [i_1] &= ((~(arr_8 [i_1] [i_3])));
            arr_13 [i_3] &= var_5;
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            arr_16 [i_1] [i_4] = (min((((var_11 ? (arr_7 [i_1] [i_4]) : (arr_8 [i_1] [i_1])))), (arr_14 [1])));
            arr_17 [i_1] [21] = 1;
            arr_18 [i_1] [3] [i_1] = ((18616 ? ((((max(var_12, 51))) & (arr_9 [i_1] [i_1]))) : (arr_6 [i_1])));
            arr_19 [i_1] [i_4] = var_9;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_25 = (min(var_25, ((((arr_20 [i_1]) >= ((var_14 ? var_2 : (arr_4 [i_5]))))))));
            arr_23 [i_1] [i_1] = (arr_15 [i_1]);
        }
        var_26 = (((((~(arr_5 [i_1])))) / (arr_4 [i_1])));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_26 [i_6] [i_6] = ((!(((((max(var_11, 65531))) ? (arr_20 [11]) : ((((arr_21 [i_6] [15] [i_6]) ? 1 : (arr_25 [i_6])))))))));
        var_27 = (arr_8 [i_6] [i_6]);
        arr_27 [i_6] = (max((min((arr_25 [i_6]), (arr_15 [i_6]))), (arr_21 [i_6] [i_6] [i_6])));
        arr_28 [i_6] = (((arr_8 [i_6] [i_6]) ? (arr_14 [i_6]) : ((((arr_7 [i_6] [3]) ? 1838916929 : (min(-9223372036854775797, 1962095882)))))));
        arr_29 [i_6] [i_6] = (arr_11 [i_6] [i_6]);
    }
    var_28 = (min(var_28, (((177 ? var_7 : ((min(var_6, ((min(233, 70)))))))))));
    #pragma endscop
}
