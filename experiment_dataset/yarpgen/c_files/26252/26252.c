/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 = var_6;
        arr_2 [i_0] = -9036918977331174206;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] &= (arr_0 [14]);
        var_15 = (((((-(((arr_4 [i_1]) ? var_2 : 1))))) ? (((arr_4 [i_1]) ? var_3 : -var_3)) : 510));
    }
    var_16 = (!var_5);
    var_17 = (min(var_17, 93));
    #pragma endscop
}
