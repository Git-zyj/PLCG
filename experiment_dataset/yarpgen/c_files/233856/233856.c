/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = (max((arr_2 [20] [1] [13]), ((+((var_12 ? (arr_3 [i_1]) : 2162717774393747065))))));
            var_16 = (min(var_16, (((4294967295 ? ((min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2])))) : (arr_1 [2]))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [6] = (min((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))), (arr_3 [8])));
            arr_9 [i_2] [16] = (min((max(((var_7 ? (arr_1 [16]) : var_12)), var_5)), ((max(((min(var_4, (arr_6 [5] [5])))), ((32767 ? 32767 : 4294967295)))))));
            var_17 += (arr_3 [i_2]);
        }

        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            arr_12 [17] = ((var_9 ? (((arr_4 [21] [i_0 - 1] [i_3 + 1]) ? ((((!(arr_7 [i_3]))))) : (((arr_2 [19] [4] [4]) % var_9)))) : (((((arr_5 [1] [1]) && ((((arr_10 [i_3]) + (arr_1 [10]))))))))));
            arr_13 [12] [i_0] [i_0] |= (((max((arr_3 [i_0 - 2]), (arr_3 [i_3 + 3]))) ? (arr_3 [i_3 + 3]) : var_4));
            arr_14 [i_3] = (((((arr_10 [i_3 - 3]) ? (arr_10 [i_3 - 3]) : (arr_10 [i_3 - 1]))) ^ (max((arr_10 [i_3 + 3]), (arr_10 [i_3 + 1])))));
        }
        arr_15 [6] [0] = ((((max(var_13, (arr_1 [i_0 + 1])))) + ((-(arr_1 [i_0 + 1])))));
        var_18 = (min((max(((min((arr_4 [1] [7] [2]), (arr_3 [5])))), var_12)), (min((min((arr_2 [1] [1] [1]), (arr_1 [11]))), var_6))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_19 = var_9;
        arr_18 [6] = ((var_11 ? (((arr_1 [i_4]) * (((arr_5 [3] [16]) ? 4294967295 : (arr_5 [i_4] [11]))))) : ((((var_1 <= (((arr_3 [13]) ? var_12 : (arr_1 [12])))))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_20 = ((4294967295 + (min((min((arr_2 [i_5] [i_5] [13]), (arr_7 [i_5]))), (var_10 + var_8)))));
        var_21 = ((-((((min(var_14, (arr_7 [i_5])))) - (max(var_3, var_7))))));
        arr_21 [19] [i_5] = var_11;
    }
    var_22 -= var_2;

    for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_23 = ((!(((max(var_0, 1733697293419842992)) != (arr_7 [10])))));
        var_24 *= var_10;
        arr_25 [i_6] = (arr_2 [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = (max(((1 ? ((min(32767, 32767))) : (-2147483647 - 1))), (arr_7 [1])));
        var_25 = ((((max((((-1 ? var_0 : (arr_4 [i_7] [i_7] [i_7])))), (arr_2 [i_7] [i_7] [7])))) ? (((((var_13 ? (arr_26 [4] [4]) : (arr_23 [i_7])))) ? ((min(var_0, 127))) : (arr_5 [i_7 - 1] [i_7 - 1]))) : ((~(!var_9)))));
    }
    #pragma endscop
}
