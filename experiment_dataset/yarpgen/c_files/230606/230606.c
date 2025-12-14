/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((~(~5196))) | (-5197 <= var_7)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (min(738551443, var_6));
        var_12 = ((((max(var_0, var_1)) <= 0)));
        arr_2 [5] [i_0] = 130;
    }
    #pragma endscop
}
