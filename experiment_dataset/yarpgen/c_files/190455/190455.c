/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_13 = (max(((-((var_3 ? 32077 : 16864260039249875374)))), ((max(((((arr_1 [i_0 - 1] [i_0]) == var_5))), (var_3 - var_2))))));
        var_14 = (max((~var_2), (((!(((32077 ? 43645 : var_3))))))));
    }
    var_15 = 32096;
    #pragma endscop
}
