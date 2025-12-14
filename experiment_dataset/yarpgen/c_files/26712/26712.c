/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min((max((min((arr_2 [i_0]), 1191592854)), ((min(2869, var_4))))), (min(((min((arr_0 [i_0]), var_3))), (max((arr_0 [i_0 - 1]), var_15))))));
        var_16 = (min((min((min(var_11, var_14)), (min((arr_1 [i_0]), -16884)))), ((min((max(0, 1)), ((min(1, 1))))))));
        var_17 *= (min((min((max(var_7, (arr_2 [i_0 - 1]))), ((max(1, 1))))), (min((min(var_14, (arr_1 [i_0 - 1]))), ((min(1, 1)))))));
        arr_4 [i_0] = (max((min((max((arr_1 [i_0]), (arr_2 [i_0]))), ((min(var_0, -1225071457))))), ((max((min(1, var_2)), ((min(var_9, var_8))))))));
        arr_5 [i_0] = (min(((min((max(47109, var_9)), (max((arr_0 [i_0 - 1]), 1))))), (min(((max(var_4, -1))), (min((arr_2 [1]), (arr_2 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = (min((max((min(99, var_2)), ((min(var_5, 1))))), (max((min(var_9, -1225071457)), ((max(1, 0)))))));
        arr_8 [i_1] = (min((min((max((arr_6 [i_1] [i_1]), var_10)), ((min(var_7, var_7))))), (min((max(var_12, (arr_1 [i_1]))), ((min(var_13, 0)))))));
        arr_9 [i_1] = (min((max((max(var_12, (arr_7 [3] [i_1]))), (max(1225071484, (arr_7 [i_1] [i_1]))))), (max((min(-1, (arr_6 [i_1] [i_1]))), ((max((arr_0 [i_1]), var_0)))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_19 = (min(((max((min(var_8, (arr_11 [i_2]))), (max(0, var_4))))), (max((min(1, (arr_12 [1]))), ((max(var_8, 1848548357)))))));
        arr_13 [8] [i_2] = (max((min((min((arr_12 [1]), 11566534991747716392)), (min(1, 13569837615662957757)))), ((min((min(-1146, 1)), ((max(var_13, (arr_6 [i_2] [i_2])))))))));
    }
    var_20 = (max((min((min(117, var_15)), ((max(var_5, 1))))), ((max((min(68015619, var_4)), ((min(6, var_4))))))));
    #pragma endscop
}
