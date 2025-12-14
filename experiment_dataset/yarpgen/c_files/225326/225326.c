/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((((min(var_10, -var_6)) + 9223372036854775807)) >> (((min(var_2, var_4)) - 8807))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(-20312, (min((!-8746676141195636352), 2))));
        arr_3 [i_0] [i_0] = 3912821872855195131;
    }
    var_18 = (min((var_10 ^ var_1), ((-23739 ? (min(1483051779546371272, var_10)) : 1))));
    #pragma endscop
}
