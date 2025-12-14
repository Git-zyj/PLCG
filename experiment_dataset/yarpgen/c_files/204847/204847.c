/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((((((28912 ? -28913 : 53809)))) ? (((((93738971 ? -14150 : 28912))) ? (((32767 ? 28915 : 179))) : 93738971)) : ((((!(!93738980)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [19] = (((~204) ? ((48456 ? -32756 : (-127 - 1))) : -1365704033));
        var_12 = (((0 ? 40 : 14150)));
    }
    var_13 = ((!((((((5391 ? 0 : 56264))) ? (~-1365704033) : ((-28913 ? 14146 : 14154)))))));
    #pragma endscop
}
