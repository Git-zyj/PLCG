/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((6340049739577661290 ? -3509788138908619708 : -17707))) && ((((((-19842 ? 1 : 6074198203573263229))) ? var_4 : (arr_0 [i_0]))))));
        var_14 = max(var_4, (-3723602576173642431 <= -6340049739577661291));
    }
    var_15 = ((19824 >> (-2936485868244547831 + 2936485868244547844)));
    var_16 = -var_6;
    #pragma endscop
}
