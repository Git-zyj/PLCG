/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 42494));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = 27591;
        var_21 = ((-8890513289096041275 ? ((37945 ? -3473239375104355827 : 32437)) : (((208 ? -122 : 1)))));
    }
    var_22 = ((27591 ? (!-115) : 64));
    #pragma endscop
}
