/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_6 != ((((var_6 ? var_10 : var_4)) % var_4))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_19 = (max((min(576459652791795712, (arr_1 [i_0]))), ((max(((var_4 ? -100 : (arr_2 [i_0]))), (arr_1 [i_0]))))));
        arr_4 [i_0] = (max(6943810909326072523, 9343080486458409981));
        var_20 = var_17;
        arr_5 [i_0] [i_0] = ((6 ? ((~(arr_2 [i_0]))) : ((-((~(arr_2 [i_0])))))));
    }
    #pragma endscop
}
