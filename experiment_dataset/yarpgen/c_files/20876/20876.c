/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_9;
    var_11 = ((var_6 ? (((((max(13462105548688379142, 508291754))) ? (~var_8) : 1))) : var_9));
    var_12 = (max(var_12, (((-(var_7 >= var_0))))));
    var_13 = (min(var_13, (!-var_3)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = var_2;
        var_15 = ((~(((var_6 == ((((arr_1 [i_0] [i_0]) % var_8))))))));
    }
    #pragma endscop
}
