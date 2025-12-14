/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (min(var_14, (((((var_2 != (arr_0 [i_0]))) || (((var_1 ? 126 : 24273))))))));
        arr_2 [i_0] = ((-(!189)));
        arr_3 [i_0] = 40491;
    }
    var_15 = (min(var_15, (((((-((min(-104, -127))))) >> (var_4 - 9848688546241259038))))));
    #pragma endscop
}
