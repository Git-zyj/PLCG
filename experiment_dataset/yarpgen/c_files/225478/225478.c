/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((+(min((221 + 10), -4)))))));
    var_19 &= (min(10, 4294967295));
    var_20 *= ((((((10 ? -9223372036854775799 : -2139719609874446928))) ? ((115 ? 1 : 0)) : 75)));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_21 = (((((min(4366, 123)))) ? (min(1657453847, ((55628 ? -15 : 2139719609874446916)))) : (((((max(123, 1657453847)) >= -32213))))));
        arr_2 [i_0] [i_0] = (((((59610 ? -32754 : 1657453847))) ? -23678 : (-520 % 3063609411)));
    }
    var_22 = (min(var_22, 219));
    #pragma endscop
}
