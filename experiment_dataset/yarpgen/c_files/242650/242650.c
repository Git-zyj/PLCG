/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((1571148259131468220 ? var_0 : 0));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 *= ((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
        var_14 = (((((~(6 ^ 8)))) ? (~1191139330) : -14));
    }
    #pragma endscop
}
