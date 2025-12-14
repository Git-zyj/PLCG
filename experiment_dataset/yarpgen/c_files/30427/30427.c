/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_18 = (max((min((max(65535, 3925219257426041640)), (244 == var_0))), var_6));
        var_19 = (arr_0 [i_0]);
        var_20 = (((36620 >= var_13) < 28263));
    }
    var_21 *= ((max(-var_9, 32)));
    var_22 = var_0;
    #pragma endscop
}
