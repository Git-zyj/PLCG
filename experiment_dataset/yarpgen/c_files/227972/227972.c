/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 ? var_2 : var_1));
    var_19 = ((var_12 * ((4294967295 ? (5 == 1) : ((0 ? var_10 : var_11))))));
    var_20 = var_14;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((4294967290 ? -1 : 11035));
        var_21 = ((((min((24594 != var_13), (max((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))) ? (arr_1 [i_0]) : ((min(4294967291, (min((arr_3 [i_0]), (arr_0 [i_0] [i_0]))))))));
        var_22 = (min(var_22, (((((((-6763139607167991431 && (arr_3 [i_0])))) << ((var_7 ? 21 : 11035)))) == (arr_2 [i_0] [i_0])))));
    }
    var_23 |= ((var_2 ? (((var_0 - var_5) ? -12921 : (-32739 > var_7))) : ((5 ? var_12 : (3598 ^ 0)))));
    #pragma endscop
}
