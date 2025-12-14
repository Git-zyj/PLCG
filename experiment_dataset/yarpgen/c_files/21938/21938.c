/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(arr_3 [i_0])));
        var_19 *= (((arr_3 [i_0]) >= (((-1874478456 != (arr_3 [i_0]))))));
    }
    var_20 = -var_13;
    var_21 = (max(var_21, (((--4057824637) ? ((((((var_16 + 9223372036854775807) >> (var_13 - 4098436405674953979)))))) : var_16))));
    #pragma endscop
}
