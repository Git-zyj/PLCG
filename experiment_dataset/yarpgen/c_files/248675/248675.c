/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 8375617280263108983;
        arr_3 [i_0] = ((((((max(var_15, (arr_1 [i_0]))))) != (((arr_1 [i_0]) ? var_11 : var_7)))) ? ((max((max(var_10, var_7)), (arr_0 [i_0])))) : (max((arr_0 [i_0]), -8375617280263108983)));
    }
    var_16 = (min(var_16, var_2));
    #pragma endscop
}
