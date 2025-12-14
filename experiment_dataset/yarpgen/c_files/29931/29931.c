/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [1] &= (((min(12, (arr_0 [i_0] [i_0])))) ? (min(5, 18446744073709551593)) : ((min((arr_1 [i_0]), var_15))));
        var_21 = (((((var_19 ? var_6 : var_17))) ? (((min(var_1, -26740)))) : ((var_8 ? (min(10, var_8)) : ((((-2147483647 - 1) ? var_1 : 255)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((((((arr_3 [i_1]) ? var_12 : 11143032513464366018))) ? (min(4389, (arr_3 [i_1]))) : ((246 ? var_5 : var_19))))) ? ((min((max(var_5, var_13)), (arr_4 [i_1])))) : ((((min(48, var_13))) ? ((((arr_3 [i_1]) ? 1006094744 : 1))) : (min(var_15, var_7))))));
        arr_7 [i_1] = (min(((min(var_11, (arr_5 [i_1] [i_1])))), (max(7303711560245185592, ((max((arr_5 [i_1] [11]), (arr_5 [9] [9]))))))));
        var_22 = (min(((var_13 ? var_14 : 15)), ((((((var_3 ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1])))) ? var_18 : ((((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [11]) : var_19))))))));
        arr_8 [i_1] [i_1] = ((((((((38 ? 1 : (arr_4 [i_1])))) ? (arr_1 [i_1]) : (arr_3 [i_1])))) ? (min(18446744073709551612, var_15)) : ((min((min(1, 7421397488506941523)), ((min((arr_4 [i_1]), (arr_5 [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_23 = ((var_1 ? var_15 : var_11));
        var_24 = (((arr_10 [i_2]) ? 4386 : var_19));
    }
    var_25 = var_14;
    var_26 = (min(((var_13 ? (max(var_1, 412120797)) : (min(var_0, -412120798)))), (((((var_4 ? (-2147483647 - 1) : var_14))) ? var_12 : var_10))));
    #pragma endscop
}
