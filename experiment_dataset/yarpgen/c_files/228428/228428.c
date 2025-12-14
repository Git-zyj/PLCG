/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1 >= var_13);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = ((4617645455814564380 ? 65535 : 1));
        arr_2 [1] = 1;
    }
    var_21 = ((((max((min(var_18, var_8)), -1343563245252763312))) ? var_12 : ((((min(var_3, 4617645455814564380))) ? (var_18 / 1) : 1))));
    #pragma endscop
}
