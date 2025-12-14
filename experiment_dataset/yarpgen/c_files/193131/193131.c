/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (min(var_1, var_13));
    var_15 = ((-14082 ? 17676193484822993461 : 15));
    var_16 = var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = 2061802725;
        var_18 = (((((var_2 ? 3281158191515339954 : -961)) & var_5)));
        var_19 = (max(((min(var_12, 1163149543))), (239 | 770550588886558155)));
        var_20 = (min((min(15264630476345496396, (-990 != 1))), ((((var_0 || (arr_0 [i_0]))) ? (((-2061802726 ? 2024449133 : 4294967278))) : ((43408 & (arr_1 [i_0])))))));
        var_21 = (arr_0 [i_0]);
    }
    #pragma endscop
}
