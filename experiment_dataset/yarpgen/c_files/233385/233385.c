/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!(var_3 / 47948));
    var_15 = (227 | 53945);
    var_16 = (min(var_16, var_12));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 &= (((((65520 == -6561) ? (min((arr_0 [i_0]), 7695725984298286362)) : ((23291 ? 29 : -7695725984298286362)))) | ((((((1938230036820434831 ? var_13 : (arr_0 [i_0])))) ? (!var_0) : (((arr_0 [i_0]) ? var_10 : 65535)))))));
        arr_2 [i_0] = (var_10 == (((var_5 ? (arr_0 [i_0]) : ((65535 << (15878242096698015076 - 15878242096698015073)))))));
    }
    #pragma endscop
}
