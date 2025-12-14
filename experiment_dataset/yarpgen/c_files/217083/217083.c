/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (max(var_13, 4323455642275676160));
        var_14 = (min((min((((var_0 ? var_2 : 43))), (((arr_0 [i_0]) ? var_8 : -4323455642275676160)))), (((((min((arr_2 [i_0] [6]), (arr_2 [i_0] [i_0])))) ? ((((43 >= (arr_2 [i_0] [12]))))) : ((82 ? var_2 : (arr_1 [24]))))))));
    }
    var_15 |= ((!(7875530221179732108 | 43)));
    #pragma endscop
}
