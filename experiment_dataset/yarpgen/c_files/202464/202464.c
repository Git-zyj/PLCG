/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 -= (arr_0 [6]);
        var_13 = ((-((((((arr_0 [i_0]) && (arr_0 [i_0])))) ^ (arr_1 [i_0])))));
    }
    var_14 = (min(var_14, (((var_9 ? ((min((!var_6), (!0)))) : ((-((var_9 ? -104 : -1)))))))));
    #pragma endscop
}
