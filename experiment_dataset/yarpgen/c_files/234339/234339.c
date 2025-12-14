/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_19 = 140736414613504;
        var_20 |= (max(-6798245785504281798, ((min((((arr_1 [i_0] [6]) - var_9)), 12)))));
        var_21 = (max((max((max((arr_1 [i_0] [i_0]), -448096137)), -1)), ((((-1584443542142375547 ? 12 : (arr_0 [i_0] [i_0]))) & 12))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_22 = ((((~(arr_3 [i_1 - 1] [i_1]))) != 4122424405693434882));
        var_23 = ((~((~(min((arr_1 [i_1 + 2] [i_1]), (arr_1 [i_1] [i_1])))))));
    }
    var_24 = ((1327104843 / var_2) * (max(var_5, ((var_13 ? var_17 : 0)))));
    #pragma endscop
}
