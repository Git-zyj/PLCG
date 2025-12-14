/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(50, 6429875906787809385)) - 3520770129)));
    var_18 &= min((max(1487839084, -9223372036854775790)), (50836 / 34223));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_19 = ((~(min(((36 ? 13 : var_7)), 41456))));
        var_20 = 62;
        var_21 |= ((~((1073741823 ? (~14336) : (((var_16 == (arr_0 [i_0]))))))));
    }
    #pragma endscop
}
