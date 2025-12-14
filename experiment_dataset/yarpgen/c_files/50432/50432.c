/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((min(var_8, 32767)));
    var_16 = min(var_6, (max(var_10, (max(3618940113662665325, var_3)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((!((max((!var_5), (arr_0 [i_0]))))));
        var_17 = (~94);
        arr_3 [i_0] = ((-94 < (-var_5 ^ var_10)));
        var_18 = ((-5806600223030448307 ? ((var_9 + (arr_0 [i_0]))) : (((max(1, var_12))))));
    }
    var_19 = var_5;
    #pragma endscop
}
