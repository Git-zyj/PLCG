/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (1 > 1);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((min((arr_2 [i_0] [i_0]), (((!(arr_2 [i_0] [i_0]))))))) ? ((((!(arr_1 [i_0 + 1]))))) : (((arr_2 [15] [i_0]) ? ((((arr_1 [i_0]) ? 31 : 722858774))) : ((1 ? (arr_1 [i_0]) : 1152358554653425664))))));
        arr_5 [i_0] = ((((min((1 | var_4), (min(var_11, var_9))))) & 0));
        arr_6 [i_0] = var_4;
    }
    var_17 += var_13;
    var_18 += (((((var_3 + var_13) > var_11)) ? var_0 : ((-((var_0 ? -1 : 16))))));
    #pragma endscop
}
