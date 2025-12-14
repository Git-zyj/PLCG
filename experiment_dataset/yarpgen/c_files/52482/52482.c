/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (((111578503 / var_3) / ((((arr_0 [i_0 - 3]) | (arr_0 [i_0 - 2]))))));
        var_17 = 25;
        var_18 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [0] [i_1] = (arr_5 [i_1]);
        var_19 = ((((((arr_5 [i_1]) + (!1)))) ? (((-(((25 != (arr_4 [i_1]))))))) : 2994496304));
        var_20 = (min(var_20, -var_4));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 = (min((min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))), (((~(arr_7 [i_2]))))));
        var_22 *= (arr_7 [6]);
        var_23 = ((-((var_10 ? 25 : (arr_7 [i_2])))));
    }

    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (((((+((max((arr_7 [i_3]), (arr_4 [i_3]))))))) ? ((((((arr_10 [i_3]) ? (arr_7 [i_3 + 2]) : var_9))) ? ((17 ? (arr_9 [i_3]) : 22)) : ((min(var_15, var_13))))) : (((-((-18618 ? var_16 : var_8)))))));
        var_24 *= var_15;
        var_25 = (max(((((((var_0 ? var_7 : (arr_4 [i_3])))) ? (arr_9 [i_3 - 1]) : (arr_7 [i_3 + 3])))), ((-6 ? (arr_5 [i_3 + 2]) : (min(var_3, var_0))))));
        var_26 &= (min(((max((arr_4 [i_3 - 1]), ((var_0 ? var_6 : var_11))))), (arr_5 [i_3])));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_15 [i_3 + 3] [i_3 + 1] [i_3] = (arr_5 [i_4]);
            arr_16 [i_4] [i_4] [i_3 - 1] = (max((arr_10 [i_3 - 1]), (min(var_16, var_11))));
        }
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            arr_19 [i_3] [i_5] = (!10);
            var_27 = (max(((((((arr_13 [i_5 - 1]) % -5316)) & ((1211472372 ? (arr_10 [i_5 - 1]) : 536870911))))), (((arr_8 [i_5 - 1] [1]) ? (arr_4 [i_5]) : ((10 >> (var_4 - 280796807)))))));
            arr_20 [i_5] = (max(((max(var_2, (arr_13 [i_3 - 1])))), (max((max(18446744073709551590, 25)), (((469359116901232799 ? (arr_17 [i_5 + 2]) : 645169056)))))));
            var_28 *= arr_13 [13];
            arr_21 [i_5 - 1] = ((-(min((min(18617, (arr_13 [i_3]))), 2921093696))));
        }
    }
    var_29 -= -33;
    #pragma endscop
}
