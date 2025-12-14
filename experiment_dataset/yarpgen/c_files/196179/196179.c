/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (var_8 != (max((18354378619546700167 | 1), var_12)));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_18 += (max((((((arr_1 [2]) ? 1 : 782331985792213320)) ^ ((min((arr_1 [i_0]), (arr_1 [i_0])))))), (((~(max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_19 *= (((arr_0 [i_0 + 1]) ? (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
    }
    var_20 = ((11 ? -8 : ((((((var_13 + 2147483647) >> (-1604258802 + 1604258809)))) ? (max(var_10, var_2)) : (127 > var_5)))));
    var_21 = ((-(!-var_4)));
    #pragma endscop
}
