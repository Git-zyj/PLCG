/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [5] [1] = (max(10885, ((min((var_6 && 10), var_11)))));
        var_15 = (min(var_15, ((min(var_13, (((!(var_3 > var_9)))))))));
        var_16 = ((((((((~(arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (max(var_1, var_13))))) ? ((((max(1087, var_14))) ? ((var_7 ? var_5 : var_14)) : ((min(var_13, (arr_0 [12] [i_0])))))) : (-var_5 + var_0)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_17 = var_5;
            var_18 += (((((370520606 >> (var_0 - 35)))) ? (~var_1) : ((min((arr_10 [i_1] [i_2 + 2]), (arr_10 [i_1] [i_2]))))));
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            arr_15 [i_1] = (i_1 % 2 == zero) ? (((((((var_1 ^ var_10) ? ((((var_3 <= (arr_13 [11] [i_3] [i_1]))))) : 35184372088831))) ? ((var_10 + (arr_10 [i_3 + 1] [i_1]))) : ((-(((arr_9 [i_1] [i_1]) >> (((arr_14 [i_1] [23]) + 13784))))))))) : (((((((var_1 ^ var_10) ? ((((var_3 <= (arr_13 [11] [i_3] [i_1]))))) : 35184372088831))) ? ((var_10 + (arr_10 [i_3 + 1] [i_1]))) : ((-(((arr_9 [i_1] [i_1]) >> (((((arr_14 [i_1] [23]) + 13784)) - 1677)))))))));
            arr_16 [3] [i_1] [i_3] = (((((10 ? (arr_10 [i_1] [i_3 + 1]) : (arr_14 [i_1] [i_1])))) && (((((arr_11 [i_1] [i_1] [i_3 + 1]) ? 566196279 : var_14))))));
        }
        var_19 = (min(var_19, 3641914081));
    }
    var_20 = var_9;
    #pragma endscop
}
