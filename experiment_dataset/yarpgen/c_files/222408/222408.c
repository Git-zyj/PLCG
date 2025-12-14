/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= 235;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 ^= var_10;
        arr_2 [i_0] [i_0] = (min(((min(232, 77))), var_11));
        arr_3 [i_0] [i_0 - 1] = (max((~var_17), (var_18 & -86)));
        arr_4 [i_0] [7] = (((((((213921936660392019 ? (arr_0 [i_0 - 2] [i_0]) : var_17)) >= (max((arr_0 [i_0] [i_0]), var_9))))) >> ((((~((~(arr_1 [i_0] [i_0]))))) - 48332))));
    }
    #pragma endscop
}
