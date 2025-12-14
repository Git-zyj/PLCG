/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 += (((((-1 ? 0 : 31948))) && (!-31952)));
        var_14 *= (((((((!var_5) == var_2)))) ^ (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_15 = -43511;
    #pragma endscop
}
