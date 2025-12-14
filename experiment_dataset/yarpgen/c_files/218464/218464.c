/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(var_17, ((((((3700551982 ? (-9223372036854775807 - 1) : (((1702302894 ? -4 : 594415313)))))) ? ((((arr_3 [i_0]) ? -1069206707 : (arr_3 [i_0])))) : var_10)))));
        var_18 = (min(var_18, (((!((min(-1910880400, 8983))))))));
        arr_4 [i_0] [i_0] |= -724701640;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (~(((!(((~(arr_0 [i_1] [i_1]))))))));
        var_19 *= ((-(arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((((((var_14 ? 12 : (arr_0 [i_2] [i_2]))) == (arr_6 [i_2]))) || ((((arr_6 [5]) + (arr_0 [i_2] [i_2]))))));
        var_20 = (max((((-9223372036854775807 - 1) | 3700551981)), ((((arr_2 [10] [i_2]) >> (((arr_6 [i_2]) - 2657755087591834609)))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((((max((arr_3 [i_3]), (arr_3 [i_3])))) ? (((max(-73, 53478)))) : ((~(arr_12 [i_3] [i_3]))))))));
        arr_13 [i_3] [i_3] |= 0;
    }
    var_22 += (var_2 && var_2);
    #pragma endscop
}
