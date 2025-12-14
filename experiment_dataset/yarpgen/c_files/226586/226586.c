/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_16;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = 2937;
        var_18 += ((((((162 >> (1126933001 - 1126933001))))) / ((-(arr_1 [i_0])))));
    }
    var_19 |= (((~var_2) ? 220 : 8257536));
    var_20 = (!var_13);
    #pragma endscop
}
