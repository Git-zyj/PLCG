/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((7768 ? 1 : var_9));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 32767;
        var_20 = 65519;
        var_21 = ((min((!1), (!1484952616))));
    }
    var_22 = ((50119 ? 1 : (min(1, ((1837005498 ? 922133382 : 1))))));
    var_23 *= (((((~(~1)))) ? (max(((4294967290 ? 5454 : 63)), ((max(51146, 1))))) : 601));
    #pragma endscop
}
