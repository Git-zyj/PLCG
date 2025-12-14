/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((((min(32767, 182)) & (((2424605973 << (1870361321 - 1870361293)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 |= ((((((arr_3 [i_0]) > ((var_12 ? (arr_0 [6]) : 2424605960))))) != (((((min(4, (arr_0 [i_0])))) || ((min(var_9, (arr_2 [i_0] [i_0])))))))));
        arr_4 [i_0] = (min(((((((249858509 - (arr_3 [i_0])))) ? ((var_17 ? var_5 : var_13)) : var_18))), (((((5089 ? var_4 : 3112908763313751848))) ? (var_17 / -3112908763313751838) : var_11))));
    }
    #pragma endscop
}
