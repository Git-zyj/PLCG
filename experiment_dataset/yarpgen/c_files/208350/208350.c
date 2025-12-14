/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min(4294967295, -55)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((10479989824183207123 || 4294967278) ? (min(((min(var_15, 4294967291))), 4294967278)) : (((1198354789 ^ var_0) / var_4))));
        var_20 = (max(var_20, (((((4294967277 ? 8846463569400241789 : -1972737740)) * (((((((-2147483647 - 1) ? var_13 : var_4)) > (((4294967271 ? -10 : 3952970989))))))))))));
    }
    var_21 = ((((((((4294967295 ? 991968652 : 523577868))) ? -10 : var_4))) ? (4294967295 * 0) : var_6));
    #pragma endscop
}
