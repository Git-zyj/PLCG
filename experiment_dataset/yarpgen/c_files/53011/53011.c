/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((0 ? (((max(33410, 1)))) : var_12))) ? (((((max(-32, 32126)))) ^ (max(var_4, var_7)))) : (((-(0 / var_15))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(((((arr_1 [i_0] [i_0]) ? 243 : 255))), (((30220 ? 12589479132871484078 : var_15)))));
        arr_2 [i_0] = ((+((min((2230 && 34719), ((!(arr_1 [i_0] [18]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_22 = (min(var_22, ((((var_2 > var_17) ? (((-9022018857329261450 ? var_8 : 524287))) : -663018523842449149)))));
        var_23 = 33409;
        var_24 = var_6;
        var_25 = (((13835058055282163712 & var_4) ? 6078798326878534397 : (var_4 ^ 1)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_26 = (max(var_26, (((~(((max((arr_0 [i_2]), -30953)) & (1 | var_6))))))));
        arr_9 [i_2] [i_2] = ((((((!(((var_10 >> (var_4 - 1201024277)))))))) - var_14));
        arr_10 [i_2] = var_3;
        arr_11 [i_2] = min((--4294967295), (arr_7 [i_2]));
    }
    var_27 = ((max((((-6682963195182441080 > (-9223372036854775807 - 1))), 64414))));
    #pragma endscop
}
