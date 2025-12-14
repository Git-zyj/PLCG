/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!var_10) ? var_2 : var_9);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (min(var_13, ((~(((!18446744073709551615) % (min((arr_1 [i_0] [i_0]), var_10))))))));
        arr_2 [i_0] = ((((~(arr_1 [i_0] [i_0]))) <= -var_4));
        var_14 ^= (-8 >= 18446744073709551592);
    }
    #pragma endscop
}
