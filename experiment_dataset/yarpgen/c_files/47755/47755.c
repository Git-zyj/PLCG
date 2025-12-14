/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = ((var_10 ? var_4 : ((var_10 ? var_4 : (((1392976157 ? 50 : var_5)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 &= (((((-(!var_0)))) ? ((((!2231083450153059793) ? 69 : -1965))) : ((69 ? 4294967295 : 135777851))));
        var_17 = ((((min(var_7, (((arr_0 [i_0]) << (var_6 - 1928942595)))))) ? ((var_0 ? (~var_8) : (~36028796750528512))) : (((-(!60))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = (((((((-772523456423803402 ? (arr_4 [i_1]) : -8430243774744420483)) > (((arr_0 [i_1]) ? (arr_4 [i_1]) : var_12)))))) - ((var_0 + (max(var_0, (arr_2 [i_1] [9]))))));
        arr_5 [4] = (min((arr_3 [i_1]), 1));
        arr_6 [i_1] = ((((!(((var_11 ? 2251524935778304 : (arr_3 [i_1])))))) ? (((((4875764433399210408 ? 16799 : 16787))) ? (var_9 / var_0) : (((var_1 ? var_6 : var_1))))) : ((((~(arr_1 [i_1] [i_1])))))));
    }
    #pragma endscop
}
