/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((((~((var_1 ? var_9 : var_4)))) >= (47811 & 29923)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (max(var_14, (((!(arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = (40845 ? (((((7423376169926519820 << (5481 - 5478)))) ? 4637159987870403062 : (~58533))) : (min((7003 % 6768511928509439924), 4144946782887394090)));
    }
    #pragma endscop
}
