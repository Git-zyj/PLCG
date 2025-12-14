/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (max(var_11, ((((min(((var_0 ? var_9 : (arr_0 [i_0]))), var_9)) & ((((min(64, 1))) ? ((min(var_8, var_5))) : ((-(arr_1 [i_0] [i_0]))))))))));
        arr_3 [i_0] &= var_1;
    }
    var_12 = (~20);
    var_13 = (((((~var_10) > var_0)) ? (((-(var_5 < var_3)))) : (min(((6592009472935283269 ? var_3 : var_2)), var_2))));
    var_14 = 5032520554228992781;
    #pragma endscop
}
