/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((max(((0 ? 32767 : 1)), (-9 & 1))) & 0);
        var_10 = 61096;
        var_11 = ((((max(9223372036854775807, (max(-6874343027954575396, 19))))) ? (min(18446744073709551615, (48110 ^ -6874343027954575400))) : 745780904));
        var_12 = (max(var_12, ((min(-7600, 4202674118558537383)))));
    }
    var_13 = 27159;
    #pragma endscop
}
