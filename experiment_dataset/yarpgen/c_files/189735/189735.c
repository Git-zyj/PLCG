/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((var_5 >> (var_17 + 297325002395547133)))) ? ((((12670953541688165208 ? 9321608259944794123 : var_13)))) : ((532676608 ? 137304735744 : 1))));
    var_19 ^= ((((((((1 ? 12670953541688165208 : var_4))) ? var_5 : var_2))) ? (!1252168961) : var_5));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = ((~7545411527078809539) < (!var_15));
        var_21 = (((((((-7545411527078809538 ? (arr_0 [i_0]) : var_12)) + (((!(arr_2 [i_0] [i_0]))))))) && (((-9125135813764757501 ? var_0 : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = 12670953541688165208;
        var_22 = ((((((!18446743936404815846) + (arr_1 [i_0])))) && ((((arr_0 [i_0]) ? (arr_1 [i_0]) : ((1 ? 1 : 137304735754)))))));
    }
    #pragma endscop
}
