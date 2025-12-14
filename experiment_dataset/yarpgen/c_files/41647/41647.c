/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_7;
    var_13 ^= ((+((((var_7 > 154) && 1766669336)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((max(0, var_6))) ? -9140364198082096375 : 13593))) && ((((1766669336 > var_7) ? ((var_8 ? 1766669336 : 1877345817)) : 233)))));
        var_14 = var_11;
    }
    #pragma endscop
}
