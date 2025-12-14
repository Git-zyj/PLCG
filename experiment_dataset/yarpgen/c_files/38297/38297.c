/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((max(2047, 3274750991)) > var_6)))) > var_0));
    var_14 = ((1723 ? (min(14648924818485724449, ((11413592365738704932 ? (-32767 - 1) : 18446744073709551615)))) : (~var_10)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((!(0 | 7033151707970846683)));
        var_16 *= ((~(~1)));
    }
    var_17 = ((~(!var_3)));
    #pragma endscop
}
