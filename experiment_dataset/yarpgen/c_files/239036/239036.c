/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((((var_2 || ((min(-8984308891878050212, 4036487630)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = min((arr_0 [i_0]), ((-4036487634 ? 1635594644 : ((258479666 << (6778264113711370823 - 6778264113711370814))))));
        arr_2 [i_0] = (min((arr_1 [i_0]), (3522545677499716783 == var_2)));
        var_17 = 2296097474;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 -= (~11284);
        var_19 += arr_4 [i_1];
    }
    var_20 += var_9;
    #pragma endscop
}
