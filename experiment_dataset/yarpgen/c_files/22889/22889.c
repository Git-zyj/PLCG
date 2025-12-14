/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0] = ((9223372036854775807 ? -4838379398445487813 : 56850052145412113));
        var_14 ^= arr_0 [i_0] [i_0];
        arr_5 [i_0 + 3] = (!13961881484089579449);
        arr_6 [i_0] [i_0] &= 18389894021564139515;
    }
    var_15 = (0 ? (!18389894021564139504) : 3956396943);
    #pragma endscop
}
