/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((max(var_1, (min(63887, 4952654078915628569)))));
        var_10 = (min(var_2, (((3408363262 % -8) ? (arr_0 [i_0] [i_0]) : (10818649918758692482 & var_7)))));
    }
    var_11 |= (((-32767 - 1) ? (~0) : ((((max(var_4, 16282139145881522027))) ? (min(2256768240242553827, 14982016145711216730)) : 0))));
    #pragma endscop
}
