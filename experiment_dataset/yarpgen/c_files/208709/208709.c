/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((913653447 != var_6) ? (~var_18) : var_12))) ? ((max(18446744073709551615, (!13137514213867394)))) : ((var_10 | (max(var_2, var_4))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 |= 18446744073709551615;
        var_21 = (min(var_21, (((-((((arr_0 [i_0] [1]) != (14217 || var_17)))))))));
        var_22 = (((!-110) >> (((max(1, -var_8)) - 3354502304))));
    }
    #pragma endscop
}
