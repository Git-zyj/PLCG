/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (!224);
    var_16 *= ((~((~(-1419190476762377373 ^ -1419190476762377385)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((((min(11586, 0))) && (arr_1 [2])));
        var_17 = (min(var_17, ((((max((arr_1 [i_0]), (((arr_1 [i_0]) ? 1634752656 : var_4))))) ? (((((arr_0 [i_0]) < 2660214656)))) : (min((arr_0 [i_0]), (min(8473660896167517163, (arr_1 [3])))))))));
        var_18 += (arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_19 ^= (arr_4 [i_1]);
        arr_5 [i_1 - 1] = ((((max((min(var_11, (arr_4 [i_1]))), ((max((arr_3 [i_1 - 2]), (arr_4 [i_1]))))))) >> ((((!var_8) || 35786)))));
    }
    #pragma endscop
}
