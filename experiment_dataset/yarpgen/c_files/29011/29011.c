/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(~0)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] = ((((!(arr_3 [i_0]))) || ((min(8590053197089834241, -13770)))));
    }
    var_19 = (max((var_3 / -3667918745460402644), ((((1 * 1) ? var_10 : (1 * -120))))));
    var_20 *= ((-((min(var_7, var_12)))));
    #pragma endscop
}
