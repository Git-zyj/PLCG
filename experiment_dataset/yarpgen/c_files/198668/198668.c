/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_15 = ((arr_1 [i_0] [i_0]) ? ((((1 >> (1020294616 - 1020294610))))) : ((((((arr_1 [i_0] [i_0]) && (arr_2 [i_0])))) - (91 ^ -1979061213))));
        arr_3 [3] = -1979061231;
        var_16 = 1;
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 2] [i_1] = (35 % 3468698864);
        arr_7 [15] = 1;
    }
    var_17 = -1651121767;
    #pragma endscop
}
