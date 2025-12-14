/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((4825769008672472827 >= (((31 + 4825769008672472827) ? var_11 : -8587455890867767733))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_20 = ((((((arr_0 [i_0 - 3] [i_0 + 1]) > var_7))) >= -31942));
        arr_3 [i_0 + 2] [i_0] = (max((((var_7 ? (arr_1 [i_0]) : var_12))), ((max(((((arr_1 [i_0]) != var_18))), (arr_2 [i_0]))))));
    }
    #pragma endscop
}
