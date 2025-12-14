/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max(var_16, (((((max(var_12, ((var_12 ? var_7 : var_10))))) ? (arr_0 [i_0]) : (min(var_14, 14695)))))));
        arr_4 [i_0] [i_0] = var_9;
    }

    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_7 [i_1] = ((2946409944 << ((((2608596963 ? 8817419654228320072 : -var_10)) - 8817419654228320061))));
        arr_8 [i_1] = 89;
    }
    var_17 &= var_10;
    #pragma endscop
}
