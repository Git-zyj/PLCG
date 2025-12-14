/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_9);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((((min((min(9, (-32767 - 1))), (arr_0 [i_0])))) ? (~32767) : ((((-114 | var_0) != ((((!(arr_0 [i_0]))))))))));
        var_17 = ((-32767 ? 16384 : -112));
        var_18 = min(((((((arr_0 [i_0]) + 2147483647)) >> var_8))), ((-32757 ? (arr_0 [i_0]) : var_0)));
    }
    #pragma endscop
}
