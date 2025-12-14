/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_10 = 5948017102026085034;
        var_11 = (max(var_11, ((max((min((arr_0 [i_0]), 815345682)), var_7)))));
    }
    var_12 = ((var_0 ? var_4 : ((var_7 ? (((var_3 ? 31744 : var_5))) : ((var_6 ? 1 : var_6))))));
    var_13 = (max(var_13, (((var_0 == (max(13583883178747723498, 1)))))));
    #pragma endscop
}
