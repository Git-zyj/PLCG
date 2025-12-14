/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 1));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 + 3] [i_0 + 4] = 18446744073709551615;
        var_12 = (max((max(35184372088832, (arr_0 [i_0 + 3]))), ((max((arr_0 [i_0 - 1]), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 = ((((((arr_4 [i_1]) ? 122 : (arr_4 [i_1])))) ? (arr_4 [i_1]) : ((38487 ? var_5 : (arr_4 [i_1])))));
        arr_5 [i_1] = ((-0 >= ((((arr_3 [i_1]) > (max((arr_3 [i_1]), 18446744073709551611)))))));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_14 = ((((((arr_3 [i_2 + 2]) ? (arr_3 [i_2 + 1]) : (arr_3 [i_2 + 2])))) ? (((arr_3 [i_2]) ? (((((arr_6 [i_2]) < 4)))) : (arr_3 [i_2 - 2]))) : 33964));
        arr_8 [i_2] = ((var_6 ? ((((4 > (arr_6 [i_2 + 2]))))) : ((-(arr_3 [i_2])))));
        arr_9 [6] = ((((min((arr_3 [i_2]), ((18446744073709551615 ? 12 : 2097151))))) ? ((((3984207019192137144 ? 1 : 1)) ^ -0)) : ((4294443008 ? (arr_7 [i_2 + 2]) : (arr_7 [i_2 - 2])))));
    }
    var_15 = var_6;
    #pragma endscop
}
