/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 && 17421899522770871251);
    var_14 = 17421899522770871251;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [10] = -17421899522770871256;
        var_15 = 1024844550938680380;
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        var_16 = ((~(((arr_3 [i_1 - 3] [i_1 - 3]) | var_10))));
        arr_6 [i_1] = (max((((-((1125899906842623 ? -12967 : 3955))))), (max((arr_3 [i_1 - 1] [21]), (arr_5 [i_1 - 1])))));
        var_17 ^= var_2;
    }
    var_18 = 4190293639;
    var_19 |= var_2;
    #pragma endscop
}
