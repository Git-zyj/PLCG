/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((4294967294 ? ((max((max(35115652612096, -7376679942926259280)), var_4))) : ((2 ? 7913342103296904465 : 35115652612072))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 |= ((((((-8113561052707296634 ? 1 : -3445105931813670661)))) || ((((var_9 >> 2) & 18446744073709551602)))));
        arr_2 [i_0] = ((134217728 ? -4597 : 15));
    }
    #pragma endscop
}
