/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((((max(var_0, var_16)))) ? (var_13 > var_7) : ((-71 ? 9 : 159)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((-111 ? -63 : 1785554131));
        arr_4 [i_0] [i_0] = (901357683617627124 || 5466331441934492239);
    }
    var_20 &= (max(((10 ? ((-13020 ? 9 : 1300476303)) : 1)), 239));
    #pragma endscop
}
