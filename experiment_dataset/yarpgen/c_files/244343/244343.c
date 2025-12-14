/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_7 ? 4294967295 : var_12))) - var_2));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0 - 1] = ((64204 ? (-127 - 1) : (((var_2 < (~134143222))))));
        arr_4 [i_0] [i_0 - 2] = ((255 ? (arr_0 [i_0]) : ((((min(46, var_11))) ? var_10 : 3552840305))));
    }
    var_16 = (~-209);
    #pragma endscop
}
