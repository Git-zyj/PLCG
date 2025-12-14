/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = 80;
        arr_4 [i_0] = ((((max(((252 ? var_12 : var_9)), var_5))) ? ((max(1, (arr_0 [5] [i_0])))) : ((((arr_0 [3] [i_0]) >= 16794623905847567480)))));
        arr_5 [i_0] = (((arr_2 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [6] [i_0])));
    }
    var_18 = var_4;
    #pragma endscop
}
