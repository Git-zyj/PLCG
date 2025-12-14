/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((min(((min(var_14, var_2))), (3368306693047210826 & -919569419259022246))) | ((4858450497950906607 / (((var_15 >> (var_1 - 7076339941338705956)))))))))));
    var_19 &= (((((~(!128)))) ? -21308 : ((4294967295 ? var_7 : 157))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = ((919569419259022245 ? (((((~(arr_1 [i_0]))) >= (max((arr_1 [i_0]), (arr_1 [i_0])))))) : (min((max((-32767 - 1), 2147483647)), (arr_0 [i_0])))));
        var_20 -= (((min(-919569419259022246, (var_14 ^ 4858450497950906607))) << (5349162852720227536 - 5349162852720227535)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = 1853914180;
        arr_6 [7] [i_1] |= ((var_9 ? (min(-var_12, ((min(var_7, (arr_0 [i_1])))))) : (((((min(var_9, -32762))) ? (max((arr_0 [i_1]), var_15)) : (min(var_15, (arr_0 [i_1]))))))));
    }
    #pragma endscop
}
