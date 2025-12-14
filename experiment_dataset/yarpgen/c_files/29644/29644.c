/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((524287 ? ((((((4529161373330330312 ? var_14 : var_1))) ? var_12 : var_9))) : -var_7));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 ^= ((((~(arr_2 [18])))) ? -2104637192 : (((max(524287, var_13)))));
        arr_3 [12] &= ((((4294967279 && (arr_2 [12])))) <= (max((max(63976, 202121224)), var_8)));
    }
    var_21 += ((!(!var_4)));
    #pragma endscop
}
