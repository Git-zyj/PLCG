/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_13 >> (((max(((0 ? var_13 : var_13)), var_1)) - 7768253551975827020)));
    var_18 = var_15;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_19 = (1 < 8261710519670786789);
        var_20 += ((18446744073709551596 ? 109 : 146));
    }
    var_21 = ((!(((~(129 != 63))))));
    #pragma endscop
}
