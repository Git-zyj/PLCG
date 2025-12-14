/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(var_10, var_0) / 234))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_16 += ((-((221 ? 1631378458 : var_9))));
            var_17 = ((((var_9 ? 234 : (arr_2 [i_0] [i_0] [i_0])))));
        }
        var_18 = (((((((arr_4 [i_0]) + 2147483647)) << (((((arr_4 [i_0]) + 1291234620)) - 14)))) <= 22));
    }
    #pragma endscop
}
