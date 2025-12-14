/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = max((max((arr_0 [i_0]), var_19)), (arr_1 [i_0]));
        var_21 = (-var_4 <= ((min((((arr_1 [i_0]) & var_9)), ((min((arr_0 [i_0]), 20146)))))));
        var_22 = ((var_6 ? (((arr_0 [i_0]) ? var_9 : (arr_0 [i_0]))) : ((118 ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_23 -= ((((((!(arr_1 [i_0]))))) < var_0));
        var_24 &= (((arr_1 [1]) ? (((-(118 * 1340732082)))) : ((var_3 ? var_2 : (((var_2 ? 2954235214 : 824818297)))))));
    }
    var_25 = (min(var_25, ((min(1340732102, (~2954235214))))));
    #pragma endscop
}
