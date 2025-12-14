/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (var_1 ? 0 : (min(((var_7 ? 15939430725523435711 : -11637)), (~var_16))));
    var_19 = 32756;
    var_20 = (min((max(-var_4, -27021)), 15));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (max(18446744073709551588, ((((var_11 - var_11) + -32753)))));
        arr_3 [i_0] = (max(15939430725523435717, ((((arr_0 [i_0 + 1] [i_0 + 1]) < ((-32755 ? 32739 : -32755)))))));
        arr_4 [i_0 - 2] = 32748;
        arr_5 [i_0] [i_0 + 1] = (arr_0 [i_0] [i_0 - 2]);
    }
    #pragma endscop
}
